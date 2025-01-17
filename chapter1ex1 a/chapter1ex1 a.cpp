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
    cout << "this program will take 2 numbers and mutuplty them together\n";
    cout << "please enter a number:";
    cin >> number1;
    cout << "please enter another number:";
    cin >> number2;
    answer = number2 * number1;
    cout << "the answer is " << answer;
}
