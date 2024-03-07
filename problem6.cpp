#include "iostream"
#include "vector"
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec, arr(n, 0);
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        vec.push_back(t);
        for(int j = 0; j < i; ++j){
            if(vec[j] < t) arr[i]++;
            else if(vec[j] > t) arr[j]++;
        }
    }
    for (auto i:arr) cout << i << " ";
}
// O(n^2)