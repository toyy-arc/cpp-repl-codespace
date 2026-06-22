#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Example 1: Simple function with autocomplete
void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

// Example 2: Template function
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Example 3: Class with methods
class Calculator {
private:
    double result = 0.0;

public:
    void add(double value) {
        result += value;
        std::cout << "Result: " << result << std::endl;
    }

    void subtract(double value) {
        result -= value;
        std::cout << "Result: " << result << std::endl;
    }

    double getResult() const {
        return result;
    }
};

int main() {
    std::cout << "=== C++ REPL Template ===" << std::endl;

    // Example 1: String operations (autocomplete demo)
    std::string message = "CodeSpaces";
    std::cout << "String: " << message << std::endl;
    std::cout << "Length: " << message.length() << std::endl;

    // Example 2: Vector operations
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "\nVector sum: ";
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    std::cout << sum << std::endl;

    // Example 3: Calculator class
    std::cout << "\nCalculator demo:" << std::endl;
    Calculator calc;
    calc.add(10);
    calc.add(5);
    calc.subtract(3);

    // Example 4: Template function
    std::cout << "\nTemplate function: " << add(5, 3) << std::endl;
    std::cout << "Template function: " << add(2.5, 3.7) << std::endl;

    return 0;
}
