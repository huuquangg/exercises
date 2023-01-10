#include <iostream>
using namespace std;

int candle(int candles, int makeNew){
    // if(candles == makeNew) return candles + 1;
    int wax = candles % makeNew;
    int candles_exchanged = candles / makeNew;

    if (candles < makeNew) return candles;
    else return candle(candles_exchanged + wax , makeNew) + candles - wax;

}

int main (){
    int candles, makeNew;
    cin >> candles >> makeNew;
	cout << candle(candles, makeNew);
}

// 10.3 = 10+3+1=14