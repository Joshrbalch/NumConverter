#include <iostream>
#include <cmath>
#include "converter.h"

using namespace std;

// This program was written by Joshua Balch at the University of Alabama

Converter::Converter() {   
    cout << "Converter initialized" << endl;
}

int Converter::decimalToBinary(int decimal) {
    int binary = 0;
    int remainder = 0;
    int i = 1;

    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }

    return binary;
}

int Converter::binaryToDecimal(int binary) {
    int decimal = 0;
    int remainder = 0;
    int i = 0;

    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    return decimal;
}

string Converter::decimalToHex(int decimal) {
    string hex = "";
    
    while(decimal != 0) {
        char c;
        int remainder = 0;
        remainder = decimal % 16;
        if(remainder < 10) {
            c = remainder + 48;
        } else {
            c = remainder + 55;
        }
        hex += c;
        decimal /= 16;
    }

    return hex;
}

int Converter::hexToDecimal(string hex) {
    int decimal = 0;
    int i = 0;
    int length = hex.length();

    while (i < length) {
        int c = hex[i];
        int value = 0;
        if (c >= 48 && c <= 57) {
            value = c - 48;
        } else if (c >= 65 && c <= 70) {
            value = c - 55;
        } else if (c >= 97 && c <= 102) {
            value = c - 87;
        }
        decimal += value * pow(16, length - i - 1);
        ++i;
    }

    return decimal;
}

int Converter::hexToBinary(string hex) {
    return decimalToBinary(hexToDecimal(hex));
}
