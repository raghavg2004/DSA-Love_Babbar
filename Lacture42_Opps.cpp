#include <iostream>
using namespace std;

// ===================== Base Class (Person) ==========================
class Person {
private:
    string name;
    int age;

public:
    // Default Constructor
    Person() {
        this->name = "Unknown";
        this->age = 0;
        cout << "Default constructor called for Person" << endl;
    }

    // Parameterized Constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Parameterized constructor called for Person" << endl;
    }

    // Setter
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        if (age >= 0)
            this->age = age;
    }

    // Getter
    string getName() const {
        return this->name;
    }

    int getAge() const {
        return this->age;
    }

    // Method to display info
    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for Person: " << name << endl;
    }
};

// ===================== Derived Class (Employee) ======================
class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    // Constructor using initialization list
    Employee(string name, int age, int id, double salary)
        : Person(name, age), employeeId(id), salary(salary) {
        cout << "Constructor called for Employee" << endl;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    double getSalary() const {
        return salary;
    }

    void display() const override {
        Person::display(); // Call base class function
        cout << "Employee ID: " << employeeId << ", Salary: $" << salary << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for Employee ID: " << employeeId << endl;
    }
};

// ===================== Main Function ======================
int main() {
    cout << "--- Creating a Person object ---" << endl;
    Person p1;
    p1.setName("John");
    p1.setAge(30);
    p1.display();

    cout << "\n--- Creating an Employee object ---" << endl;
    Employee emp("Alice", 28, 101, 50000.75);
    emp.display();

    cout << "\n--- Updating Employee salary ---" << endl;
    emp.setSalary(55000.25);
    cout << emp.getName() << "'s new salary is $" << emp.getSalary() << endl;

    // Destructors will be automatically called as objects go out of scope
    return 0;
}
