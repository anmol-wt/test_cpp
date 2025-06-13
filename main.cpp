#include <iostream>
#include "entities.h"

using namespace MyNamespace;

int main() {
    // Using enum and struct
    Role r = Role::User;
    Point p = {10, 20};

    std::cout << "Point coordinates: (" << p.x << ", " << p.y << ")\n";

    // Class usage
    User user("Alice", 30, r);
    std::cout << "User: " << user.getName() << ", Age: " << user.getAge() << "\n";

    user.promote();
    user.setAge(31);

    // Function usage
    printMessage("Welcome!");
    printMessage("Repeating...", 3);

    std::cout << "Addition: " << add(5, 10) << "\n";

    // Template usage
    std::cout << "Max: " << getMax(4, 9) << "\n";

    return 0;
}

// Function definitions
void MyNamespace::printMessage(const std::string& msg) {
    std::cout << msg << "\n";
}

void MyNamespace::printMessage(const std::string& msg, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << msg << " ";
    }
    std::cout << "\n";
}

int MyNamespace::add(int a, int b) {
    return a + b;
}

// Class method definitions
User::User(const std::string& name, int age, Role role)
    : name(name), age(age), role(role) {}

std::string User::getName() const {
    return name;
}

void User::setName(const std::string& newName) {
    name = newName;
}

int User::getAge() const {
    return age;
}

void User::setAge(int newAge) {
    age = newAge;
}

Role User::getRole() const {
    return role;
}

void User::promote() {
    if (role == Role::Guest) role = Role::User;
    else if (role == Role::User) role = Role::Admin;
}
