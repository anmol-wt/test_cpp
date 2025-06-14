#include <iostream>
#include <string>

namespace MathUtils {
    // Function inside a namespace
    int add(int a, int b) {
        return a + b;
    }

    // Enum inside a namespace
    enum Operation {
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    };
}

// Struct definition
struct Point {
    int x;
    int y;

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

// Class definition
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Method
    void greet() const {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }

    // Static method
    static void species() {
        std::cout << "Species: Human" << std::endl;
    }
};

// Standalone function
void displayOperation(MathUtils::Operation op) {
    switch (op) {
        case MathUtils::ADD: std::cout << "Addition" << std::endl; break;
        case MathUtils::SUBTRACT: std::cout << "Subtraction" << std::endl; break;
        case MathUtils::MULTIPLY: std::cout << "Multiplication" << std::endl; break;
        case MathUtils::DIVIDE: std::cout << "Division" << std::endl; break;
    }
}

int main() {
    // Using namespace function
    int sum = MathUtils::add(5, 7);
    std::cout << "Sum: " << sum << std::endl;

    // Using struct
    Point p{3, 4};
    p.display();

    // Using class
    Person person("Alice", 30);
    person.greet();
    Person::species();

    // Using enum
    displayOperation(MathUtils::MULTIPLY);

    return 0;
}
