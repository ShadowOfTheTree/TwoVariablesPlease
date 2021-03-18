// TwoVariablesPlease.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
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

int main()
{
    int valueA;
    int valueB;
    int selectedOption;
    static const string OPTIONS = 
        "\n 1. add \n 2. subtract \n 3. multiply \n 4. divide \n 5. raises the power \n 6. counts modulo \n 7. EXIT Program \n";

    printf("Please enter two numbers with a space between them and hit enter: ");
    scanf_s("%i %i", &valueA, &valueB);

    //cout << valueA << " " << valueB << endl;

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
            setprecision(5);
            printf("Result is: %f\n", divideValues(valueA, valueB));
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
            shouldExit = true;
            break;
        }
    }
    return 0;
}
