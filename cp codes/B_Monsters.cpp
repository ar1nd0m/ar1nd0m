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
#define sum(a) accumulate(a.begin(), a.end(),0)
#define el endl
bool cmp(const pair<int, int>& i,const pair<int, int>& j)
{
     if(i.second == j.second)return i.first < j.first ;
      return i.second > j.second ;
}
void Ads_Solution() {
  int n,k;
  cin>>n>>k;
  vector<int> a;
  f(i,n){
    int x;
    cin>>x;
    x %= k;
    if(!x)a.push_back(k);
    else a.push_back(x);
  }

  vector<pair<int,int>>vp;
  f(i,n)vp.push_back({i, a[i]});
  sort(vp.begin(),vp.end(),cmp);
  for(auto q:vp){
    cout<<q.first +1 <<" ";
  }
  cout<<el;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
