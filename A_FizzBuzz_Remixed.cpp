// My_code: Output Time limit exceeded
//  #include <iostream>

// void solve()
// {
//     int n;
//     int count = 0;
//     std::cin >> n;

//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 3 == i % 5)
//         {
//             ++count;
//         }
//     }
//     std::cout << count << std::endl;
//     return;
// }

// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

// Gemini code(along with my modification): Works fine on test case.

#include <iostream>  

void solve() {  
    long long n;  
    std::cin >> n;  
    long long count = 0;  

    count += (n / 15) + 1;      // Divisible by 15 (including 0)  

    if (n >= 1) {  
        count += (n - 1) / 15 + 1;  // Remainder 1  
    }  
    if (n >= 2) {  
        count += (n - 2) / 15 + 1;  // Remainder 2  
    }  

    std::cout << count << std::endl;  
}  

int main() {  
    long long t;  
    std::cin >> t;  
    while (t--) {  
        solve();  
    }  
    return 0;  
}  