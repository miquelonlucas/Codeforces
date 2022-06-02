#include <iostream>


using namespace std;
int main() {
    long long unitCost, bankMoney, nOfBananas;
    cin >> unitCost >> bankMoney >> nOfBananas;
    long long totalCost;
    totalCost = unitCost*nOfBananas*(nOfBananas+1)/2;
    if(totalCost > bankMoney){
        cout << totalCost-bankMoney << endl;
    } else{
        cout << 0 << endl;
    }
    return 0;
}
