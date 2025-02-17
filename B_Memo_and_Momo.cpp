#include <iostream>

int main()
{
    long long a, b, k;
    std::cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0)
    {
        std::cout << "Both";
    }
    else if (a % k == 0 && b % k != 0)
    {
        std::cout << "Memo";
    }
    else if (a % k != 0 && b % k == 0)
    {
        std::cout << "Momo";
    }
    else
        std::cout << "No One";

    return 0;
}