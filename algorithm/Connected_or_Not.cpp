#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,e;
    cin>>n>>e;
    vector<int> l[n];
    for (int i = 0; i < e; i++){
        int x,y;
        cin>>x>>y;
        l[x].push_back(y);
    }
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        bool ok=0;
        if(x == y)ok=1;
        for(auto w:l[x])
            {if(w == y){ok=1;break;}}
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}