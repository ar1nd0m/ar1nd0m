#include<bits/stdc++.h>

using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    map <int,int>m;
    for(int i=1;i<=n;i++)m[i]=0;
    int r,q;
    cin>>r;
    while(r--){int s;cin>>s;m[s]++;}
    cin>>q;
    while(q--){int s;cin>>s;m[s]++;}

    for(int i=1;i<=n;i++){
        if(m[i] < 1){cout<<"Oh, my keyboard!"<<endl;return 0;}
    }
    cout<<"I become the guy."<<endl;
}