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
  int a,b,x1,x2,y1,y2;
    cin>>a>>b;
    cin>>x1>>y1;
    cin>>x2>>y2;
    set<pair<int,int>> n;
    set<pair<int,int>> m;
    n.insert({x1+a,y1+b});
    n.insert({x1+a,y1-b});
    n.insert({x1-a,y1+b});
    n.insert({x1-a,y1-b});

    n.insert({x1+b,y1+a});
    n.insert({x1+b,y1-a});
    n.insert({x1-b,y1+a});
    n.insert({x1-b,y1-a});
    

    m.insert({x2+a,y2+b});
    m.insert({x2+a,y2-b});
    m.insert({x2-a,y2+b});
    m.insert({x2-a,y2-b});

    m.insert({x2+b,y2+a});
    m.insert({x2+b,y2-a});
    m.insert({x2-b,y2+a});
    m.insert({x2-b,y2-a});
    int c=0;
    for(auto q:m)for(auto d:n)if(q.first == d.first and q.second == d.second)c++;
      
    cout<<c<<endl;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}
