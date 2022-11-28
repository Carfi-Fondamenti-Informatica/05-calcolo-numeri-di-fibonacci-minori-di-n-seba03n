#include <iostream>
using namespace std;

int main() {
     int n;
    int p=0;
    int s=1;
    int i=1;
    cin >> n;
    cout << s <<endl;
    while (i++ <= n){
        cout << p+s << endl;
        if(p<s){
            p+=s;

        }else{
            s+=p;

        }
        if ((p+s)>n)
            break;
    }
   return 0;
}
