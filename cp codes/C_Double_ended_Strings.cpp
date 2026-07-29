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
int cnt_len_sub_str(string &a,string &b,int m,int n){
    if(m == 0 or n == 0 or a[m-1] != b[n-1])return 0;
    return 1+cnt_len_sub_str(a,b,m-1,n-1);
}
int longCommSubstr(string &a,string &b){
    int ans = 0;
    fx(i,1,a.size()+1){
        fx(j,1,b.size()+1){
            ans = max(ans,cnt_len_sub_str(a,b,i,j));
        }
    }
    return ans;
}
void sloved_by_Arindam() {
    string a;
    string b;
    cin>>a>>b;
    cout<<a.size()+b.size()-2*longCommSubstr(a,b)<<el;
}

int32_t main() {
    fast_io;
    int t=1;
    cin >> t;
    while (t--) {
       sloved_by_Arindam();
    }
}