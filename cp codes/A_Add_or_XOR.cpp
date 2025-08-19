#include <bits/stdc++.h>
#define int long long
#define endl '\n' 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define YN(ans) ans?cout<<"YES"<<endl:cout<<"NO"<<endl;
#define vin(a,n) vector<int>a(n);for(auto &x:a)cin>>x;
#define st(v,x) x==0?sort(v.begin(),v.end()):sort(v.rbegin() , v.rend());
#define vout(a) for(auto x:a){cout<<x<<' ';}cout<<"\n";
#define all(a) a.begin(), a.end()
using namespace std;
const int mod=1e9+7,N=2e5+7;

void solved(){
    // int n,m,k;cin>>n>>m>>k;
    int a, b, x, y;
    cin>>a>>b>>x>>y;
    int cast = 0;
    if(a == b){
        cout<<0<<endl;
        return;
    }

    if((a^1 )> b){
        cout<<-1<<endl;
        return;
    }
    if(a>b){
        cout<< y<<endl;
        return;
    }
    
    int ans = 0;
    for(int i = a+1; i<= b;i++){
        if(((i-1)^1) == i)ans += min(x, y);
        else ans += x;
    }
    cout<<ans<<endl;
}

signed main(){
    fastio
    int test_case=1,n=1;cin>>test_case;
    while (test_case--){
        solved();
    }
}