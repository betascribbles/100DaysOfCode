"""
Names: 
      Store the names of a few of your friends in a list called names. Print each person’s name by accessing each element in the list, one at a time.

Greetings: 
      Start with the list you used in Exercise 3-1, but instead of just printing each person’s name, print a message to them. The text of each message should be the same, but each message should be personalized with the person’s name.
"""

names = ["Iman", "Yusra", "Asli", "Thomas", "Nobert"]

for name in names:
      print("{} is my friend".format(name))