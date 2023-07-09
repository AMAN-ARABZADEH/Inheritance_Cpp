#include <iostream>
#include <string>

// Base class
class Vehicle {
protected:
    std::string brand{};
    std::string vehicleType{};
    std::string color{};
    int numWheels{};

public:
    // Default constructor
    Vehicle() {
        std::cout << "Vehicle object created!" << std::endl;
    }

    // Parameterized constructor
    Vehicle(std::string brand, std::string vehicleType, std::string color, int numWheels)
            : brand(brand), vehicleType(vehicleType), color(color), numWheels(numWheels) {
        std::cout << "Vehicle object created with brand: " << brand << ", type: " << vehicleType
                  << ", color: " << color << ", wheels: " << numWheels << std::endl;
    }

    // Getter method for brand (const member function)
    std::string getBrand() const {
        return brand;
    }

    // Setter method for brand
    void setBrand(std::string brand) {
        this->brand = brand;
    }

    // Getter method for vehicleType (const member function)
    std::string getVehicleType() const {
        return vehicleType;
    }

    // Setter method for vehicleType
    void setVehicleType(std::string vehicleType) {
        this->vehicleType = vehicleType;
    }

    // Getter method for color (const member function)
    std::string getColor() const {
        return color;
    }

    // Setter method for color
    void setColor(std::string color) {
        this->color = color;
    }

    // Getter method for numWheels (const member function)
    int getNumWheels() const {
        return numWheels;
    }

    // Setter method for numWheels
    void setNumWheels(int numWheels) {
        this->numWheels = numWheels;
    }

    void honk() const {
        std::cout << "Honk! Honk!" << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    std::string model;

public:
    // Parameterized constructor
    Car(std::string brand, std::string vehicleType, std::string color, int numWheels, std::string model)
            : Vehicle(brand, vehicleType, color, numWheels), model(model) {
        std::cout << "Car object created with brand: " << brand << ", type: " << vehicleType
                  << ", color: " << color << ", wheels: " << numWheels << ", model: " << model << std::endl;
    }

    // Getter method for model (const member function)
    std::string getModel() const {
        return model;
    }

    // Setter method for model
    void setModel(std::string model) {
        this->model = model;
    }

    void drive() const {
        std::cout << "Driving the car!" << std::endl;
    }
};

// Derived class Motorcycle
class Motorcycle : public Vehicle {
private:
    std::string subtype;

public:
    // Parameterized constructor
    Motorcycle(std::string brand, std::string vehicleType, std::string color, int numWheels, std::string subtype)
            : Vehicle(brand, vehicleType, color, numWheels), subtype(subtype) {
        std::cout << "Motorcycle object created with brand: " << brand << ", type: " << vehicleType
                  << ", color: " << color << ", wheels: " << numWheels << ", subtype: " << subtype << std::endl;
    }

    // Getter method for subtype (const member function)
    std::string getSubtype() const {
        return subtype;
    }

    // Setter method for subtype
    void setSubtype(std::string subtype) {
        this->subtype = subtype;
    }

    void ride() const {
        std::cout << "Riding the motorcycle!" << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Car car("Ford", "Car", "Red", 4, "Mustang");
    car.setBrand("Chevrolet");
    car.setModel("Camaro");

    Motorcycle motorcycle("Honda", "Motorcycle", "Blue", 2, "Sport");
    motorcycle.setVehicleType("Cruiser");

    // Accessing properties and methods
    std::cout << "Car: " << car.getBrand() << " " << car.getModel() << std::endl;
    std::cout << "Type: " << car.getVehicleType() << ", Color: " << car.getColor() << ", Wheels: " << car.getNumWheels() << std::endl;
    car.honk();
    car.drive();

    std::cout << "Motorcycle: " << motorcycle.getBrand() << " " << motorcycle.getSubtype() << std::endl;
    std::cout << "Type: " << motorcycle.getVehicleType() << ", Color: " << motorcycle.getColor() << ", Wheels: " << motorcycle.getNumWheels() << std::endl;
    motorcycle.honk();
    motorcycle.ride();
/*
    // Explanation of inheritance
    std::cout << "Inheritance is a fundamental concept in object-oriented programming." << std::endl;
    std::cout << "It allows a class (derived class) to inherit properties and behaviors from another class (base class)." << std::endl;
    std::cout << "In this example, the classes Car and Motorcycle are derived classes, and the class Vehicle is the base class." << std::endl;
    std::cout << "Car and Motorcycle inherit properties and methods from Vehicle, such as brand, color, honk(), and more." << std::endl;
    std::cout << "This enables code reuse, modularity, and the ability to create class hierarchies." << std::endl;

    // Purpose and benefits of inheritance
    std::cout << "Inheritance is used to model relationships between classes where a more specialized class (derived class)" << std::endl;
    std::cout << "inherits characteristics from a more general class (base class)." << std::endl;
    std::cout << "The derived class can extend or modify the behavior and properties inherited from the base class," << std::endl;
    std::cout << "allowing for code reuse and promoting a hierarchical structure." << std::endl;
    std::cout << "It helps in organizing and managing large codebases, improves code readability, and reduces duplication." << std::endl;

    // When to use inheritance
    std::cout << "Inheritance should be used when you have a class that shares common attributes and behaviors with another class," << std::endl;
    std::cout << "but also has additional specific attributes or behaviors." << std::endl;
    std::cout << "For example, in this code, Car and Motorcycle are specialized types of vehicles," << std::endl;
    std::cout << "which have their own unique properties (e.g., model for Car, subtype for Motorcycle)." << std::endl;
    std::cout << "By using inheritance, you can create a base class (Vehicle) that defines common attributes and behaviors," << std::endl;
    std::cout << "and then derive specialized classes (Car, Motorcycle) that inherit those common traits and add their own specific features." << std::endl;
*/
    return 0;
}
