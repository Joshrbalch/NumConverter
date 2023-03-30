#include <iostream>
#include <cmath>

using namespace std;

// This program was written by Joshua Balch at the University of Alabama

class Converter {
public:
    Converter();

    // takes a decimal number and returns the binary equivalent
    int decimalToBinary(int decimal);

    // takes a binary number and returns the decimal equivalent
    int binaryToDecimal(int binary);

    // takes a decimal number and returns the hex equivalent
    string decimalToHex(int decimal);

    // takes a hex number and returns the decimal equivalent
    int hexToDecimal(string hex);

    // takes a hex number and returns the binary equivalent
    int hexToBinary(string hex);
};