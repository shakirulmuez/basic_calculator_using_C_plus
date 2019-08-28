// Title: Simple basic calculator using C++
// Author: Shakirulmuez
// Date: August 28, 2019

#include <iostream>
using namespace std;
int operation = 1, int1, int2;
string opt;

void integer_input(){
    cout << "Enter the first integer: \n";
    cin >> int1;
    cout << "Enter the second integer: \n";
    cin >> int2;    
}

int main(){
    cout << "Welcome to Basic Calculator\n";
    
    while (operation > 0){
        cout << "\nSelect the operation:\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cin >> operation;
        if (operation == 1){
            cout << "Selected operation is addition\n";
            integer_input();            
            cout << int1 << "+" << int2 << "=" << int1 + int2 << "\n";
        } else if (operation == 2){
            cout << "Selected operation is subtraction\n";            
            integer_input();            
            cout << int1 << "-" << int2 << "=" << int1 - int2 << "\n";
        }else if (operation == 3){
            cout << "Selected operation is subtraction\n";            
            integer_input();            
            cout << int1 << "*" << int2 << "=" << int1 * int2 << "\n";
        }else if (operation == 4){
            cout << "Selected operation is subtraction\n";            
            integer_input();            
            cout << int1 << "/" << int2 << "=" << int1 / int2 << "\n";
        }else if(operation > 4){
            cout << "Wrong input!\n";
        }else{
            cout << "Calculator exited!\n";
        }
    }
    return 0;
}