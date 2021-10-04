#!/usr/bin/python3
""" Defines a Square"""

class Square:
    """Represents a square"""

    def __init__(self,size=0):
        """Initialize a new instance

        Args:
            size (int): size of square
        """
        if not isinstance(size, int):
            raise TypeError("Size must be integer")
        elif size < 0:
            raise ValueError("size must be >= 0")

        self.__size = size

