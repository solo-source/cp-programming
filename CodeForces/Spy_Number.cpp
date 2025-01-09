#include <iostream>
void check_spy(int);

int main()
{
    int num;
    std::cin >> num;
    check_spy(num);
}

void check_spy(int num)
{
    int sum = 0, multiply = 1;
    while (num != 0)
    {
        int rem = num % 10;
        sum += rem;
        multiply *= rem;
        num /= 10;
    }

    if (sum == multiply)
        std::cout << "SPY Number";
    else
        std::cout << "Not SPY";
}
