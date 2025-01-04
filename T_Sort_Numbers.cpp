#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << a << endl
             << b << endl
             << c << endl
             << endl;
    }
    else if (a < b && a < c)
    {
        cout << a << endl;
        if (b < c)
        {
            cout << b << endl
                 << c << endl
                 << endl;
        }
        else
        {
            cout << c << endl
                 << b << endl
                 << endl;
        }
    }
    else if (b < c)
    {
        cout << b << endl;
        if (a < c)
        {
            cout << a << endl
                 << c << endl
                 << endl;
        }
        else
        {
            cout << c << endl
                 << a << endl
                 << endl;
        }
    }
    else
    {
        cout << c << endl;
        if (a < b)
        {
            cout << a << endl
                 << b << endl
                 << endl;
        }
        else
        {
            cout << b << endl
                 << a << endl
                 << endl;
        }
    }

    cout << a << endl
         << b << endl
         << c << endl;

    // Above logic is redundunt, below is a more efficient logic without nested conditional statements using arrays and sorting fiunctions.
    /*
    #include <iostream>
#include <algorithm> // For std::sort

using namespace std;

int main()
{
    long long numbers[3]; // Array to store the three numbers
    cin >> numbers[0] >> numbers[1] >> numbers[2]; // Input three numbers

    // Sort the array
    sort(numbers, numbers + 3);

    // Print the sorted numbers
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << endl; // Output each number on a new line
    }

    // Print the original numbers
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << endl; // Output each number on a new line
    }

    return 0; // Indicate that the program ended successfully
}
    */
}