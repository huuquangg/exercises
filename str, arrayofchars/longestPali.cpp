#include <iostream>
#include <string>
using namespace std;

string getthelongest(string s)
{
    int max_len = 1;// max_len pali
    int start = 0;// end pali

    for (int i = 0; i < 2 * s.size() - 1; i++) {
        int left = i / 2; //
        int right = i / 2;
        if (i % 2 == 1) right++;
        
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            int current_len = right - left + 1;
            
            if (current_len > max_len) {
                max_len = current_len;
                start = left;
            }
            left--;
            right++;
        }
    }
    string result = s.substr(start, max_len);

    return result;
}

int main()
{
    string str ;
    getline(cin, str);
    cout << getthelongest(str);
    return 0;
}
