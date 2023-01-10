#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double x,y,z,dame;
    cin>>x>>y>>z;

    dame = x*n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
        if (a[j] - a[i] <= z)
            dame += y;
        }
    }
    cout<<dame;
}