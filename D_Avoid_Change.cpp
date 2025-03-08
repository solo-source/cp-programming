#include <iostream>

int main()
{
    int k ,r;
    std::cin >> k >> r;

    for(int i = 1; ; i++)
    {
        long long b = k * i;
        if((b % 10) == 0 || (b % 10) == r)
        {
            std::cout << i << "\n";
            break;
        }
        // if((((i % 10) * (k % 10)) % 10) == 0 || ((i % 10) * (k % 10) % 10 == r))
        // {
        //     std::cout << i << "\n";
        //     break;
        // }
    }


    return 0;
}