#include <iostream>
using namespace std;
void Addition();
void Subtraction();
void Multiplication();
void Division();
void Show_Menu();

int main() {
    while (true) {
        Show_Menu();  
        int operation;
        cout << "Enter the operation: ";
        cin >> operation; 
        switch (operation) {
            case 1: Addition(); break;
            case 2: Subtraction(); break;
            case 3: Multiplication(); break;
            case 4: Division(); break;
            case 0: 
                cout << "Exiting calculator..." << endl;
                return 0;
            default: cout << "Invalid operation! Please try again." << endl;
        }
    }
}
void Show_Menu() {
    cout << "\n-----> ADVANCED CALCULATOR <-----\n";
    cout << "1.  Addition of two numbers\n";
    cout << "2.  Subtraction of two numbers\n";
    cout << "3.  Multiplication of two numbers\n";
    cout << "4.  Division of two numbers\n";
    cout << "0.  Exit\n";
}

// Addition Function
void Addition() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

// Subtraction Function
void Subtraction() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}

// Multiplication Function
void Multiplication() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a * b << endl;
}

// Division Function
void Division() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error! Division by zero is not allowed.\n";
    } else {
        cout << "Result: " << a / b << endl;
    }
}












