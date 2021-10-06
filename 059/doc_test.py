"""
A simple file to illustrate the use of
doctest in writing code
"""

def factorial(n):
    """Returns the factorial on a digit >= 0
    >>>factorial(6)
    1, 1, 2, 6, 24, 120

    >>>factorial(-1)
    Traceback (most recent call last):
        ...
    ValueError: n must be >= 0
    """
    import math
    if not n > 0:
        raise ValueError("n must be >= 0")
    result = 1
    factor = 2
    while factor <= n:
        result *= factor
        factor += 1
    return result

if __name__ == "__main__":
    import doctest
    doctest.testmod()

