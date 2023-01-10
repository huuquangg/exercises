#include <iostream>
using namespace std;

int sum_without_remember(int a, int b) {
    if(a + b < 10) return a + b;
    else return sum_without_remember(a/10, b/10)*10+( (a+b) % 10 );
}


int main (){
    int param1, param2;
    cin >> param1 >> param2;
	cout << sum_without_remember(param1, param2);
}