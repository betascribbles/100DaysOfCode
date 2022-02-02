"""draw_one.py
- This is a simple module that draw some polygons using the turtle python library.
- I wrote this program to practise on OOP and using libraries.
"""

import turtle

class Polygon:
    def __init__(self, sides, name, size=100, color="red", line_thickness="8"):
        self.sides = sides
        self.name = name
        self.size = size
        self.color = color
        self.line_thickness = line_thickness
        self.interior_angle = (self.sides-2)*180
        self.angle= self.interior_angle/self.sides
        
    def draw(self):
        for i in range(self.sides):
            turtle.pensize(self.line_thickness)
            turtle.color(self.color)
            turtle.forward(100)
            turtle.right(180-self.angle)

class Square(Polygon):
    def __init__(self, size=100, color="blue", line_thickness="8"):
        super().__init__(4, "SQUARE", size, color, line_thickness)

    def draw(self):
        turtle.begin_fill()
        super().draw()
        turtle.end_fill()

square = Square()

square.draw()

turtle.done()