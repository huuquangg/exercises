//Ta có thể sử dụng struct để khai báo mảng ký tự 2 chiều bằng cách khai báo 02 struct, một struct chứa mảng các ký tự, và struct thứ hai chứa một mảng các struct thứ nhất (chi tiết trong file template).
//Viết hàm nhận vào một mảng ký tự 2 chiều khai báo bằng phương pháp truyền thống và tạo ra một mảng ký tự 02 chiều theo cách mới mới bằng với nội dung mảng được thêm viền là các dấu ‘*’ vào mảng cũ.
//Ví dụ cho mảng A= { {‘a’, ‘b’, ‘c’} , {‘d’, ‘e’, ‘f’} }, mảng kết quả sẽ là:
//{
//{'*', '*', '*', '*', '*'},
//{'*', 'a', 'b', 'c', '*'},
//{'*', 'd', 'e', 'f', '*'},
//{'*', '*', '*', '*', '*'}
// }

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

void xuat_mang2d(mang2d &A){
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
============================================***============================================
void add_border(char x[800][800], int row, int column, mang2d &result)
{
    result.n = row + 2;
    for (int r = 0; r < result.n; r++) result.arr[r].n = column + 2;
    
    for (int r = 0; r < result.n; r++)
    {
        for (int c = 0; c < result.arr[r].n; c++)
        {
            // adding full first column and full last column
            if (c == 0 || (c == result.arr[r].n - 1)) result.arr[r].arr[c] = '*';
            // adding first and last each rows
            else if (r == 0 || (r == result.n - 1)) result.arr[r].arr[c] = '*';
            // adding main elements
            else result.arr[r].arr[c] = x[r - 1][c - 1];
        }
    }
}
===========================================***============================================

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
