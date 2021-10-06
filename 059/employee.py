#!/usr/bin/python3
"""A simple employee class with instances"""

class Employee:
    """Represents an employee"""

    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

person_one = Employee('Caleb', 'Curry', 27)
person_two = Employee('Ali', 'Abdaal', 25)

print(person_one.first_name, '\t', person_one.last_name, '\t', person_one.age)
print(person_two.first_name, '\t', person_two.last_name, '\t', person_two.age)
