#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 2e5 + 20;
unordered_map<string, int> mp;
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    string s;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        int cnt[27] = {0};
        string stat = "";
        string tar;
        for (char c : s) cnt[c - 'a']++;
        for(int j = 0; j < 26; j++) {
            if(cnt[j] == 0) s += "0";
            else if(cnt[j] %2 ) s += "1";
            else s += "2";
        }
        
        for (int j = 0; j < 26; j++) {
            tar = "";
            for (int k = 0; k < 26; k++) {
                if(j == k) tar += "0";
                else if(cnt[k] % 2) tar += "2";
                else tar += "1"; 
            }    
            ans += mp[tar];
        }
        mp[stat]++;
    }
    cout << ans << endl;
    return 0;
}