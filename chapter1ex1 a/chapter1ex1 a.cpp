/*
File Name chapter1ex1.cpp
Programmer: Perrin Dalgleish
Date 1/17/2025
Requirements
take numbers 50 and 100 put into varables
add the number and place it in a varable named total
display results
*/

#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    int answer;
    cout << "this program will take 2 numbers and add them together";
    cout << "please enter a number:";
    cin >> number1;
    cout << "please enter another number:";
    cin >> number2;
    answer = number2 + number1;
    cout << "the answer is " << answer;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
