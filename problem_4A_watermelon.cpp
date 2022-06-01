#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
    int a;
    while (cin >> a){
        if (a % 2 == 0 && a > 2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
