#include<iostream>
using namespace std;
int main() {
	int a[4][4];
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			cin >> a[i][k];
		}
	}
	char motion;
	cin >> motion;
	switch (motion) {
	case 'U':
		for (int k = 0; k < 4; k++) {
			for (int i = 0; i < 4; i++) {
				if (a[i][k] != 0) {
					int index = 1;
					while (a[i + index][k] == 0 && i + index < 4) {
						index++;
					}
					if (a[i + index][k] == a[i][k] && i + index < 4) {
						a[i][k] = 2 * a[i][k];
						a[i + index][k] = 0;
					}

				}
			}
		}
		for (int k = 0; k < 4; k++) {
			for (int i = 0; i < 4; i++) {
				if (a[i][k] == 0) {
					int index = 1;
					while (a[i + index][k] == 0 && i + index < 4) {
						index++;
					}
					if (i + index < 4) {
						a[i][k] = a[i + index][k];
						a[i + index][k] = 0;
					}

				}
			}
		}
		break;
	case 'D':
		for (int k = 0; k < 4; k++) {
			for (int i = 3; i >= 0; i--) {
				if (a[i][k] != 0) {
					int index = 1;
					while (a[i - index][k] == 0 && i - index >= 0) {
						index++;
					}
					if (a[i][k] == a[i - index][k] && i - index >= 0) {
						a[i][k] = 2 * a[i][k];
						a[i - index][k] = 0;
					}
				}

			}
		}
		for (int k = 0; k < 4; k++) {
			for (int i = 3; i >= 0; i--) {
				if (a[i][k] == 0) {
					int index = 1;
					while (a[i - index][k] == 0 && i - index >= 0) {
						index++;
					}
					if (i - index >= 0) {
						a[i][k] = a[i - index][k];
						a[i - index][k] = 0;
					}
				}

			}
		}
		break;
	case 'R':
		for (int i = 0; i < 4; i++) {
			for (int k = 3; k >= 0; k--) {
				if (a[i][k] != 0) {
					int index = 1;
					while (a[i][k - index] == 0 && k - index >= 0) {
						index++;
					}
					if (k - index >= 0 && a[i][k - index] == a[i][k]) {
						a[i][k] = 2 * a[i][k];
						a[i][k - index] = 0;

					}
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int k = 3; k >= 0; k--) {
				if (a[i][k] == 0) {
					int index = 1;
					while (a[i][k - index] == 0 && k - index >= 0) {
						index++;
					}
					if (k - index >= 0) {
						a[i][k] = a[i][k - index];
						a[i][k - index] = 0;

					}
				}
			}
		}
		break;
	case 'L':


		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {

				if (a[i][k] != 0) {


					int index = 1;
					while (a[i][k + index] == 0 && k + index < 4) {
						index++;
					}
					if (k + index < 4 && a[i][k + index] == a[i][k]) {
						a[i][k] = 2 * a[i][k];
						a[i][k + index] = 0;

					}



				}
			}
		}




		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {

				if (a[i][k] == 0) {
					int index = 1;
					while (a[i][k + index] == 0 & k + index < 4) {
						index++;
					}
					if (k + index < 4) {
						a[i][k] = a[i][k + index];
						a[i][k + index] = 0;
					}

				}

			}
		}
		break;
	}
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			cout << a[i][k] << " ";
		}
		cout << endl;
	}


	return 0;
}