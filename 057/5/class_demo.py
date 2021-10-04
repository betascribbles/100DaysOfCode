#!/usr/bin/python3
"""Demo on creating python class attributes INCORRECTLY"""

class Robot:
    """Empty demopo class"""
    pass

"""New Robot instances"""
x = Robot()
y = Robot()

"""Give values to intance attributes"""
x.name = "Robot 1"
x.build_year = "2020"

y.name = "Robot 2"
y.build_year = "2021"

"""Print values"""
print(x.name, x.build_year,'\n', y.name, y.build_year)
