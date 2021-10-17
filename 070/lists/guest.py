#stage 1
"""If you could invite anyone, living or deceased, to dinner, who
would you invite? Make a list that includes at least three people you’d like to invite to dinner. Then use your list to print a message to each person, inviting them to dinner
"""

guests = ["Asli", "Thomas", "Nobert"]

for guest in guests:
      print("hello {}, I am inviting to you dinner at mine.".format(guest))

#stage 2
"""You just heard that one of your guests can’t make the
dinner, so you need to send out a new set of invitations. You’ll have to think of someone else to invite.
      • Add a print statement at the end of your program stating the name of the guest who can’t make it.
      • Modify your list, replacing the name of the guest who can’t make it with the name of the new person you are inviting.
      • Print a second set of invitation messages, one for each person who is still in your list.
"""
print("\n{} can't make it to dinner, I have replaced him with someone else".format(guests[-1]))
guests.pop()
guests.append("Maarten")
for guest in guests:
      print("Welcome to mine, {}".format(guest))
print("Current list:\t {}".format(guests))      

#stage 3
"""You just found a bigger dinner table, so now more space is
available. Think of three more guests to invite to dinner.
      • Add a print statement to the end of your program informing people that you found a bigger dinner table.
      • Use insert() to add one new guest to the beginning of your list.
      • Use insert() to add one new guest to the middle of your list.
      • Use append() to add one new guest to the end of your list.
      • Print a new set of invitation messages, one for each person in your list.
"""
print("\nI found a bigger dinner table and would like to increase my guest list.")
guests.insert(0, "Jacob")
centre = len(guests)//2
guests.insert(centre, "Abdaal")
guests.append("Caleb")
for guest in guests:
      print("Welcome to mine for dinner, {}".format(guest))
print("\nLatest list:\t {}\n".format(guests))

#stage 4
"""You just found out that your new dinner table won’t
arrive in time for the dinner, and you have space for only two guests.
      • Add a new line that prints a message saying that you can invite only two people for dinner.
      • Use pop() to remove guests from your list one at a time until only two names remain in your list. Each time you pop a name from your list, print a message to that person letting them know you’re sorry you can’t invite them to dinner.
      •  Print a message to each of the two people still on your list, letting them know they’re still invited.
      • Use del to remove the last two names from your list, so you have an empty list. Print your list to make sure you actually have an empty list at the end of your program.
"""
### I HAVE AN ISSUE HERE. TRYING TO SOLVE
print("I'm sorry guys, my big table will arrive late, I can only invite 2 people right now.")
for guest in guests:
      total = len(guests)
      if(total == 2) | (total > 2):
            guests.pop()
            print("Hey {}, I'm sorry I cannot invite you for dinner".format(guest))
print("Heyya {}, You still in for dinner at mine.".format(guest))
print("Current list:\t {}".format(guests))
del guests[0]
del guests[-1]
print("Remaining guests:\t {}".format(guest))