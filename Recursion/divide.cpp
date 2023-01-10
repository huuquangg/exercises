#include <iostream>
using namespace std;

int i = 0;
int divide(int m, int n) {
    if(m < n) return 0;
    else {
        i++;
        divide(m-n, n);
    }
    return i;
}

int main (){
    int m, n; cin >> m >> n;
	cout << divide(m, n);
}