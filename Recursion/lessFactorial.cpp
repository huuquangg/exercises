#include <iostream>
using namespace std;

int i = -1;
int factorial(int n) {
    if(n <= 1) return 1;
    else return n*factorial(n-1);
    // else return 1;
}
int smallest_factorial_notless_than(int n) {
    i++;
    if(n <= factorial(i)) return factorial(i);
    else return smallest_factorial_notless_than(n);
}
int main(){
	int n;
	cin >> n;
	cout << smallest_factorial_notless_than(n);
    // cout << factorial(n);
}
