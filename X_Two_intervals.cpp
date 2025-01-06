#include <iostream>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    int lower, upper;

    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 > r1 || l1 > r2)
    {
        cout << -1;
    }
    else if (l2 >= l1)
    {
        lower = l2;
        cout << lower << " ";
        if (r1 <= r2)
            upper = r1;
        else
            upper = r2;
        cout << upper;
    }
    else
    {
        lower = l1;
        cout << lower << " ";
        if (r1 <= r2)
            upper = r1;
        else
            upper = r2;
        cout << upper;
    }

    return 0;
}