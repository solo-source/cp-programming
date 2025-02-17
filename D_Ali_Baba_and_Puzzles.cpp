#include <iostream>

int main()
{
    int a, b, c;
    long long d;

    std::cin >> a >> b >> c >> d;

    
    // char arr[] = {a, b, c};

    if (a + b * c == d)
        std::cout << "YES";
    else if (a + b - c == d)
        std::cout << "YES";
    else if (a - b + c == d)
        std::cout << "YES";
    else if (a - b * c == d)
        std::cout << "YES";
    else if (a * b - c == d)
        std::cout << "YES";
    else if (a * b + c == d)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}