/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long num, temp;
    vector<long> singerList;
    cin >> num;                     // Reading no of songs in playlist
    for (long i = 1; i <= num; i++) // ith integer denotes singer of ith song.
    {
        cin >> temp;
        singerList.push_back(temp);
    }

    std::sort(singerList.begin(), singerList.end());

    // find frequencuy of each element in vecter
    long i = 0;
    vector<long> countFreq;
    while (i < singerList.size())
    {
        int c = 1;
        i++;
        while (i < singerList.size())
        {
            if (singerList[i] == singerList[i - 1])
                c++;
            else
            {
                break;
            }
            i++;
        }
        countFreq.push_back(c);
    }

    // find max in countFreq and its frequency.

    std::sort(countFreq.begin(), countFreq.end());
    long j = 0;
    int count = 0, last = countFreq.back();
    while (j < countFreq.size())
    {
        if (countFreq[j] == last)
            count++;

        j++;
    }

    cout << count;
}