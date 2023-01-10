#include <iostream>
#include<string>
using namespace  std;
bool mangdoixung(string s);
int main() {
	string s;
	getline(cin, s);
	int lengthOfS = s.length();
	if (lengthOfS <= 1 || mangdoixung(s)) {
		cout << "";
		return 0;
	}
	int start = 0;
	int end = 0;
	if (lengthOfS % 2 == 0) {
		start = lengthOfS/2 - 1;
		end = lengthOfS/2 -1 ;
		
	}else {
		start = lengthOfS/ 2;
		end = lengthOfS /2;
	}
	for (int i = start; i < lengthOfS; i++) {
		while (end < lengthOfS-1  && s[end] == s[end + 1]) {
			end++;
		}

		while (end < lengthOfS  && start >= 0 && s[end] == s[start]){
			end++;
			start--; 
		}
		if (end == lengthOfS && start- end != 2) {
			int n= start +1;
			string result = s.substr(0, n);

			for (int i = 0; i < n / 2; i++) {
				swap(result[i], result[n - i - 1]);
			}
			cout << result;
			return 0 ;
		}
		start = i + 1;
		end= i+1;

	}
	int n = lengthOfS - 1;
	string result = s.substr(0, n);
	for (int i = 0; i < n / 2; i++){
		swap(result[i], result[n - i - 1]);
	}
	cout << result;
	return 0;
} 
bool mangdoixung(string s) {
	int lengthOfS = s.length();
	int i = 0;
	int j = lengthOfS - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true; 
};