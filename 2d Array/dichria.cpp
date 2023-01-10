#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int max = 1;

	while (m - 2 * max > 0 && n - 2 * max > 0) {
		max++;
	}
	int** a;
	a = new int* [m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
		for (int k = 0; k < n; k++) {
			cin >> a[i][k];
		}
	}

	for (int t = 0; t < max; t++) {

		if (n - 2 * t == 1) {
			if (t % 2 == 0) { 
				int store = a[m - 1 - t][t];
				for (int i = m - 1 - t; i > t; i--) {
					a[i][t] = a[i - 1][t];
				}
				a[t][t] = store;

			}else {
				int store = a[t][t];
				for (int i = t; i <m - 1 - t; i++) {
					a[i][t] = a[i + 1][t];
				}
				a[m - 1 - t][t] = store;
			}

		}
		else if (m - 2 * t == 1) {
			if (t % 2 == 0) {
				int store = a[t][n - 1-t];
				for (int i = n - 1 - t; i > t; i--) {
					a[t][i] = a[t][i - 1];
				}
				a[t][t] = store;

			}
			else {
			
				int store = a[t][t];
				for (int i = t; i < n - 1-t; i++) {
					a[t][i] = a[t][i + 1];
				}
				a[t][n - 1 - t] = store ;
			}


		}
		else {
			if (t % 2 == 0) {
				int Store = a[t][t];
				for (int i = t; i < m - 1 - t; i++) {
					a[i][t] = a[i + 1][t];
				}
				for (int i = t; i < n - 1 - t; i++) {
					a[m - 1 - t][i] = a[m - 1 - t][i + 1];
				}

				for (int i = m - 1 - t; i > t; i--) {
					a[i][n - 1 - t] = a[i - 1][n - 1 - t];
				}



				for (int i = n - 1 - t; i > t + 1; i--) {
					a[t][i] = a[t][i - 1];
				}


				a[t][t + 1] = Store;
			}
			else {
				int Store = a[t][t];
				for (int i = t; i < n - 1 - t; i++) {
					a[t][i] = a[t][i + 1];
				}
				for (int i = t; i < m - 1 - t; i++) {
					a[i][n - 1 - t] = a[i + 1][n - 1 - t];
				}
				for (int i = n - 1 - t; i > t; i--) {
					a[m - 1 - t][i] = a[m - 1 - t][i - 1];
				}
				for (int i = m - 1 - t; i > t + 1; i--) {
					a[i][t] = a[i - 1][t];
				}
				a[t + 1][t] = Store;
			}
		}

	}
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
	return 0;
}