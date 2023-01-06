void add_spaces(string A, int max_length) {
    int num_of_spaces = max_length - A.size();
    for(int i=0; i < num_of_spaces; i++) {
        A = " " + A;
    }
    cout << A << endl;
}

void input(char A[][1000], int &n) {
    n = 0;
    int number = 1000; 
     
    for(int i=0 ; i < number;i++) {
        cin.getline(A[i],1000); 
        if (strcmp(A[i], ".") == 0) break;
        n++;
    }
}

void output(char A[][1000], int n) {
    int max_len = 0;
    for(int i = 0 ; i < n; i++) {
        if(strlen(A[i]) > max_len) max_len = strlen(A[i]);   
    } 

    for (int i = 0; i < n; i++)
    {
        add_spaces(A[i], max_len);
    }
}
