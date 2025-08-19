/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define f(i,y) for (int i = 0; i < y; i++)
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n) vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i : a) cout << i << ' '; cout << "\n";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define long long int

void Ads_Solution() {
  int n,m;
  cin>>n>>m;
  vector<vector<int>> arr(n,vector<int> (m));
  f(i,n){
    vector<int> a(m);
    f(j,m)cin>>a[j];
    st(a,1);
    f(j,m)arr[i][j]=a[j];
  }
  sort(arr.begin(), arr.end());
  f(i,n)f(j,m)if(arr[j][i] != (i*n)+j){cout<<-1<<endl;return;}
  f(i,n)cout<<i+1<<" ";
  cout<<endl;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}