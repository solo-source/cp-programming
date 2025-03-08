#include <iostream>

void identify_crystals()
{
    int l, r, x, y;
    std::cin >> l >> r;

    if((2 * l) <= r)
    {
        x = l;
        y = 2 * l;
        std::cout << x << " " << y << "\n";
    }
    else{
        x = -1;
        y = -1;
        std::cout << x << " " << y << "\n";
    }
}

int main()
{
    int t;
    std::cin >> t;

    //running t testcases/experiments
    while(t--)
    {
        identify_crystals();
    }
}