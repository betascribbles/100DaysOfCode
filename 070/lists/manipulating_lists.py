# Printing a simple list
print("WORKING WITH LISTS AND MANIPULATING THEM \n")
numbers = ["one", "two", "three"]
print("Original list:\t {} \n".format(numbers))

# Changing an element in a list
numbers[2] = "change three"
print("After changing numbers[3] the list became:\t {} \n".format(numbers))

# Adding elements to the end of a list
numbers.append("append four")
print("After appending 'four':\t {} \n".format(numbers))

# Inserting elements at specific positions in a list
numbers.insert(4, "insert five")
print("After inserting five:\t {} ".format(numbers))

numbers.insert(0, "insert zero")
print("insert zero at the beginning:\t {} \n".format(numbers))

# Removing an item in a list 
del numbers[0]
print("Remove 'insert zero':\t {} \n".format(numbers))

# Using pop to remove the last element of a list and printing it
popped_item = numbers.pop()
print("The popped item is:\t {} \n".format(popped_item))
print("Popped the last item:\t {}".format(numbers))

# Using pop(index) to remove an item from any position in the list
"""Passing a number in pop will remove the item in that index"""
pop_one = numbers.pop(0)
print("We have popped:\t {}".format(pop_one))
print("After popping one:\t {}\n".format(numbers))