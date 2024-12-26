#include <bits/stdc++.h>
using namespace std;

int main()
{
    double w;

    cin >> w;
    if (w > 2)
    {
        if ((int)w % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";

    return 0;
}