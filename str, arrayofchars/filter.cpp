int main()
{
    char words[1000][1000];
    int number;
    string result[1000];
    // input
    for (int i = 0; i < 1000; i++)
    {
        cin.getline(words[i], 1000);
        if (words[i][0] == '.' )
            break;
        number++;
    }

    // word[i] is an array
    // number is the lenght of words[i]

    result[0] = words[0];
    int k = 1;
    bool flat = false;
    for (int i = 0; i < number; i++) {   
        for (int j = 0; j < k; j++) {
            if(words[i] == result[j]) {
                k;
                flat = false;
                break;
            }
        }

        if(!flat) {
            flat = true;
            continue;    
        }

        result[k] = words[i];
        k++;
        flat = true;
    }

    for (int i = 0; i < k; i++) {
        if(result[i] == ".") cout << "";
        else cout << result[i] << endl;
    }
    
    return 0;
}
