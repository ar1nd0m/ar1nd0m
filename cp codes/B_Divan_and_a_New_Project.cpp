/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

int power(int x, unsigned int y){
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
void sloved_by_Arindam() {
    int n;
    cin>>n;
    vin(a,n);
    vector<pair<int,int>> vp;
    f(i,n)vp.push_back({a[i],i});
    st(vp,0);
    //vector<int>b(n);
    //st(b,0);
    // for(auto w:b){
    //    ans += c * w;
    //    if(ok){ok=0;mp[w] = c;}
    //    else{ok=1;mp[w] = (-c);c++;}
    // }
    //vector pair use korsi karon times ta distinct na tai index overriding hote pare 
    bool ok=1;
    int mid =n/2;
    int c=1;
    int ans = 0;
    map<int,int> mp;
    for(auto w:vp){
       ans += c * w.first;
       if(ok){ok=0;mp[w.second] = mid+c;}
       else{ok=1;mp[w.second] = (mid-c);c++;}
    }
    cout<<2*ans<<el;
    cout<<mid<<" ";
    f(i,n){
        cout<<mp[i]<<" ";
    }
    cout<<el;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       sloved_by_Arindam();
    }
}