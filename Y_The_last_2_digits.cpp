#include <iostream>
#include <iomanip>

/*
First Solution - 

int main()
{
    long long a, b, c, d, multiply, lastTwoDigit;
    std::cin >> a >> b >> c >> d;

    multiply = a * b * c * d;
    lastTwoDigit = multiply % 100;

    std::cout << lastTwoDigit;
}

got error - "runtime error: signed integer overflow on line 'multiply = a * b * c * d;'"
*/

/*
Second Solution - Break down the calculations to avoid overflow.

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long long ab = a * b;
    int mod1 = ab % 100;

    long long cd = c * d;
    int mod2 = cd % 100;

    int multiply = mod1 * mod2;
    int lastTwoDigit = multiply % 100;

    std::cout << lastTwoDigit;
}

got error -  wrong answer 1st lines differ - expected: '00', found: '0'

*/

/*

Another approach is to use modular arithmatic to shorten calculations and manage overflows.

*/

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long long ab = a * b;
    int mod1 = ab % 100;

    long long cd = c * d;
    int mod2 = cd % 100;

    int multiply = mod1 * mod2;
    int lastTwoDigit = multiply % 100;

    std::cout <<std::setw(2)<<std::setfill('0')<< lastTwoDigit;
}

