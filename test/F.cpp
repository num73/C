#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

typedef long long ll;
const int MAX_N = 2e5 + 20;
unordered_map<int, int> mp[30];
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    ll ans = 0;
    while(n--) {
        string str;
        cin >> str;
        int cnt[26] = {0};
        for(char c : str) cnt[c - 'a']++;
        for(int i = 0; i < 26; i++) {
            int stat = 0;
            int tar = 0;
            if(cnt[i] != 0) continue;
            for(int j = 0; j < 26;j ++) {
                if(i == j) continue;
                if(cnt[j]%2) stat |= (1 << j);
                else  tar |= (1 << j); 
            }
            ans += mp[i][tar];
            mp[i][stat]++;
        }
        
    }
    cout << ans << endl;
}