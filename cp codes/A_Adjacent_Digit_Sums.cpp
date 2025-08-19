/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define f(i,y) for (int i = 0; i < y; i++)
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n)vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i : a) cout << i << ' '; cout << "\n";
#define yes cout << "Yes \n"
#define no cout << "No\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define int long long

void Ads_Solution() {
  int x,y;
  cin>>x>>y;
  if(y > x+1)no;
  else if(y%9 == (1+ (x%9))%9)yes;
  else no;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
gh repo clone mananpatel06/Food-Order-System