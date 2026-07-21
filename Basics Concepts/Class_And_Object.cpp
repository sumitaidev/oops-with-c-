#include <iostream> // Header for input and output operations

int main() {
    // Print a welcome message to the console
    std::cout << "Welcome to the C++ Example Program!" << std::endl;

    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number; // Read user input from the keyboard

    // Conditional statement (If-Else)
    if (number % 2 == 0) {
        std::cout << number << " is an even number." << std::endl;
    } else {
        std::cout << number << " is an odd number." << std::endl;
    }

    // Loop statement (For Loop)
    std::cout << "Counting down from 3:" << std::endl;
    for (int i = 3; i > 0; --i) {
        std::cout << i << "... " << std::endl;
    }
    
    std::cout << "Liftoff!" << std::endl;

    return 0; // Return 0 to indicate successful execution
}
