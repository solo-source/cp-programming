#include <iostream>

int main()
{
    int arr1[3], arr2[3];

    for(int i = 0; i < 3; i++)
    {
        std::cin >> arr1[i];
    }

    for(int j = 0; j < 3; j++)
    {
        std::cin >> arr2[j];
    }

    //counting boundary edges
    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr1[i] == arr2[j]) count++;
        }
    }

    if(count == 0) 
        std::cout << 6 << "\n";
    else if(count == 1)
        std::cout << 6 << "\n";
    else if(count == 2)
        std::cout << 4 << "\n";
    else
        std::cout << 0 << "\n";

    return 0;
}