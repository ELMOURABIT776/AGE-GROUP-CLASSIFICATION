#include <iostream>
using namespace std;

int main() {

    int age;


    cout << "Enter your age: ";
    cin >> age;


    if (age >= 0 && age <= 12) {
        cout << "Age group: Child" << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "Age group: Teenager" << endl;
    } else if (age >= 20 && age <= 64) {
        cout << "Age group: Adult" << endl;
    } else if (age >= 65) {
        cout << "Age group: Senior" << endl;
    } else {

        cout << "Invalid age entered. Please enter a non-negative value." << endl;
    }

    return 0;
}
