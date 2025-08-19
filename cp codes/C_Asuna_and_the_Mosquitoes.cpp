//5 4 3 2 9
//5 4 3 1 10
//4 4 3 1 11
//4 3 3 1 12
//4 3 3 0 13
//3 3 3 0 14
//2 3 3 0 15
//1 3 3 0 16
//1 2 3 0 17
//1 1 3 0 18
//1 1 2 0 19
//1 1 1 0 20
//0 1 1 0 21
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
void Ads_Solution() {
  int n;
  cin>>n;
  vin(a,n);
  int e=0,o=0;
  f(i,n)
    if(a[i] % 2)o++;
    else e++;
    if(o == n or e == n)cout<<mx_e(a)<<endl;
    else if( o == 1)cout<<sum(a)<<endl;
    else cout<<sum(a)-(o-1)<<endl;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}