// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem.

// Example
// InputCopy
// 13 12
// OutputCopy
// 5
// Note
// First Example :

// last digit in the first number is 3 and last digit in the second number is 2.

// So the answer is: (3 + 2 = 5)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    //int l1,l2;

    cin>>a>>b;

    //l1 = a % 10;
    //l2 = b % 10;

    //cout<<l1 + l2;
    cout<<(a % 10)+(b % 10);

    return 0;
}