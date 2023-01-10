#include <iostream>
using namespace std;


int well(int a, int b, int n) {
    if(n == 0) return 0;
    else return well(a+1, b+1, n-1) + a*b;
}

int main (){
    int a,b,n; cin >> a >> b >> n;
	cout << well(a, b, n);
}