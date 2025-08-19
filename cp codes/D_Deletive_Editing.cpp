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
  string a,b;
  cin>>a>>b;
  map<char,int> m1;
  map<char,int> m2;
   f(i,a.size())m1[a[i]]++;
   f(i,b.size())m2[b[i]]++;
   int i=0,j=0;
  while(i<a.size() and j<b.size()){
    if(a[i] == b[j]){ 
      if(m1[a[i]]<m2[b[j]])break;
      if(m1[a[i]] == m2[b[j]]){
        m2[b[j]]--;
        j++;
      }
    }
      m1[a[i]]--;
      i++;
    
  }
  if(j == b.size())yes;
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
