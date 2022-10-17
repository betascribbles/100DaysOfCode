num = input("Enter a number: ")
num = int(num)

if num % 10 == 0:
      print("{} is a multiple of 10".format(num))
else:
      print("{} is not a multiple of 10\n {}/10 has a reminder of {}".format(num, num, num%10))