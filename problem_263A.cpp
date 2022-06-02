#include <iostream>

using namespace std;
int main() {
    int a = 0;
    int i = 1;
    int j = 1;
    int b = 0;
    while (cin >> a)
    {
        if (a == 1){
            cout << abs(3-i) + abs(3-j) << endl;
            return 0;
        }
        i++;
        if(i == 6){
            i = 1;
            j++;
        }
    }
    cout << abs(3-i) + abs(3-j) << endl;
    return 0;
}
