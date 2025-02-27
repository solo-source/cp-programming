// #include <iostream>

// int main()
// {
//     int a, b, c;
//     long long d;

//     std::cin >> a >> b >> c >> d;

    
//     // char arr[] = {a, b, c};

//     if (a + b * c == d)
//         std::cout << "YES";
//     else if (a + b - c == d)
//         std::cout << "YES";
//     else if (a - b + c == d)
//         std::cout << "YES";
//     else if (a - b * c == d)
//         std::cout << "YES";
//     else if (a * b - c == d)
//         std::cout << "YES";
//     else if (a * b + c == d)
//         std::cout << "YES";
//     else
//         std::cout << "NO";

//     return 0;
// }

#include <iostream>  

using namespace std;  

int main() {  
  long long a, b, c, d;  
  cin >> a >> b >> c >> d;  

  if (a + b * c == d) {  
    cout << "YES" << endl;  
    return 0;  
  }  
  if (a * b + c == d) {  
    cout << "YES" << endl;  
    return 0;  
  }  
  if (a + b - c == d) {  
    cout << "YES" << endl;  
    return 0;  
  }  
  if (a - b + c == d) {  
    cout << "YES" << endl;  
    return 0;  
  }  
  if (a * b - c == d) {  
    cout << "YES" << endl;  
    return 0;  
  }  
  if (a - b * c == d) {  
    cout << "YES" << endl;  
    return 0;  
  }  

  cout << "NO" << endl;  
  return 0;  
}