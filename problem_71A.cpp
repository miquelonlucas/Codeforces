#include <iostream>


using namespace std;
int main() {
    int i;
    string a;
    cin >> i;
    while (cin >> a){
        if(a.length() > 10){
            int len = int (a.length()) - 2;
            cout << a[0] << len << a[len + 1] << endl;
        } else{
            cout << a << endl;
        }

        if (i==1){
            break;
        }

    i--;
    }
    return 0;
}
