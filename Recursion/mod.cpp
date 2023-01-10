#include <iostream>
using namespace std;
int modulo(int m, int n){
    if(m < n) return m;
    // if( n == 0) return false;
    // if( m - n < n) return m - n;
    else return modulo(m-n, n);

}

int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}