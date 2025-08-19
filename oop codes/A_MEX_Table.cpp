/*ॐ वासुदेवाय नम*/
#include<bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define _mx(a) *max_element(a.begin(),a.end());
#define _mn(a) *min_element(a.begin(),a.end());
#define vput(a,n) vector<int>a(n);for(auto &i:a)cin>>i;
#define vout(a) for(auto i:a){cout<<i<<' ';}cout<<"\n";
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define st(v,x) x==1?sort(v.begin(),v.end()):sort(v.rbegin() , v.rend());
void _(){
    int n,m;
    cin>>n>>m;
    cout<<max(n,m)+1<<endl;
}
int32_t main() {
  int t = 1;
  cin >> t;
  while (t--) {
    _();
  }
}