#include <iostream>
using namespace std;

int largest_input(){
   int n ;
    cin>>n;
    
    if(n==0) return n;
    else return max(n,largest_input());

}

int main(){
	cout << largest_input();
}
