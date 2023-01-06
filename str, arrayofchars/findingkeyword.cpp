#include <iostream>
#include <string>

using namespace std;
char book_name_chars[255];
void search_and_add(string book, string word);


int main() {
    string list_books[10000];
    string keyword;
    int number_of_books =0;

    for (int i = 0; i < 10000; i++)
    {
        getline(cin, list_books[i]);
        if(list_books[i] == ".") break;
        number_of_books++;
    }
    getline(cin, keyword);

    for (int i = 0; i < number_of_books; i++)
    {
        search_and_add(list_books[i], keyword);
    }
    

}


void search_and_add(string book, string word) {
    int count = 0;
    bool flat = true;
    // checing if it appear or not!
    for (int i = 0; i < book.size(); i++) {
        int k = 0;
        if (tolower(book[i]) == tolower(word[k])){
            while(k < word.size()) {
                if (tolower(book[i + k]) != tolower(word[k])) flat = false;
                k++;
            }
            if (flat) count++;
            flat = true;
        }
    }
    // return count; 
    // count > 0 means it appears, while count == 0 means it doesn

    // adding bracket ( count > 0)
    if(count == 0) return ;
    else {
        for (int i = 0; i < book.size(); i++) {
            int k = 0;
            if (tolower(book[i]) == tolower(word[k])){
                while(k < word.size()) {
                    if (tolower(book[i + k]) != tolower(word[k])) flat = false;
                    k++;
                }
                
                if(flat) {
                    book.insert(i + k, "]");
                    book.insert(i, "[");
                    i++;
                    break;
                }
                
                
                flat = true;       
            }
        }

    }
    cout << book  << endl;
    // << "-" << count
    
}


// Last night I dreamed of peace
// war and peace
// Little Pea on the Prairie
// The magical bean
// .
// pea


// Abcdef
// Abcddf
// abcdef
// defabc
// ababab
// abcbaabc
// abcdef ABC
// abdefc abc
// abcabccabcdAbbc
// .
// abc
