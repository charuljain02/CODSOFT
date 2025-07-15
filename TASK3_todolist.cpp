#include <iostream>
#include <string>  // for using strings
using namespace std;

int main() {
    string tasks[100];   
    int taskCount = 0;    
    int choice;          

    do {
        // Displaying the menu
        cout << "\n------ TO-DO LIST ------\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        // Check if user entered a number
        if (cin.fail()) {
            cin.clear();             
            cin.ignore(1000, '\n');   
            cout << "Invalid input! Please enter a number.\n";
            continue; // Go back to the menu
        }

        // Option 1: Add Task
        if (choice == 1) {
            if (taskCount < 100) {
                cout << "Enter your task: ";
                cin.ignore();  // 
                getline(cin, tasks[taskCount]); 
                taskCount++;
                cout << "Task added successfully!\n";
            } else {
                cout << "Task list is full!\n";
            }
        }

        // Option 2: View Tasks
        else if (choice == 2) {
            if (taskCount == 0) {
                cout << "No tasks added yet.\n";
            } else {
                cout << "\nYour Tasks:\n";
                for (int i = 0; i < taskCount; i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }

        // Option 3: Exit
        else if (choice == 3) {
            cout << "Thank you for using the To-Do List. Goodbye!\n";
        }

        // Invalid option
        else {
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        }

    } while (choice != 3);  

    return 0;
}
