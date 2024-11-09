#include <iostream>
using namespace std;

int main() {

    double number1, number2;
    char operation;
    //enter two numbers
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    //choose an operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    if (operation == '+') {
        cout << "Result: " << number1 + number2 << endl;
    } 
    else if (operation == '-') {
        cout << "Result: " << number1 - number2 << endl;
    } 
    else if (operation == '*') {
        cout << "Result: " << number1 * number2 << endl;
    } 
    else if (operation == '/') {
        if (number2 != 0) {
            cout << "Result: " << number1 / number2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } 
    else {
        cout << "Invalid operation! Please choose +, -, *, or /." << endl;
    }

    return 0;
}
