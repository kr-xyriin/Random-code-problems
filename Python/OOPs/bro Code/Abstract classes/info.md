# Abstract classes
Abstract methods in python are helpful to make sure when defining an object, all the methods in a calss are being used
</br>

Abstract methods are defined in the children classes and are just passed as methods in the parent class
</br>

if any of the mthods present in the parent class are not defined in the child class then the object is never **INSTANTIATED** (initialized) and thus reduces program's ineffeciency
</br>

## Requisites
To use abstract methods
one must `import abstractmethod` and `use the decorator` **@abstractmethod** before defining the method in the parent class  
</br>

Example usage: 
</br>
`@abstractmethod` </br>
`class xyz(self):` `pass`