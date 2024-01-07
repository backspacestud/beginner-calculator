#include <iomanip>
#include <iostream>
#include <cmath>
#include <sstream>

//prototype functions


int main() {

    //Prompt User
    std::cout << "Welcome to the CLI Calculator, Please input using the order: number, operation, ect... do not stack operations or numbers together!" << std::endl;
    std::cout << "Enter 'exit' to quit" << std::endl;
    
    //User Input
    bool running = true;

    while(true) {
        std::cout << "\nPlease enter your equation: ";
        std::string input;
        std::getline(std::cin, input);

        if(input == "exit") {
            std::cout << "exiting...";
            running = false;
            break;
        }

        std::stringstream userInputStream(input);
        float result;
        char mathOperation;
        float value;

        if(!(userInputStream >> result)) {
            std::cout << "Error: Invalid input format. Please use the format!" << std::endl;
            continue;
        }

        while(userInputStream >> mathOperation) {
            if(userInputStream >> value) {
                switch (mathOperation) 
                {
                case '+':
                    result = result + value;
                    break;
                case '-':
                    result = result - value;
                    break;
                case '/':
                    result = result / value;
                    break;
                case '*':
                    result = result * value;
                    break;

                default:
                    break;
                }
            } else {
                std::cout << "Error: Invalid input format. Please use the format!2" << std::endl;

            }
        }

        //Output

        std::cout << "Result: " << result;
    }

    //Processing

}

