#include <iostream>
#include <cmath>

using namespace std;
int howManyHit(int baseDmg, int damageIncrease, int creep, int hp);


int main() {

    int x, y, n, m;
    cin >> x >> y >> n >> m;

    cout << howManyHit(x, y , n, m);

    return 0;
}

int howManyHit(int baseDmg, int damageIncrease, int creep, int hp){
    if (creep == 0) return 0;
    // else if (baseDmg >= hp) return creep;
    // else if (damageIncrease == 0) return ceil(creep / baseDmg)*creep;
    return (howManyHit(baseDmg + damageIncrease, damageIncrease, creep-1, hp) + ceil(hp / baseDmg));
}