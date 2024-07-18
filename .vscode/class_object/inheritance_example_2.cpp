/*

    - Vehicle (base class)
    - Attributes: color, maxSpeed
    - Methods: startEngine(), accelerate()

    - Car (derived from Vehicle)
    - Attributes: numDoors, transmissionType
    - Methods: openDoor(), shiftGears()

    - Truck (derived from Vehicle)
    - Attributes: cargoCapacity, numWheels
    - Methods: loadCargo(), inflateTires()

*/

#include <iostream>

using namespace std;

class Vehicle
{
public:
    string color;
    int maxSpeed;

    void startEngine()
    {
        cout << "Engine started" << endl;
    }

    void accelerate()
    {
        cout << "Accelerating" << endl;
    }
};

class Car : public Vehicle
{
public:
    int numDoors;
    string transmissionType;

    void openDoor()
    {
        cout << "Opening door" << endl;
    }

    void shiftGears()
    {
        cout << "Shifting gears" << endl;
    }

    // creating a constructor
    Car(string color, int maxSpeed, int numDoors, string transmissionType)
    {
        this->color = color;
        this->maxSpeed = maxSpeed;
        this->numDoors = numDoors;
        this->transmissionType = transmissionType;
    }

    // display properties
    void displayProperties()
    {
        cout << "Color: " << color << endl;
        cout << "Max Speed: " << maxSpeed << endl;
        cout << "Number of doors: " << numDoors << endl;
        cout << "Transmission type: " << transmissionType << endl;
    }
};

class Truck : public Vehicle
{
public:
    int cargoCapacity;
    int numWheels;

    void loadCargo()
    {
        cout << "Loading cargo" << endl;
    }

    void inflateTires()
    {
        cout << "Inflating tires" << endl;
    }

    // creating a constructor
    Truck(string color, int maxSpeed, int cargoCapacity, int numWheels)
    {
        this->color = color;
        this->maxSpeed = maxSpeed;
        this->cargoCapacity = cargoCapacity;
        this->numWheels = numWheels;
    }

    // display properties
    void displayProperties()
    {
        cout << "Color: " << color << endl;
        cout << "Max Speed: " << maxSpeed << endl;
        cout << "Cargo Capacity: " << cargoCapacity << endl;
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

int main()
{
    cout << "Car Object : " << endl;
    // creating a car object
    Car car1("red", 200, 4, "automatic");
    car1.startEngine();
    car1.accelerate();
    car1.shiftGears();
    car1.openDoor();
    car1.displayProperties();

    cout << "\nTruck Object : " << endl;

    // creating a truck object
    Truck truck1("blue", 150, 1000, 6);
    truck1.startEngine();
    truck1.accelerate();
    truck1.loadCargo();
    truck1.inflateTires();
    truck1.displayProperties();

    cout << endl;

    return 0;
}