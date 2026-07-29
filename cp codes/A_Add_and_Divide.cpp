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
//in this problem i thought +/+/+/ is the optimal solution but it fails for large b then in yt does like that +++++///// then use a loop for minimize it 0 to 32 
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
    int a,b;
    cin>>a>>b;
    int ans=INT_MAX;
    f(i,32){
        int p = i+b;
        int ops = i;
        int a_c = a; 
        if(p == 1)continue;
        while(a_c > 0){
            a_c /= p;
            ops++;
        }
        ans = min(ans,ops);
    }
    cout<<ans<<el;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       sloved_by_Arindam();
    }
}