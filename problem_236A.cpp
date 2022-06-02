#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int cntDistinct(string str)
{
    unordered_set<char> s;
    for (int i = 0; i < int(str.size()); i++) {
        s.insert(str[i]);
    }

    return int(s.size());
}

int main() {
    string ss;
    cin >> ss;
    int n = cntDistinct(ss);
    if (n % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
