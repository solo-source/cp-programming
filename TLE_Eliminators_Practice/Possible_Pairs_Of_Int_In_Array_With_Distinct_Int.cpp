#include <iostream>

int main()
{
    int arr[3] = {1,2,3};

    //print distinct pairs
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            std::cout << "(" << arr[i] << "," << arr[j] << ")";    
        }
    }

    return 0;
}