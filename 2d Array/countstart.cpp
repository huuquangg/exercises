#include <iostream>
using namespace std;
int counter(int m, int n, char a[100][101] ) {
	bool appeared[100][100] = { false };
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n - 1; k++) {
			if (a[i][k] == '-'  && appeared[i][k] == false) {
				s++;
				appeared[i][k] = true;
				int index = 1;
				while (k + index < n && a[i][k] == a[i][k + index]) {
					appeared[i][k + index] = true;
					index++;
				}

				int max = 0;
				int maxK = k;
				int  indexK = k;

				while (indexK < k + index) {
					for (int t = 1; t <= m; t++) {
						if (t + i == m || a[i][indexK] != a[i + t][indexK]) {
							if (max < t) {
								max = t;
								maxK = indexK;
							}
							t = m + 1;
						}


					}
					indexK++;

				}



				k = k + index;

				for (int indexR = 1; indexR < max; indexR++) {
					appeared[indexR + i][maxK] = true;
					index = 1;
					while (maxK + index < n) {
						if (a[indexR + i][maxK] != a[indexR + i][maxK + index]) {
							break;
						}
						else {
							appeared[indexR + i][maxK + index] = true;
							index++;
						}
					}
					index = 1;
					while (maxK - index >= 0) {
						if (a[indexR + i][maxK] != a[indexR + i][maxK - index]) {
							break;
						}
						else {
							appeared[indexR + i][maxK - index] = true;
							index++;
						}

					}
				}

			}



		}
	}
	return s;
	

}

int main() {
	int s1, s2;
	int m, n;
	cin >> m >> n;
	char a[100][101];
	
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}


	cout << counter(m, n, a);
	return 0;
}