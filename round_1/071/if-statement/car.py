cars = ["subaru", "bmw", "audi", "toyota"]
for car in cars:
      if (car == "bmw"):
            print(car.upper())
      print(car.title())

#Using the in keyword to check a value in a list
if "audi" in cars:
      print("Audi is available in our list")

#Using not to confirm if a value is not in a list
if "matatu" not in cars:
      print("Matatu is not available")
else:
      print("matatu is here")