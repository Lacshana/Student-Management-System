
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student students[100];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count >= 100) {
                cout << "Student limit reached!\n";
                continue;
            }

            cout << "Enter Roll Number: ";
            cin >> students[count].rollNo;

            cout << "Enter Name: ";
            getline(cin >> ws, students[count].name);

            cout << "Enter Marks: ";
            cin >> students[count].marks;

            count++;

            cout << "Student added successfully!\n";
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No students available.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "\nRoll Number: "
                         << students[i].rollNo << endl;
                    cout << "Name: "
                         << students[i].name << endl;
                    cout << "Marks: "
                         << students[i].marks << endl;
                }
            }
        }
        else if (choice == 3) {
            int roll;
            bool found = false;

            cout << "Enter Roll Number to search: ";
            cin >> roll;

            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == roll) {
                    cout << "Student Found!\n";
                    cout << "Name: "
                         << students[i].name << endl;
                    cout << "Marks: "
                         << students[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.\n";
            }
        }
        else if (choice == 4) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
