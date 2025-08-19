#include <bits/stdc++.h>
using namespace std;

#define int long long

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define f(i,y) for (int i = 0; i < y; i++)
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n)vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i : a) cout << i << ' '; cout << "\n";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define int long long
#define sum(a) accumulate(a.begin(), a.end(),0)
#define el endl
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1); 
    a[0]=0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int ans = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            int mx = 0, mn = INT_MAX;
            for (int j = i; j <= n; j += i) {
                int s = a[j] - a[j - i];
                mx = max(mx, s);
                mn = min(mn, s);
            }
            ans = max(ans, mx - mn);
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
