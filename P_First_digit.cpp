#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, first_digit;
    cin >> num;

    first_digit = num / 1000; //input restriction - Only one line containing a number X (999 < X  ≤  9999)

    if (first_digit % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

    return 0;
}