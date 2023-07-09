#include <iostream>
#include <string>

/*
 * Auther: Aman Arabzadeh
 * Date: 2023-07-09
 *  Example of inheritance in object-oriented programming using C++.
 *  Read more here:
 *  https://github.com/AMAN-ARABZADEH/Inheritance_Cpp/tree/main
 */


// Base class Vehicle

class Vehicle {
protected:
    std::string brand{};         // Brand of the vehicle
    std::string vehicleType{};   // Type of the vehicle
    std::string color{};         // Color of the vehicle
    int numWheels{};             // Number of wheels

public:
    /**
     * @brief Default Construct a new Vehicle object
     *
     */
    Vehicle() {
        std::cout << "Vehicle object created!" << std::endl;
    }

    /**
     * @brief Construct a new Vehicle object
     *
     * @param brand The brand of the vehicle
     * @param vehicleType The type of the vehicle
     * @param color The color of the vehicle
     * @param numWheels The number of wheels the vehicle has
     */
    Vehicle(std::string brand, std::string vehicleType, std::string color, int numWheels)
            : brand(brand), vehicleType(vehicleType), color(color), numWheels(numWheels) {
        std::cout << "Vehicle object created with brand: " << brand << ", type: " << vehicleType
                  << ", color: " << color << ", wheels: " << numWheels << std::endl;
    }
    // Getter and setter methods for brand, vehicleType, color, and numWheels

    /**
     * @brief Get the brand of the vehicle
     *
     * @return The brand of the vehicle
     */
    std::string getBrand() const {
        return brand;
    }

    /**
     * @brief Set the brand of the vehicle
     *
     * @param brand The brand of the vehicle
     */
    void setBrand(std::string brand) {
        this->brand = brand;
    }

    /**
     * @brief Get the vehicle type
     *
     * @return The type of the vehicle
     */
    std::string getVehicleType() const {
        return vehicleType;
    }

    /**
     * @brief Set the vehicle type
     *
     * @param vehicleType The type of the vehicle
     */
    void setVehicleType(std::string vehicleType) {
        this->vehicleType = vehicleType;
    }

    /**
     * @brief Get the color of the vehicle
     *
     * @return The color of the vehicle
     */
    std::string getColor() const {
        return color;
    }

    /**
     * @brief Set the color of the vehicle
     *
     * @param color The color of the vehicle
     */
    void setColor(std::string color) {
        this->color = color;
    }

    /**
     * @brief Get the number of wheels of the vehicle
     *
     * @return The number of wheels
     */
    int getNumWheels() const {
        return numWheels;
    }

    /**
     * @brief Set the number of wheels of the vehicle
     *
     * @param numWheels The number of wheels
     */
    void setNumWheels(int numWheels) {
        this->numWheels = numWheels;
    }

    /**
     * @brief Honk the vehicle's horn
     */
    void honk() const {
        std::cout << "Honk! Honk!" << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    std::string model{};    // Model of the car

public:
    /**
     * @brief Construct a new Car object
     *
     * @param brand The brand of the car
     * @param vehicleType The type of the vehicle (car)
     * @param color The color of the car
     * @param numWheels The number of wheels the car has
     * @param model The model of the car
     */
    Car(std::string brand, std::string vehicleType, std::string color, int numWheels, std::string model)
            : Vehicle(brand, vehicleType, color, numWheels), model(model) {
        std::cout << "Car object created with brand: " << brand << ", type: " << vehicleType
                  << ", color: " << color << ", wheels: " << numWheels << ", model: " << model << std::endl;
    }

    /**
     * @brief Get the model of the car
     *
     * @return The model of the car
     */
    std::string getModel() const {
        return model;
    }

    /**
     * @brief Set the model of the car
     *
     * @param model The model of the car
     */
    void setModel(std::string model) {
        this->model = model;
    }

    /**
     * @brief Drive the car
     */
    void drive() const {
        std::cout << "Driving the car!" << std::endl;
    }
};

// Derived class Motorcycle
class Motorcycle : public Vehicle {
private:
    std::string subtype{};    // Subtype of the motorcycle

public:
    /**
     * @brief Construct a new Motorcycle object
     *
     * @param brand The brand of the motorcycle
     * @param vehicleType The type of the vehicle (motorcycle)
     * @param color The color of the motorcycle
     * @param numWheels The number of wheels the motorcycle has
     * @param subtype The subtype of the motorcycle
     */
    Motorcycle(std::string brand, std::string vehicleType, std::string color, int numWheels, std::string subtype)
            : Vehicle(brand, vehicleType, color, numWheels), subtype(subtype) {
        std::cout << "Motorcycle object created with brand: " << brand << ", type: " << vehicleType
                  << ", color: " << color << ", wheels: " << numWheels << ", subtype: " << subtype << std::endl;
    }

    /**
     * @brief Get the subtype of the motorcycle
     *
     * @return The subtype of the motorcycle
     */
    std::string getSubtype() const {
        return subtype;
    }

    /**
     * @brief Set the subtype of the motorcycle
     *
     * @param subtype The subtype of the motorcycle
     */
    void setSubtype(std::string subtype) {
        this->subtype = subtype;
    }

    /**
     * @brief Ride the motorcycle
     */
    void ride() const {
        std::cout << "Riding the motorcycle!" << std::endl;
    }
};


int main() {
    // Creating objects of derived classes
    Car car("Ferrari", "Car", "Red", 4, "LaFerrari");
    car.setBrand("Ferrari");
    car.setModel("LaFerrari");

    Motorcycle motorcycle("The Best", "Motorcycle", "Silver", 2, "Superbike");
    motorcycle.setVehicleType("Super Sport");

    // Accessing properties and methods
    std::cout << "Car: " << car.getBrand() << " " << car.getModel() << std::endl;
    std::cout << "Type: " << car.getVehicleType() << ", Color: " << car.getColor() << ", Wheels: " << car.getNumWheels()
              << std::endl;
    car.honk();
    car.drive();

    std::cout << "Motorcycle: " << motorcycle.getBrand() << " " << motorcycle.getSubtype() << std::endl;
    std::cout << "Type: " << motorcycle.getVehicleType() << ", Color: " << motorcycle.getColor() << ", Wheels: "
              << motorcycle.getNumWheels() << std::endl;
    motorcycle.honk();
    motorcycle.ride();



    /// Explanation

    std::cout << "\n\n\n================================COMMENTS====================================\n";


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



    return 0;
}
