# using range() to print numerical values
"""
Note that the last element provided in the range is 
not printed
"""
print("Using range() to print numerical values")
for number in range(1,10):
      print("\t", number)

#Using range() to make a list of numbers
numbers = list(range(0, 20, 3))
print("\nList made from range():\n\t{}".format(numbers))

# Performing simple statistics to lists
print("Minimum:\n {}".format(min(numbers)))
print("Max:\n {}".format(max(numbers)))
print("Sum:\n {}".format(sum(numbers)))

#Using list comprehension to populate a list
"""list_name = [expresion for index in range(start,stop, step)]"""
my_list = [(age * 72) for age in range(0, 10)]
print("\nPopulated by list comprehension:\n {}".format(my_list))

#Using a list comprehension
for number in range(1, 20, 2):
      print("odd numbers:\t {}".format(number))

#multiples of 3
numbers = []
for number in range(3, 31):
      if number == 3:
            print("\nThis is a multiple of 3:")
      if (number % 3 == 0):
            numbers.append(number)
            print(number)

#Cubes of numbers 1 - 10
print("\nCubes of numbers")
for number in range (1, 11):
      print(number ** 3)

print("\nUsing a list comprehension to generate cubical numbers")
cube_list_comprehension = [(number ** 3) for number in range(1, 11)]
print(cube_list_comprehension)