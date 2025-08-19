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
  string a;
  cin>>a;
  if(a.size()==1){cout<<-1<<endl;return;}
  fx(i,1,a.size())if(a[i-1] == a[i]){cout<<a[i-1]<<a[i]<<endl;return;}
    fx(i,2,a.size()){
        if(a[i-2] != a[i-1] && a[i-1] != a[i] and a[i-2] != a[i]){cout<<a[i-2]<<a[i-1]<<a[i]<<endl;return;}
    }cout<<-1<<endl;
  }

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
