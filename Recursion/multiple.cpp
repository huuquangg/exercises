#include <iostream>
using namespace std;

int multiply(int m, int n){
    if(m == 0 || n == 0) return 0;
    else return multiply(m, n-1) + m; 
}


int main (){
    int m, n; cin >> m >> n;
	cout << multiply(m, n);
}