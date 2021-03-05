class Student:
	def __init__(self,name=None,age=None,marks=None):
		self.name = name
		self.age = age
		self.marks = marks

	def printDetails(self):
		return(f"Name is {self.name} , Age is {self.age} and marks are {self.marks}%")

sahil = Student()
sahil.name = "sahil chandel"
sahil.age = 18
sahil.marks = 76
sahil.pind = "Paroha"
print(f'{sahil.printDetails()}')

# Abstract Method must be defined in every inherited class

from abc import ABC , abstractmethod

class Shape(ABC):
	@abstractmethod
	def printArea(self):
		return 0

class Rectangle(Shape):
	
	def __init___ (self):
		self.length = 4
		self.width = 5

	def printArea(self):
		return (self.length*self.width)

rect = Rectangle()
print(rect.printArea())