/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define f(i,y) for (int i = 0; i < y; i++)
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n)vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i : a) cout << i.first << ' '<<i.second<<el;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define int long long
#define sum(a) accumulate(a.begin(), a.end(),0)
#define el endl
void Ads_Solution() {
  int n;
  cin>>n;
  vin(a,n);
  vin(b,n);
    vector<pair<int,int>> ans;
    bool s;
    f(i,n){
        s=0;
        f(j,n-i-1){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                s=1;
                ans.push_back({1,j+1});
            }
        }
    }
    s=0;
      f(i,n){
        s=0;
        f(j,n-i-1){
            if(b[j] > b[j+1]){
                swap(b[j],b[j+1]);
                s=1;
                ans.push_back({2,j+1});
            }
        }
    }
    f(i,n){
        if(a[i] > b[i]){
            swap(a[i],b[i]);
            ans.push_back({3,i+1});
        }
    }
    cout<<ans.size()<<el;
    vout(ans);
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
