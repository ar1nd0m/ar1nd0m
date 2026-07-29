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
    int n=10;
    int ans=0;
    f(i,n)f(j,n){
        char x;
        cin>>x;
        if(x == 'X'){
            if(i == 0 or (9-i)== 0 or j == 0 or (9-j)== 0)ans++;
            else if(i == 1 or (9-i)== 1 or j == 1 or (9-j)== 1)ans += 2;
            else if(i == 2 or (9-i)== 2 or j == 2 or (9-j)== 2)ans += 3;
            else if(i == 3 or (9-i)== 3 or j == 3 or (9-j)== 3)ans += 4;
            else if(i == 4 or (9-i)== 4 or j == 4 or (9-j)== 4)ans+= 5;
        }
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