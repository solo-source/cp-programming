#include <iostream>

int main()
{
    int a, b, countA = 0, countB = 0, countDraw = 0;
    std::cin >> a >> b;

    for(int i = 1; i <= 6; i++)
    {
        if(std::abs(a - i) < std::abs(b - i))
            countA++;
        else if(std::abs(a - i) > std::abs(b - i))
            countB++;
        else
            countDraw++;
    }

    std::cout << countA << " " << countDraw << " " << countB;
    
    return 0;
}