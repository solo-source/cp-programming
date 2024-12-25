// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// Examples
// InputCopy
// 1 2 3
// OutputCopy
// 1 3
// InputCopy
// -1 -2 -3
// OutputCopy
// -3 -1
// InputCopy
// 10 20 -5
// OutputCopy
// -5 20

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, minValue, maxValue;
    cin >> a >> b >> c;

    // if (a > b && a > c)
    // {
    //     max = a;
    //     if (b > c)
    //         min = c;
    //     else
    //         min = b;
    // }
    // else if (b > c)
    // {
    //     max = b;
    //     if (a > c)
    //         min = c;
    //     else
    //         min = a;
    // }
    // else
    // {
    //     max = c;
    //     if (a > b)
    //         min = b;
    //     else
    //         min = a;
    // }

    //using STL functions of <algotihm> library
    minValue = min({a,b,c});
    maxValue = max({a,b,c});

    cout << minValue << " " << maxValue;

    return 0;
}