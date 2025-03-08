// #include <iostream>
// #include <vector>

// int main()
// {
//     int n; // total no of puzzles in the book
//     std::cin >> n;

//     bool solved[n] = {0}; // creating a bool array solved of size n, initialized to all false.

//     int p; // no of puzzles priyansh can solve;
//     std::cin >> p;
//     std::vector<int> p1(p);

//     if (p != 0)
//     {
//         for (int i = 0; i < p; i++)
//         {
//             std::cin >> p1[i];
//         }
//     }

//     int q; // no of puzzles solved by Dhruvil
//     std::cin >> q;
//     std::vector<int> q1(q);

//     if (q != 0)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             std::cin >> q1[j];
//         }
//     }

//     // now checking which puzzles are solved by both
//     for (int i = 0; i < p; i++)
//     {
//         solved[p1[i]] = 1;
//     }
//     for (int j = 0; j < p; j++)
//     {
//         solved[q1[j]] = 1;
//     }

//     //no checking if all puzzles are solved or not
//     bool flag = false;
//     for(int i = 0; i < n; i++)
//     {
//         if(solved[i] == 0)
//         {
//             flag = true;
//             break;
//         }
//     }

//     if(flag == false)
//         std::cout << "I become the guy." << "\n";
//     else
//         std::cout << "Oh, my keyboard!" << "\n";

//     return 0;
// }

#include <iostream>  
#include <vector>  

int main() {  
    int n; // total no of puzzles in the book  
    std::cin >> n;  

    std::vector<bool> solved(n, false); // Use std::vector instead of VLA  

    int p; // no of puzzles priyansh can solve;  
    std::cin >> p;  
    std::vector<int> p1(p);  

    for (int i = 0; i < p; i++) {  
        std::cin >> p1[i];  
    }  


    int q; // no of puzzles solved by Dhruvil  
    std::cin >> q;  
    std::vector<int> q1(q);  

    for (int j = 0; j < q; j++) {  
        std::cin >> q1[j];  
    }  

    // now checking which puzzles are solved by both  
    for (int i = 0; i < p; i++) {  
        solved[p1[i] - 1] = true; // Subtract 1 for 0-based indexing  
    }  
    for (int j = 0; j < q; j++) {  
        solved[q1[j] - 1] = true; // Subtract 1 for 0-based indexing, loop through q1  
    }  

    // now checking if all puzzles are solved or not  
    bool flag = false;  
    for (int i = 0; i < n; i++) {  
        if (solved[i] == false) { // Check for false (unsolved)  
            flag = true;  
            break;  
        }  
    }  

    if (flag == false)  
        std::cout << "I become the guy." << "\n";  
    else  
        std::cout << "Oh, my keyboard!" << "\n";  

    return 0;  
}  