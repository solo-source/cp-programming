// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

// Input
// Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

// Output
// Print the "Multiples" or "No Multiples" corresponding to the read numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long a,b;
    cin>>a>>b;

    if(a % b == 0 || b % a == 0)
        cout<<"Multiples";
    else
        cout<<"No Multiples";

    return 0;
}