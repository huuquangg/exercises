#include <iostream>
using namespace std;

int get_smallest(int num) {
    if (num == 0) return num;

    if(get_smallest(num/10)*10 + num%10 < num/10) {
        return get_smallest(num/10)*10 + num%10;
    }
    else return num/10;
}


int main() {
    int n;
    cin >> n;
    cout << get_smallest(n);
    return 0;
}

