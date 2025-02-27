#include <iostream>

int main()
{
    int n;
    long long f = 1;

    std::cin >> n;

    for(int i = n; i >= 1; i--)
    {
        f *= i;
    }

    std::cout << f << std::endl;
    return 0;
}