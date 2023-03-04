#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 20;
int a[MAX_N];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = a[1];
    for (int i = 2; i <=n; i++) {
        if(a[i] > a[i-1]) ans = a[i];
        else break;
    }
    cout << ans << endl;

}