// TwoVariablesPlease.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int valueA;
    int valueB;
    int selectedOption;
    static const string OPTIONS = 
        "\n 1. add \n 2. subtract \n 3. nultiply \n 4. divide \n 5. raises the power \n 6. counts modulo \n";

    printf("Please enter two numbers with a space between them and hit enter: ");
    scanf_s("%i %i", &valueA, &valueB);

    //cout << valueA << " " << valueB << endl;

    printf("What would you like to do with the values (%i,%i)", valueA, valueB);
    printf("%s", OPTIONS.c_str());
    printf("Please enter a number from the options: ");
    scanf_s("%i", &selectedOption);
    //printf("Doing the following selection (%i)", selectedOption);
    switch (selectedOption) {
    case 1 :
        // call add method
        break;
    case 2: 
        //call subtract method
        break;
    case 3:
        //call multiply method
        break;
    case 4:
        //call divide method
        break;
    case 5:
        //call raises power method
        break;
    case 6:
        //call counts modulo method
        break;
    }
}
