#include "iostream"
#include "vector"
using namespace std;

int find(vector<int> v, int n, int c){
    for (int i = 0; i < n; ++i) {
        if(v[i] == c) return i;
    }
    return -1;
}

int main(){
    int n, c;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; ++i){
        int t;
        cin >> t;
        vec.push_back(t);
    }
    cin >> c;
    cout << find(vec, n, c);
}
// O(n)