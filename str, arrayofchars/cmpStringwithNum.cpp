#include <iostream>
#include <string>
using namespace std;
void sort(string& s1, string& s2);
int main() {
	int n = 0;
	string s[10000];
	getline(cin, s[0]);
	while (s[n] != ".") {
		n = n + 1;
		getline(cin, s[n]);
	}
	for (int i = 0; i < n; i++) {
		for (int k = i + 1; k < n; k++) {
			sort(s[i], s[k]);

		}

	}
	cout << s[0] << endl;
	cout << s[n - 1] << endl;
	return 0;
}
void sort(string& s1, string& s2) {
	int lengthOfS1 = s1.length();
	int lengthOfS2 = s2.length();
	int indexOfS1 = 0;
	int indexOfS2 = 0;
	while (indexOfS1 < lengthOfS1 && indexOfS2 < lengthOfS2) {
		bool flagNumberS1 = (s1[indexOfS1] <= 57 && s1[indexOfS1] >= 48) ? true : false;
		bool flagNumberS2 = (s2[indexOfS2] <= 57 && s2[indexOfS2] >= 48) ? true : false;
		if (flagNumberS1 && flagNumberS2) {
			int numberofS1 = 0;
			int numberofS2 = 0;
			while (indexOfS1 < lengthOfS1 && int(s1[indexOfS1]) >= 48 && int(s1[indexOfS1]) <= 57) {
				numberofS1 = numberofS1 * 10 + int(s1[indexOfS1]) - 48;
				indexOfS1++;
			}
			while (indexOfS2 < lengthOfS2 && s2[indexOfS2] >= 48 && s2[indexOfS2] <= 57) {
				numberofS2 = numberofS2 * 10 + int(s2[indexOfS2]) - 48;
				indexOfS2++;
			}

			if (numberofS1 > numberofS2) {
				s1.swap(s2);
				return;
			}
			else if (numberofS1 < numberofS2) { return; }
		}
		else {
			if (s1[indexOfS1] == s2[indexOfS2]) {
				indexOfS1++;
				indexOfS2++;
			}
			else if (s1[indexOfS1] > s2[indexOfS2]) {
				s1.swap(s2);
				return;
			}
			else {
				return;
			}
		}
		if (indexOfS1 == lengthOfS1 || indexOfS2 == lengthOfS2) {
			if (lengthOfS2 < lengthOfS1) {
				s1.swap(s2);
				return;
			}
		}
	}
};