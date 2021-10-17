#sorting a list

names = ["Maarten", "Nobert", "Ali", "Asli", "Thomas", "Kuzgun", "Raya"]
print("Unsorted guest list:\n {}\n".format(names))

names.sort(reverse=False)
print("Sorted reverse=False:\n {}\n".format(names))

names.sort(reverse=True)
print("Sorted reverse=True:\n {}\n".format(names))

# using sorted() to temporarily sort a list
print("This is a temporarily sorted list:\n {}".format(sorted(names)))
print("This is the original list:\n {}\n".format(names))

#Using reverse() to print a list in reverse order
names.append("newName")
names.reverse()
print("This is a reversed list:\n {}".format(names))

names.reverse()
print("This is a reversed list:\n {}\n".format(names))

# Finding the length of a list using len()
print("The length of this list is {}".format(len(names)))