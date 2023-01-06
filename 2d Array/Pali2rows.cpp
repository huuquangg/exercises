int a[1000][1000], int row, int column) {
    
    int lastRow = row - 1; 

    for (int j = 0; j <= lastRow / 2; j++ ) {
        for (int i = 0; i < column; i++) 
        { 
            int t = a[j][i]; 
            a[j][i] = a[lastRow - j][i]; 
            a[lastRow - j][i] = t; 
        }
    }
