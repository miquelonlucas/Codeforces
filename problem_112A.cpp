#include <iostream>

using namespace std;
int main() {
    string up, down;
    cin >> up >> down;
    int n = up.length();
    int i = 0;
    while (i < n){
        if(tolower(char (up[i])) > tolower(char (down[i]))){
            cout << 1 << endl;
            return 0;
        }
        if(tolower(char (up[i])) < tolower(char (down[i]))){
            cout << -1 << endl;
            return 0;
        }
        i++;
    }

    cout << 0 << endl;
    return 0;

}
