#!user/bin/python3
"""Doc string"""

class Base:
"""What is this classs about"""
	__nb_object = 0

	def __init__ (self, id=None):
		"""
		initialization of the base class
	
		Args:
			id (int): The new base id
		"""
	if id is not None:
		self.id = id
	else:
		Base.__nb.object += 1
		self.id = Base.__nb_object;
