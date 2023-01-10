#include <iostream>
#include <cstring>

using namespace std;

main()
{
    int left[10000], right[10000];
    int l, m;
    cin >> l >> m;

    for (int i = 0; i < m; i++)
    {
        int len_car;
        string position;
        cin >> len_car >> position;

        if (len_car <= 100000 && position == "left")
            left[i] = len_car;
        else if (len_car <= 100000 && position == "right")
            right[i] = len_car;
    }

    for (int i = 0; i < m; i++)
    {
        if (left[i] > 50000 || left[i] > l*100) left[i] = 0;
        if (right[i] > 50000 || right[i] > l*100) right[i] = 0;
    }
    
    int i = 0, j = 0, count = 0, sum = 0;

    if (m == 1)
    {
        if (left[i] != 0)
        {
            if (left[i] > 50000) cout << count;    
            else cout << count + 1;
        }
        else
        {
            if (right[i] > 50000) cout << count + 1;
            else cout << count + 2;
        }
        return 0;
    }
    
    
    while (i < m || j < m)
    {
        // left side go
        while (1)
        {
            if (i == m) break;
            sum += left[i];
            if (sum <= l * 100) i++;
            else break;
        }
        count++;
        sum = 0;
        // Not to turn around,
        if (j == m && i == m) break;

        // right side go
        while (1)
        {
            if (j == m) break;
            sum += right[j];
            if (sum <= l * 100) j++;
            else break;
        }
        count++;
        sum = 0;
    }

    cout << count << endl;
}
