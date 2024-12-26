#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    int numX;

    cin >> x;
    numX = (int)x;

    if (numX >= 48 && numX <= 57)
        cout << "IS DIGIT";
    else if (numX >= 65 && numX <= 90)
        cout << "ALPHA\nIS CAPITAL";
    else
        cout << "ALPHA\nIS SMALL";

    return 0;
}