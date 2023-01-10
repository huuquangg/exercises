#include <iostream>
using namespace std;

// int s(int n);
int sum = 0;
int sum_digits(int n) {
    if(n > 9) return (n%10) + sum_digits(n/10);
    else return n;
}

int main() {
    int n, result;
    cin >> n;
    result = sum_digits(n);
    cout << result << endl;
    return 0;
}



 