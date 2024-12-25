// Given 2 numbers A
//  and B
// . Print floor, ceil and round of A/B

// Note:

// Floor: Is a mathematical function that takes a real number X
//  and its output is the greatest integer less than or equal to X
// .
// Ceil: Is a mathematical function that takes a real number X
//  and its output is the smallest integer larger than or equal to X
// .
// Round: Is a mathematical function that takes a real number X
//  and its output is the closest integer to that number X
// // .
// Input
// Only one line containing two numbers A and B
//  (1≤A,B≤103)

// Output
// Print 3 lines that contain the following in the same order:

// "floor A / B = Floor result" without quotes.
// "ceil A / B = Ceil result" without quotes.
// "round A / B = Round result" without quotes.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double num1, num2;
    cin >> num1 >> num2;

    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1 / num2) << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil(num1 / num2) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round(num1 / num2) << endl;

    return 0;
}