/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define f(i,y) for (int i = 0; i < y; i++)
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n)int n;cin>>n; vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i : a) cout << i << ' '; cout << "\n";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define int long long

void Ads_Solution() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int x1=min(a,b),x2=max(a,b),y1=min(c,d),y2=max(c,d);
  if((x1>y1 and y2>x2)or(y1>x1 and x2>y2)or y1> x2 or x1>y2)no;
  else yes;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
