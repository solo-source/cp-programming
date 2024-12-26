#include<bits/stdc++.h>
#define PI 3.141592653
using namespace std;

int main()
{
    cout<<fixed<<setprecision(9);
    double radius, area;

    cin>>radius;
    area = PI * (radius * radius);
    cout<<area;

    return 0;
}