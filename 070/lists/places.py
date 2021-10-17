""" Think of at least five places in the world you’d like to
visit.
      • Store the locations in a list. Make sure the list is not in alphabetical order.
      • Print your list in its original order. Don’t worry about printing the list neatly, just print it as a raw Python list.
      • Use sorted() to print your list in alphabetical order without modifying the actual list.
      • Show that your list is still in its original order by printing it.
      • Use sorted() to print your list in reverse alphabetical order without changing the order of the original list.
      • Show that your list is still in its original order by printing it again.
      • Use reverse() to change the order of your list. Print the list to show that its order has changed.
      • Use reverse() to change the order of your list again. Print the list to show it’s back to its original order.
      • Use sort() to change your list so it’s stored in alphabetical order. Print the list to show that its order has been changed.
      • Use sort() to change your list so it’s stored in reverse alphabetical order.
Print the list to show that its order has changed.
"""
dream_places = ["Malaysia", "Antactica", "China","Pensylvinia", "New York"]
print("My dream places:\n {}\n".format(dream_places))

print("Sorted list:\n {}\n".format(sorted(dream_places)))

print("My list is still in its original order:\n {}\n".format(dream_places))

print("Sorting temporarily in reverse alphabetical order:\n {}\n".format(sorted(dream_places, reverse=True)))

print("My list is still in its original order:\n {}\n".format(dream_places))

dream_places.reverse()
print("Reversed the order of my list:\n {}\n".format(dream_places))

dream_places.reverse()
print("Reversed the order of my list again:\n {}\n".format(dream_places))

dream_places.sort()
print("Sorted the list in alphabetical order:\n {}\n".format(dream_places))

dream_places.sort(reverse=True)
print("Sorted the list in alphabetical order again:\n {}\n".format(dream_places))

print("I am dreaming to go to {} places.\n".format(len(dream_places)))