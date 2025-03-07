#include <iostream>
#include <iomanip>

int main()
{
    bool a = true;
    bool b = false;

    std::cout << a << " " << b << "\n";

    std::cout << std::boolalpha; // sets boolean output to true/false
    std::cout << a << " " << b << "\n";

    std::cout << std::noboolalpha; // sets boolean output to 1/0
    std::cout << a << " " << b << "\n";

    int a1 = 26, b1 = 20;

    std::cout << std::showbase;
    std::cout << std::uppercase;

    std::cout << a1 << " " << b1 << "\n"; // default output format for numeric values is decimal format

    // changing numeric output format to hexadecimal(base 16)
    std::cout << std::hex;
    std::cout << a1 << "\n";
    std::cout << b1 << "\n";

    // changing numeric output format to octal(base 8)
    std::cout << std::oct;
    std::cout << a1 << " " << b1 << "\n";

    // changing numeric output format to decimal(base 10)
    std::cout << std::dec;
    std::cout << a1 << " " << b1 << "\n";

    // using setw() and setfill() on output stream to define width and charcater used for padding if values smaller that width
    // setw() only works for the next immediate std::cout, where as std::setfill() works for all remaning std::cout
    std::cout << std::setw(5);
    std::cout << std::setfill('*');
    std::cout << a1 << "\n";
    std::cout << std::left;
    // now we define a setw() again for the next std::cout
    std::cout << std::setw(5);
    std::cout << b1;

    return 0;
}