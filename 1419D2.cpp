#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
#define mod 1000000007
int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}
bool compare(int a, int b) {
    return a > b;
}
int main() {
    fio;
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int v[n];
    sort(a, a + n);
    int k = 0;
    for (int i = n / 2; i < n; i++) {
        v[k] = a[i];
        k += 2;
    }
    k = 1;
    for (int i = 0; i < n / 2; i++) {
        v[k] = a[i];
        k += 2;
    }
    int flag1 = 0;
    for (int i = 1; i < n - 1; i++) {
        if (v[i] < v[i - 1] and v[i] < v[i + 1]) {
            flag1++;
        }
    }
    cout << flag1 << endl;
    for (auto p : v) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}
