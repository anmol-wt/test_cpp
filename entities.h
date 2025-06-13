#ifndef ENTITIES_H
#define ENTITIES_H

#include <string>
#include <vector>

namespace MyNamespace {

    // Enum for user roles
    enum class Role {
        Admin,
        User,
        Guest
    };

    // Struct for a simple data container
    struct Point {
        int x;
        int y;
    };

    // Template function
    template <typename T>
    T getMax(T a, T b);

    // Overloaded function
    void printMessage(const std::string& msg);
    void printMessage(const std::string& msg, int count);

    // Class with members and methods
    class User {
    private:
        std::string name;
        int age;
        Role role;

    public:
        User(const std::string& name, int age, Role role = Role::Guest);

        std::string getName() const;
        void setName(const std::string& newName);

        int getAge() const;
        void setAge(int newAge);

        Role getRole() const;
        void promote();
    };

    // Free function
    int add(int a, int b);

} // namespace MyNamespace

// Template implementation
template <typename T>
T MyNamespace::getMax(T a, T b) {
    return (a > b) ? a : b;
}

#endif // ENTITIES_H
