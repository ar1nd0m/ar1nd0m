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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define int long long

void Ads_Solution() {
  int n;
  cin>>n;
  int i=0;
  int c= n/15;
  int ans=3;
  if(n < 3)ans = n+1;
else{
  if(c *15 == n)ans+= (c-1)*3 +1;
  else if( (c*15)+1 == n)ans+= (c-1)*3 +2;
  else if( (c*15)+2 <= n)ans+=(c-1)*3 +3;
}  
cout<<ans<<endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
