#include <iostream>


using namespace std;
int main() {
    int n, k, a, b;
    int i = 0;
    cin >> n >> k;

    while (cin >> a){
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }

        i += 1;

        if(i == k){
            break;
            }
        
    }

   while (cin >> b)
   {
       if(b != a){
           cout << i << endl;
           return 0;
       }
       i +=1;
   }
   
   cout << n << endl;

    return 0;
}
