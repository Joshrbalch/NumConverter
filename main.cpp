#include <iostream>
#include "converter.h"

using namespace std;

// This program was written by Joshua Balch at the University of Alabama

int main() {
    Converter converter;
    int input{};
    string hexInput;
    bool running = true;
    int type{};
    int operation{};

    while(running) {
        cout << "Enter 1 for binary, 2 for decimal, 3 for hex or -1 to exit: ";
        cin >> type;

        if(type == -1) {
            running = false;
            break;
        }

        else if(type == 3) {
            cout << "Enter a hex number to convert: ";
            cin >> hexInput;

            if(hexInput == "-1") {
                running = false;
                break;
            }
        }

        else if(type == 1 || type == 2){
            cout << "Enter a number to convert ";
            cin >> input; 

            if(input == -1) {
                running = false;
                break;
            }
        }

        else {
            cout << "Invalid input. Closing program" << endl;
            break;
        }

        if(type == 1) {
            cout << "Enter 1 to convert to decimal or 2 to convert to hex: ";
            cin >> operation;

            if(operation == 1) {
                cout << "Decimal: " << converter.binaryToDecimal(input) << endl;
            } 
            
            else if(operation == 2) {
                cout << "Hex: " << converter.decimalToHex(converter.binaryToDecimal(input)) << endl;
            }
        }

        else if(type == 2) {
            cout << "Enter 1 to convert to binary or 2 to convert to hex: ";
            cin >> operation;

            if(operation == 1) {
                cout << "Binary: " << converter.decimalToBinary(input) << endl;
            } 
            
            else if(operation == 2) {
                cout << "Hex: " << converter.decimalToHex(input) << endl;
            }
        }

        else if(type == 3) {
            cout << "Enter 1 to convert to binary or 2 to convert to decimal: ";
            cin >> operation;

            if(operation == 1) {
                cout << "Binary: " << converter.hexToBinary(hexInput) << endl;
            } 
            
            else if(operation == 2) {
                cout << "Decimal: " << converter.hexToDecimal(hexInput) << endl;
            }
        }

        cout << "--------------------------------------------" << endl;
    }

    return 0;
}