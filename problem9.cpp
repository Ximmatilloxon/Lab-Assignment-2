#include "iostream"
using namespace std;

int main(){
    int n, target = 2, s1, s2, s3, l, c;
    cin >> n;
    cin >> s1 >> s2 >> s3;
    c = s1 + s2 + s3;
    cin >> s1 >> s2 >> s3;
    l = s1 + s2 + s3;
    if(l > c) target--;
    for (int i = 2; i < n; ++i) {
        cin >> s1 >> s2 >> s3;
        c = s1 + s2 + s3;
        if(c > l) target++;
    }
    cout << target;
}

// O(n)