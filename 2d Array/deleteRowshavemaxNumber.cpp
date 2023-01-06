void input(int arr[][MAX], unsigned int &m, unsigned int &n){
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

}

void deleteRow(int arr[][MAX], unsigned int &m, unsigned int n){
    // get first max
    int max = arr[0][0];
    int max_row;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (max < arr[i][j]) 
            {
                max = arr[i][j];
                max_row = i;
            }
        }
    }

    for (int i = 0 ; i < m ; i++) { 
        if (i == max_row) { 
            for (int k = i ; k < m - 1 ; k++) {
                for (int j = 0 ; j < n ; j++) {
                    arr[k][j] = arr[k+1][j];
                }
            }
           
           m--;
        }
    }
}

void output(int arr[][MAX], unsigned int m, unsigned int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
