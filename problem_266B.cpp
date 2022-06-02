#include <iostream>


using namespace std;
int main() {
    int n, t, j;
    j = 0;
    string line;
    cin >> n >> t;
    cin >> line;
    string lineClone = line;
    while (j < t){
        for (int i = 0; i < n-1; i++){
            if(char(line[i]) == 'B' && char(line[i+1]) == 'G'){
                lineClone[i] = 'G';
                lineClone[i+1] = 'B';
            }
        }
        line = lineClone;
        j++;
    }
    cout << lineClone << endl;
    return 0;
}
