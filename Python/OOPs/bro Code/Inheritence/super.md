# Super()
Super is used to access methods from parent class to a child class
</br>

If the child classes don't define their own constructor (init) then super() is not required to fetch the parent contructor as there is only one constructor in a program i.e. the parent contructor </br>
But, if there are contructors defined in child classes too then super is reqired to inherit the parent contructors </br>

## Syntax
`super().__init__(parentClassAttribute-1, parentClassAttribute-2, and so on)`
</br>

Also the child class constructors should contain the attributes of the super() class </br>

### Example usage: </br>
`class Square(Shape):`</br>
&ensp;&ensp; `def __init__(self, color, is_filled, width):` </br> 
&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;`super().__init__(color, is_filled)` </br>
&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;`self.width=width`
