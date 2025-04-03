#include"calculator.h"
#include"calculator.cpp"
#include<iostream>
using namespace std;

int main() {

    #include <iostream>

    using namespace std;
    
    int main() {
        int choice;
    

        cout << "What operation do you want to perform?\n"
             << "-------------------------------------\n"
             << " 1. Add two numbers\n"
             << " 2. Subtract two numbers\n"
             << " 3. Multiply two numbers\n"
             << " 4. Divide two numbers\n"
             << " 5. Get the factorial\n"
             << " 6. Find the GCD of two numbers\n"
             << " 7. Find the LCM of two numbers\n"
             << " 8. Generate a random number\n"
             << "-------------------------------------\n";
    

        cout << "Enter your choice (1-8): ";
        cin >> choice;
    

        while (choice < 1 || choice > 8) {
            cout << "Invalid choice! Please enter a number between 1 and 8: ";
            cin >> choice;
        }
    
        cout << "You selected option " << choice << ".\n";


        if (choice == 1) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << add(a, b) << endl;
        }
        else if (choice == 2) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << subtract(a, b) << endl;
        }
        else if (choice == 3) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << multiply(a, b) << endl;
        }
        else if (choice == 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            int result = divide(a, b);
            if (result != -1) {
                cout << "Result: " << result << endl;
            }
        }
        else if (choice == 5) {
            cout << "Enter a number: ";
            cin >> a;
            if (a < 0) {
                cout << "Error: Factorial of a negative number is not defined.\n";
            } else {
                cout << "Factorial (mod INF): " << factorial_mod_INF(a) << endl;
            }
        }
        else if (choice == 6) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "GCD: " << gcd(a, b) << endl;
        }
        else if (choice == 7) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "LCM: " << lcm(a, b) << endl;
        }
        else if (choice == 8) {
            cout << "Enter the range for random number generation (min max): ";
            cin >> a >> b;
            cout << "Random number: " << getRandomNumber(a, b) << endl;
        }
        else {
            cout << "Invalid choice! Please enter a number between 1 and 8.\n";
        }
        
    
        return 0;
    }
    
    
}