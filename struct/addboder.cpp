
#include <iostream>
using namespace std;

// 1 demension arrays
struct mang_char{
    char arr[800];
    int n;
};

// arrays of 1 demension arrays
struct mang2d{
    mang_char arr[800];
    int n;//?
};

void xuat_mang2d(mang2d A){
    // for(int i = 0; i< A.n; i++){
    //     for(int j = 0; j < A.arr[i].n; j++){
    //         cout << A.arr[i].arr[j];
    //     }
    //     cout << endl;
    // }
    cout << endl;

    cout << A.n << endl;
    cout << A.arr[0].n << endl;
    cout << A.arr[0].arr[0];

}

void add_border(char x[800][800], int row, int column, mang2d result) {
    result.n = row;
    result.arr->n = column;

    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < column; j++) {
    //         result.arr[i].arr[j] = x[i][j];
    //     }
    // }
    result.n = 3;
    result.arr[0].n = 2;
    // result.arr[0].arr[0] = 'a';
    result.arr[0].arr[0] = x[0][0];
    result.arr[0].arr[1] = 'b';


    
}


int main(){
    // input row, column
    int row, column;
    cin >> row >> column;

    char x[800][800];
    // input elements in 2d array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++) cin >> x[i][j];
    }


    mang2d result;
    add_border(x, row, column, result);

    
    xuat_mang2d(result);


}
