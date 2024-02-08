# PASS BY REFERENCE


*** pass by value *** (has 2 independent variables)
- Value is directly passed into the function.
- With this the value can be accessed, but cannot be changed.
- disadvantage: the value when passed to the function, a copy is created. Duplication in memory.



*** Pass by reference *** (has one variable shared by the function to which it has been passed)
- value is passed as a reference to the function.
- with this the value can be accessed and changed without creating a copy because the address of the original value will be shared.
- Disadvantage:  since the original value is shared there is a risk of change in value when the change is not meant. 
  Hence it's suggested to make the argument const while passing it as an argument.
