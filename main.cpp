#include <iostream>
#include <iomanip>

int main() {

    // Basic example #1
    double num1 = 0, num2 = 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Enter integer number 1 : ";
    std::cin >> num1;
    std::cout << "Enter integer number 2 : ";
    std::cin >> num2;

    try {
        if (num2 == 0) {
            throw "This is undefined behavior.";
        } else {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
    }
    catch (const char *exc) {
        std::cout << "Error.. " << exc << std::endl;
    }

    // Basic example #2
    // Another way to throw exception
    try {
        std::cout << "Let's throw this exception.." << std::endl;
        throw std::runtime_error("An error has occurred..");

        // What is the behavior for this?
        std::cout << "Will you print me?" << std::endl;
    }
    
    // All exceptions are based on std::exception
    catch (std::exception &exp) {
        
        // what() Prints an explanatory string
        std::cout << "Handled Exception : " <<  exp.what() << std::endl;
    }
    
    // If exceptions aren't caught any place else 
    // this will catch it
    catch (...) {
        std::cout << "Default exception catch" << std::endl;
    }

    return 0;
}