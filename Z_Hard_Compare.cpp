#include <iostream>
#include <math.h>
int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long long ab = pow(a, b);
    long long cd = pow(c, d);

    if (ab > cd)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}