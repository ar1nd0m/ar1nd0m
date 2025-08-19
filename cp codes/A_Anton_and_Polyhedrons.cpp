/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n) vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i : a) cout << i << ' '; cout << "\n";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define long long


int32_t main() {
    fast_io;
    int t;
    cin >> t;
    int c=0;
    while (t--) {
      string a;
      cin>>a;
      if(a == "Tetrahedron")c +=4;
      else if( a == "Cube")c +=6;
      else if(a == "Octahedron")c +=8;
      else if(a == "Dodecahedron")c += 12;
      else if(a == "Icosahedron")c +=20;
    }
    cout<<c<<endl;
}
