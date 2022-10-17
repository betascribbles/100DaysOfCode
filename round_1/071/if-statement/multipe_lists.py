#Working with multiple lists
 
fav_colors = ["Purple", "red"]
rainbow_colors = ["red", "orange", "green"]

for fav_color in fav_colors:
      if fav_color in rainbow_colors:
            print("Your favorite color {} is a rainbow color".format(fav_color))
      else:
            print("Your fav color {} is not a rainbow color".format(fav_color))