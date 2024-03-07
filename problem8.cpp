#include "iostream"
#include "cmath"
using namespace std;

int A(int a){
    int s = 0;
    while(a % 2 < 1){
        a /= 2;
        s++;
    }
    return pow(2, s);
}

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    if(A(a) + A(b) >= n) cout << "YES";
    else cout << "NO";
}
// O(log n)