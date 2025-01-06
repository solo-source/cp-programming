#include <iostream>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    int lower, upper;

    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 > r1 || l1 > r2)
    {
        cout << -1;
    }
    else if (l2 >= l1)
    {
        lower = l2;
        cout << lower << " ";
        if (r1 <= r2)
            upper = r1;
        else
            upper = r2;
        cout << upper;
    }
    else
    {
        lower = l1;
        cout << lower << " ";
        if (r1 <= r2)
            upper = r1;
        else
            upper = r2;
        cout << upper;
    }

    return 0;
}

// int main()
// {
// 	int l1 = 0, r1 = 0, l2 = 0, r2 = 0, lower = 0, upper = 0;

// 	std::cin >> l1 >> r1 >> l2 >> r2;

// 	if (l2 >= l1 && l2 <= r1)
// 	{
// 		lower = l2;
// 		if (r2 <= r1)
// 			upper = r2;
// 		else
// 			upper = r1;
// 		std::cout << lower << " " << upper;
// 	}
// 	else if (l1 >= l2 && l1 <= r2)
// 	{
// 		lower = l1;
// 		if (r1 <= r2)
// 			upper = r1;
// 		else
// 			upper = r2;
// 		std::cout << lower << " " << upper;
// 	}
// 	else
// 	{
// 		std::cout << -1;
// 	}

// 	return 0;
// }