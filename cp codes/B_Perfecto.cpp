/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define f(i,y) for (int i = 0; i < y; i++)
#define mx_e(a) *max_element(a.begin(), a.end())
#define mn_e(a) *min_element(a.begin(), a.end())
#define vin(a, n)vector<int> a(n); for (int i=0;i<n;i++) cin >> a[i];
#define vout(a) for (auto i=0;i<b;i++) cout << a[i] << ' '; cout << "\n";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define st(v, x) (x == 1 ? sort(v.begin(), v.end()) : sort(v.rbegin(), v.rend()))
#define int long long
bool p_s(int n){
return (floor(sqrt(n))*ceil(sqrt(n)) == n);
}
void Ads_Solution() {
  int b;
  cin>>b ;
     int d = sqrt(b*(b+1)/2);
    if(d*d ==b*(b+1)/2){cout<<-1<<endl;return;}
  vector<int> a(b);
  
  int sum=0,j=1;
  
  fx(i,0,b){
    sum +=j;
    int d =sqrt(sum);
    if(d*d != sum){a[i]=j;j++;}
    else {
    a[i]=j+1;
    a[i+1]=j;
    sum +=j;
    sum++;
    j+= 2;
    i++;
    }
  }vout(a);
  }


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
       Ads_Solution();
    }
}