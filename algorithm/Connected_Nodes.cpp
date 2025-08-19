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
        l[y].push_back(x);
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        vector<int> ans;
        cin>>x;
            for(auto cd:l[x])ans.push_back(cd);
            sort(ans.begin(),ans.end(),greater<int>());
            if(ans.empty())cout<<-1<<endl;
            else{
                for(auto r:ans)cout<<r<<" ";
                cout<<endl;
            }
    }
}