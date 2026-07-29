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
const int NUM_SIZE = 300005;
int B_XOR_ARR[NUM_SIZE];
void sloved_by_Arindam() {
    int a,b;
    cin>>a>>b;
    int x = B_XOR_ARR[a-1];
    if(x == b){
        cout<<a<<el;
    }else{
        if(a != (b^x))cout<<a+1<<el;
        else cout<<a+2<<el;
    }
    f(i,a)cout<<B_XOR_ARR[i]<<" ";
    cout<<el;
}

int32_t main() {
    
    fast_io;
    int t=1;
    cin >> t;
    B_XOR_ARR[0]=0;
    fx(i,1,NUM_SIZE){
        B_XOR_ARR[i] = B_XOR_ARR[i-1]^i;
    }
    while (t--) {
       sloved_by_Arindam();
    }
}