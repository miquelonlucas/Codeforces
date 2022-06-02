#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    long long n, x, y, a, b, w, z, cost2, cost3;
    // num of tests
    cin >> n;

    while (n--){
        cin >> x >> y >> a >> b;
        w = min(x,y);
        z = max(x,y)-w;
        cost2 = w*b + z*a;
        cost3 = (x+y)*a;
        cout << min(cost2,cost3) << endl;
    }

    return 0;
}

