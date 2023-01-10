#include <iostream>
using namespace std;
// reuse function of sum_of_digits
int sum_of_digits(int n) {
    if(n > 9) return (n%10) + sum_of_digits(n/10);
    else return n;
}

int largest_sum_of_digits(int n) {
    int x;
    cin >> x;
    
    if (n == 1) return x;
    else {
        int y = largest_sum_of_digits(n-1);
        if (sum_of_digits(x) >= sum_of_digits(y)) return x;
        else return y;
    }    
}

int main (){
    int n;
    cin >> n;
	cout << largest_sum_of_digits(n);
}
