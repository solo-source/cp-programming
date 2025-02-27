#include <iostream>

int main()
{
    int arr[5] = {1,34,5,67,45};
    
    int max = INT_MIN;

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    std::cout << max;
    return 0;
}