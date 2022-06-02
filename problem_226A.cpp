#include <iostream>


using namespace std;
int main() {
    int n; // n is the length
    int counter = 0;
    string a;
    cin >> n >> a;
    int i = 0;
    while (i < n-1){
        if(a[i] == a[i+1]){
            counter++;
        }
        i++;
    }
    cout << counter << endl;
    return 0;
}
