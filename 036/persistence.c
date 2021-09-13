"""
Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

For example:

persistence(39) # returns 3, because 3*9=27, 2*7=14, 1*4=4
                  # and 4 has only one digit
                   
persistence(999) # returns 4, because 9*9*9=729, 7*2*9=126,
                    # 1*2*6=12, and finally 1*2=2
"""

def persistence(num, cycles = 0):
    if num > 9:
	result = 1
	for i in str(num):
	    result = result * int(i)
	    cycles += 1
	return persistence(result, cycles)
    else:
	return cycles
