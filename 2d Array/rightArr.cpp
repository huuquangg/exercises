#include <iostream>
using namespace std;
short Counter(int a) {
	if (a < 10 && a> -10) { return 1; }
	short num = (a > 0) ? 0 : 1;
	while (a != 0) {
		num++;
		a = a / 10;
	}
	return num;

}
int main() {
	int n, m;
	cin >> n >> m;
	int a[1000][1000];
	int b[1000] = {};
	short digitA[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> a[i][k];
			digitA[i][k] = Counter(a[i][k]);
			if (b[k] < digitA[i][k]) {
				b[k] = digitA[i][k];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (digitA[i][k] == b[k]) { cout << a[i][k]; }
			else {
				while (digitA[i][k] < b[k]) {
					cout << " ";
					digitA[i][k]++;
				}
				cout << a[i][k];
			}
			if (k == m - 1) {
				cout << endl;
			}
			else {
				cout << " ";
			}

		}

	}
	return  0;
}