#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC],int &n) {
	cin>>n;
	
	for(int i = 0; i < n;i++){
		for(int j = 0; j <n; j++) cin >> a[i][j];
	}
}

bool isMaTranDonVi(int  a[MAXR][MAXC], int &n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == col && a[row][col] != 1) return false;
            if (row != col && a[row][col] != 0) return false;
        }
    }
    return true;
}
