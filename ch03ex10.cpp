/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexandra Ramlogan
 *  Chapter 3 Exercise 8
 */

//#include "std_lib_facilities.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{

    //variables
    string input_operator;
    double a;
    double b;
    double ans;

    cin >> input_operator >> a >> b; //take in input

    if (input_operator == "+") //if the input operator is +, then add
    {
        ans = a + b;
    }
    else if (input_operator == "-")
    {
        ans = a - b;
    }
    else if (input_operator == "*")
    {
        ans = a - b;
    }
    else if (input_operator == "/")
    {
        ans = a/b;
    }
    else{
        ans = 0;
        cout<< "not a valid input\n";
    }
    

    //test if variables were inputted
    //cout <<"test " << input_operator << a << b <<"\n";

    //print answer
    cout << ans << "\n";

    return 0;
}
