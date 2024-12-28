// #include <iostream>
// using namespace std;

// int main()
// {
//     long long N;
//     int years = 0, months = 0, temp = 0;
//     cin >> N;

//     if (N >= 365)
//     {
//         years = N / 365;
//         cout << years << " years" << endl;
//         temp = N % 365;
//         if (temp >= 30)
//         {
//             months = temp / 30;
//             cout << months << " months" << endl;
//             temp = temp % 30;

//             if (temp >= 0)
//                 cout << temp << " days" << endl;
//         }
//         else
//         {
//             cout<<months<<" months"<<endl;
//             cout<<temp<< " days"<< endl;
//         }
//     }
//     else
//     {
//         if (N >= 30)
//         {
//             months = N / 30;
//             cout << years << " years" << endl;
//             cout << months << " months" << endl;
//             temp = N % 30;
//             if (temp >= 0)
//                 cout << temp << " days" << endl;
//         }
//         else
//         {
//             cout << years << " years" << endl;
//             cout << months << " months" << endl;
//             cout << N << " days" << endl;
//         }
//     }

//     return 0;
// }


//A more straight forward way to solve this question, without using nested if-else conditions.
#include <iostream>  
using namespace std;  

int main() {  
    long long N;  
    cin >> N;  

    int years = N / 365;        // Calculate total years  
    N %= 365;                   // Remaining days after calculating years  

    int months = N / 30;       // Calculate total months from remaining days  
    int days = N % 30;         // Remaining days after calculating months  

    // Output the results  
    cout << years << " years" << endl;  
    cout << months << " months" << endl;  
    cout << days << " days" << endl;  

    return 0;  
}