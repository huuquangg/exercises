#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int male, female, binh_memory, index, differ, in_clb;
    int on_waiting[102];
    

    // get maximum differ
    cin >> binh_memory;
    differ = abs(male - female);
    
    // male0 and female1 in the line
    index = 0;
    while(1)
    {   
        cin >> on_waiting[index];
        if(on_waiting[index] == -1 || index > 101) {
            break;
        }
        index++;
    }
    
    // cout << index << endl;
    male = 0;
    female = 0;
    in_clb = 0;
    int temp = 0;

    for (int i = 0; i < index; i++) {
// checking its a male or female
        if (on_waiting[i] == 0) male++;
        else female++;   
        differ = abs(male - female);
// checking out permission
        if (differ <= binh_memory) in_clb = male + female;
        else {    
            if (on_waiting[i] == -1 || on_waiting[i+1] == -1)
            {   
                in_clb = female + male -1;
                break;
            }
            // swap customers
            if (on_waiting[i] == 0) male--;
            else female--;
            temp = on_waiting[i];
            on_waiting[i] = on_waiting[i+1];
            on_waiting[i+1] = temp;
            // stop Lo
            if (on_waiting[i] == on_waiting[i+1]) {
                in_clb = male + female;
                cout << in_clb; 
                return 0;
                }
            else i = i - 1;
        }
    }
    cout << in_clb;
}