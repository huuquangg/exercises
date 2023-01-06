#include <iostream>
#include <cstring>
using namespace std;

int compute(char word[]) {
    int sum = 0;
    for (int i = 0; i < strlen(word); i++) {
        sum += int(word[i]);
    }
    return sum;
}

bool is_the_same(char s2[], char substr[]) {
    
    for (int i = 0; i < strlen(s2) - 1; i++) {
        for (int j = i + 1; j < strlen(s2); j++) {
            if (s2[i] > s2[j])
            swap(s2[i], s2[j]);
        }
    }

    for (int i = 0; i < strlen(substr) - 1; i++) {
        for (int j = i + 1; j < strlen(substr); j++) {
            if (substr[i] > substr[j])
            swap(substr[i], substr[j]);
        }
    }

    if (strcmp(substr, s2) == 0) return true;
    else return false;

}


int main() {
    char s1[20000];
    char s2[20];
    cin.getline(s1, 20000);
    cin.getline(s2, 20);
    char sub_string[20];
    
    for (int i = 0; i < strlen(s1) - strlen(s2) + 1; i++) {
        strncpy(sub_string, s1 + i , strlen(s2));
        sub_string[strlen(s2)] = '\0';

        if (compute(sub_string) == compute(s2)) {
            // increase(sub_string);
            // increase(s2);
            char s2_cpy[20];
            strcpy(s2_cpy, s2);
            char sub_cpy[20];
            strcpy(sub_cpy, sub_string);
            
            if (is_the_same(s2_cpy, sub_cpy)) {
                cout << sub_string << endl;
            }          
        }
    }


}
