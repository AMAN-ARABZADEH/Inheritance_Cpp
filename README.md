# Inheritance C++
Example of inheritance in object-oriented programming using C++.

# Inheritance Example: Vehicles
This repository I provides an example of inheritance in object-oriented programming using C++.

# Visualization:
<br> 

![Inheritance Wikipedia](Multiple_Inheritance_Wikipedia.jpg)
<br>
*Image Source: [Wikipedia](https://en.wikipedia.org/wiki/Inheritance_(object-oriented_programming))*
<br>

#Notes: 
If you are new to object-oriented programming (OOP), make sure to read [my previous repository](https://github.com/AMAN-ARABZADEH/OOP_Cpp) about object-oriented programming. There, I explain what OOP is and why we need it.

## What is Inheritance?

Inheritance is a fundamental concept in object-oriented programming that allows a class (derived class) to inherit properties and behaviors from another class (base class). 
The derived class extends or modifies the behavior and properties inherited from the base class, enabling code reuse and promoting a hierarchical structure.

In this example, the classes `Car` and `Motorcycle` are derived classes, and the class `Vehicle` is the base class. 
The derived classes inherit properties and methods from the base class, such as brand, color, and honk(). 
This facilitates code reuse, modularity, and the creation of class hierarchies.

## Purpose and Benefits of Inheritance

Inheritance is used to model relationships between classes where a more specialized class (derived class) inherits characteristics from a more general class (base class). 
The derived class can extend or modify the behavior and properties inherited from the base class, allowing for code reuse and promoting a hierarchical structure.

The benefits of using inheritance include:

- **Code Reuse:** Inheritance allows you to reuse the existing code of the base class, reducing duplication and promoting a more efficient development process.

- **Modularity:** Inheritance promotes modular code design by allowing you to divide your code into smaller, more manageable classes.

- **Hierarchy and Organization:** Inheritance facilitates the creation of class hierarchies, making it easier to understand the relationships and dependencies between classes.

- **Code Readability:** Inheritance improves code readability by providing a clear structure that represents the relationships and commonalities between classes.

## When to Use Inheritance

Inheritance should be used when you have a class that shares common attributes and behaviors with another class, but also has additional specific attributes or behaviors. 
It is particularly useful in the following scenarios:

- **Generalization and Specialization:** When you have a general class that represents a category of objects and want to create specialized classes that inherit and extend its properties and behaviors.

- **Code Organization:** When you need to organize your codebase by creating a hierarchy of classes that share common characteristics.

- **Code Reuse:** When you want to reuse existing code from a base class to avoid duplication and promote a more efficient development process.

## Example Code

The provided example code showcases inheritance in action. 
It defines the classes `Vehicle`, `Car`, and `Motorcycle`, representing different types of vehicles. The `Car` and `Motorcycle` classes inherit properties and methods from the `Vehicle` base class, demonstrating the reuse and extension of code through inheritance.

To run the example code, compile and execute the C++ file using a compatible compiler.

## Sources

To learn more about inheritance, you can refer to the following resources:

- [Wikipedia: Inheritance (object-oriented programming)](https://en.wikipedia.org/wiki/Inheritance_(object-oriented_programming))
- [GeeksforGeeks: Inheritance in C++](https://www.geeksforgeeks.org/inheritance-in-c/)
- [W3Schools: C++ Inheritance](https://www.w3schools.com/cpp/cpp_inheritance.php)
- Books on C++ programming language and object-oriented programming concepts.


