#include <iostream>

// int main()
// {
//     int arr[5] = {1,34,5,67,45};

//     int max = INT_MIN;

//     for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//     {
//         if(arr[i] > max)
//             max = arr[i];
//     }

//     std::cout << max;
//     return 0;
// }

int main()
{
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    // Define INT_MIN as the largest.
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (a[i] > max)
        //     max = a[i];
        max = std::max(max, a[i]);
    }

    std::cout << max;

    return 0;
}