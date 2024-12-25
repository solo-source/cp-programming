// Given a number N
// . Print the summation of the numbers that is between 1 and N
//  (inclusive).

// .∑i=1Ni
// Input
// Only one line containing a number N
//  (1≤N≤109)

// Output
// Print the summation of the numbers that are between 1 and N
//  (inclusive).

// Examples
// InputCopy
// 3
// OutputCopy
// 6
// InputCopy
// 10
// OutputCopy
// 55
// Note
// First Example :

// the numbers between 1 and 3 are 1,2,3 .

// So the answer is: (1 + 2 + 3 = 6)

// Second Example :

// the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

// So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, Sum = 0;
    cin >> N;

    // for (int i = 1; i <= N; i++)
    //     Sum += i;
    // cout << Sum;
    cout<<(N*(N+1))/2;
    return 0;
}