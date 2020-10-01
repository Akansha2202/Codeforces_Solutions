#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
#define mod 1000000007
ll min(ll a, ll b) {
    if (a < b)
        return a;
    else
        return b;
}
int SetOneBit(int i) {
    i |= (i >>  1);
    i |= (i >>  2);
    i |= (i >>  4);
    i |= (i >>  8);
    i |= (i >> 16);
    return i - ((unsigned)i >> 1);
}
bool compare(int a, int b) {
    return a > b;
}
int main() {
    fio;
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int>m;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ll set_bit = SetOneBit(a[i]);
 
            ans += m[set_bit];
            m[set_bit]++;
        }
 
        cout << ans << endl;
 
    }
    return 0;
}
