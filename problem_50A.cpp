#include <iostream>

using namespace std;
int main() {
    int a;
    string middleChar;
    cin >> a;
    int b = 0;
    while (cin >> middleChar)
    {
        if (char (middleChar[1]) == '+')
        {
            b++;
        }else{
            b--;
        }
    }
    cout << b << endl;
    return 0;
}
