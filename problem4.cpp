#include "iostream"
using namespace std;

void triangle(int n){
    while(n){
        for (int i = 0; i < n; ++i) cout << '*';
        cout << endl;
        n--;
    }
}

void square(int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << '*';
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    triangle(n);
    square(n);
    cout << n*n;
}
// O(n^2)