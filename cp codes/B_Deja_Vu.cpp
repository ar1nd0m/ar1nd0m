/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y)
{
    int res = 1;
    while (y > 0) {
       if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
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
void Ads_Solution() {
  int n,q;
  cin>>n>>q;
  vin(a,n);
  int pre = 32;
  while(q--){
    int bit; cin>>bit;
    if(pre>bit){
        int x = (1<<bit), y = (1<<(bit-1));
        for(auto &it:a){
            if(it%x == 0){
                it+=y;
            }
        }
    }
  }
  vout(a);
}
int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
