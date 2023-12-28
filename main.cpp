#include <iomanip>
#include <iostream>
#include <cmath>

//prototype functions
float additionFunction(float number1, float number2);
float subtractionFunction(float number1, float number2);
float multiplicationFunction(float number1, float number2);
float divisionFunction(float number1, float number2);

int main() {
    //Declare
    int userOperationChoice;
    float number1;
    float number2;

    //Prompt user for input
    std::cout << "What type of operation would you like to do?" << std::endl;
    std::cout << "\n1. Addition";
    std::cout << "\n2. Subtraction";
    std::cout << "\n3. Multiplication";
    std::cout << "\n4. Division";
    std::cout << "\n5. Exit\n" << std::endl;
    std::cin >> userOperationChoice;

    //Switch Statment
    std::cout << "\nPlease enter your first number: " << std::endl;
    std::cin >> number1;
    std::cout << "\nPlease enter your second number: " << std::endl;
    std::cin >> number2;
    switch (userOperationChoice)
    {
    case 1:
        std::cout << "\nYour answer is: " << additionFunction(number1,number2) << std::endl;
        break;
    case 2:
        std::cout << "\nYour answer is: " << subtractionFunction(number1,number2) << std::endl;
        break;
    case 3:
        std::cout << "\nYour answer is: " << multiplicationFunction(number1,number2) << std::endl;
        break;
    case 4:
        std::cout << "\nYour answer is: " << divisionFunction(number1,number2) << std::endl;
        break;
    
    default:
        std::cout << "\nPlease enter a valid option" << std::endl;
        break;
    }
    return 0;
}

//functions
float additionFunction(float number1, float number2) {
    return number1 + number2;
}

float subtractionFunction(float number1, float number2) {
    return number1 - number2;
}

float multiplicationFunction(float number1, float number2) {
    return number1 * number2;
}

float divisionFunction(float number1, float number2) {
    return number1 / number2;
}
