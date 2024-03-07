#include "iostream"
#include "set"
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> arr;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        arr.insert(t*t);
    }
    for (int i:arr) cout << i << ' ';
}

// O(n)