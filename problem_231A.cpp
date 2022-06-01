#include <iostream>


using namespace std;
int main() {
    int i, a, b, c;
    int sum = 0;
    cin >> i;
    while (cin >> a >> b >> c){
        if(a+b+c>1){
            sum += 1;
        }
    i--;
    }
    cout << sum << endl;
    return 0;
}
