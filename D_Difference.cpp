// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).

// Input
// Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

// Output
// Print "Difference  =  " without quotes followed by the equation result.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,c,b,d;

    cin>>a>>b>>c>>d;
    cout<<"Difference = "<<(a*b)-(c*d);
    return 0;
}