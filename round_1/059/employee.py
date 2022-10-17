#!/usr/bin/python3
"""A simple employee class with instances"""

class Employee:
    """Represents an employee"""

    total_employees = 0
    raise_amount = 1.10

    def __init__(self, first_name, last_name, pay):
        self.first_name = first_name
        self.last_name = last_name
        self.pay = pay

        Employee.total_employees += 1

    def print_names(self):
        return '{} {}'.format(self.first_name, self.last_name)

    def raise_pay(self):
        return (self.pay ** Employee.raise_amount)

    @classmethod
    def raise_salary(cls, amount):
        cls.raise_amount = amount

person_one = Employee('Caleb', 'Curry', 27)
person_two = Employee('Ali', 'Abdaal', 25)

print(person_one.print_names())
print(person_two.print_names())

Employee.raise_salary(120)

print(person_one.raise_amount)
print(person_two.raise_pay())

print(Employee.total_employees)
