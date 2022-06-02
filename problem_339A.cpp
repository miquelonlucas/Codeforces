#include <iostream>

using namespace std;
int main() {
    string ss;
    cin >> ss;

    int n = ss.length();
    int a, b, c;
    a = b = c = 0;

    for (int i=0; i < n; i++){
        switch (ss[i]){
            case '1': 
                a++;
                break;
            case '2':
                b++;
                break;
            case '3':
                c++;
                break;
        }
    }


    for (int j=0; j < 2*a; j++){
        ss[j]='1';
        j++;
    }
    for (int j=2*a; j < 2*(a+b); j++){
        ss[j]='2';
        j++;
    }
    for (int j=2*(a+b); j < n; j++){
        ss[j]='3';
        j++;
    }

    cout << ss << endl;

    return 0;
}
