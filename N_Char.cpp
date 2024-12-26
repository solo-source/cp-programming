#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    int numX;

    cin >> x;
    numX = (int)x;

    if (numX >= 65 && numX <= 90)
        cout << (char)(x + 32);
    else
        cout << (char)(x - 32);

    return 0;
}