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