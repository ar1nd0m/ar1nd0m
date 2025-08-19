#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(y-1>x){
            ans++;
        }
    }
    cout<<ans<<endl;
}