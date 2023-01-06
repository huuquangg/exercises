#include <iostream>
#define MAXC 1000
#define MAXR 1000
using namespace std;

int main() {
    int m, n, count,i,j;
    cin >> n >> m;
    int mine_map[MAXR][MAXC];
    int result_map[MAXR][MAXC];

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            cin >> mine_map[i][j];
        }
    }

    

    for (i = 0; i < n; i++) {
        
        for (j = 0; j < m; j++) {
            int north = i - 1;
            int south = i + 1;
            int east = j + 1;
            int west = j - 1;
            
            count = 0;

            if (mine_map[north][west] == 1 && i != 0 && j != 0) count++;
           
            if (mine_map[north][j] == 1 && i != 0) count++;
            
            if (mine_map[north][east] == 1 && i != 0 && j != m - 1) count++;
            
            if (mine_map[i][east] == 1 && j != m - 1) count++;
            
            if (mine_map[south][east] == 1 && i != n - 1 && j != m - 1) count++;
            
            if (mine_map[south][j] == 1 && i != n - 1) count++;
            
            if (mine_map[south][west] == 1 && i != n - 1 && j != 0) count++;
            
            if (mine_map[i][west] == 1 && j != 0) count++;
            
            result_map[i][j] = count;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << result_map[i][j] << " ";
        }
        cout << endl;
    }
}
