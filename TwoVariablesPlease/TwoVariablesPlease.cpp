// TwoVariablesPlease.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>
#include <math.h>

using namespace std;

int addValues(int a, int b) {
    return a + b;
}

int subtractValues(int a, int b) {
    return a - b;
}

int multiplyValues(int a, int b) {
    return a * b;
}

float divideValues(int a, int b) {
    return (float) a / b;
}

int powerOfValues(int a, int b) {
    return pow(a, b);
}

int moduloOfValues(int a, int b) {
    return (a % b);
}

int calculationMenuAndOperations(int valueA, int valueB) {
    int selectedOption;
    static const string OPTIONS =
        "\n 1. add \n 2. subtract \n 3. multiply \n 4. divide \n 5. raises the power \n 6. counts modulo \n 7. Enter New Values \n 8. EXIT Program \n";
    bool shouldExit = false;
    while (!shouldExit) {
        printf("What would you like to do with the values (%i,%i)", valueA, valueB);
        printf("%s", OPTIONS.c_str());
        printf("Please enter a number from the options: ");
        scanf_s("%i", &selectedOption);
        //printf("Doing the following selection (%i)", selectedOption);
        switch (selectedOption) {
        case 1:
            // call add method
            printf("Result is: %d\n", addValues(valueA, valueB));
            break;
        case 2:
            //call subtract method
            printf("Result is: %d\n", subtractValues(valueA, valueB));
            break;
        case 3:
            //call multiply method
            printf("Result is: %d\n", multiplyValues(valueA, valueB));
            break;
        case 4:
            //call divide method
            if (valueB == 0) {
                printf("You cannot divide by zero!");
            }
            else {
                setprecision(5);
                printf("Result is: %f\n", divideValues(valueA, valueB));
            }
            break;
        case 5:
            //call raises power method
            printf("Result is: %d\n", powerOfValues(valueA, valueB));
            break;
        case 6:
            //call counts modulo method
            printf("Result is: %d\n", moduloOfValues(valueA, valueB));
            break;
        case 7:
            //call method to get new values
            return 7;
        case 8:
            shouldExit = true;
            exit;
        }
    }
}

void requestNewInputValues() {
    int valueA;
    int valueB;
    string userInput;
    printf("Please enter two numbers with a space between them and hit enter: ");
    getline(cin, userInput);
    if (userInput.size() == 3 && 
        isdigit(userInput[0]) && isdigit(userInput[2])) {
        valueA = (int)userInput[0];
        valueB = (int)userInput[2];
        int inputValue = calculationMenuAndOperations(valueA, valueB);
        if (inputValue == 7) {
            requestNewInputValues();
        }
    }
    else {
        printf("You did not enter two integers!\n\n");
        requestNewInputValues();
    }
}

int main()
{
    requestNewInputValues();
    return 0;
}
