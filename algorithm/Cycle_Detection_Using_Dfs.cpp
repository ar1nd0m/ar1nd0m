#include<bits/stdc++.h>
using namespace std;
bool ans=0;
bool visited[1005]={0};
int ParentArray[1005];
vector<int> v[1005];
void dfs(int src){
    visited[src]=1;
    for(auto child:v[src]){
        if(visited[child] and ParentArray[src] != child){
            ans = 1;
        }
        if(!visited[child]){
            ParentArray[child] = src;
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    set<pair<int,int>> seen;
    memset(ParentArray, -1, sizeof(ParentArray));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
         if(seen.count({a,b}) || seen.count({b,a})) continue;
        seen.insert({a,b});
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)if(!visited[i])dfs(i);
    if(ans)cout<<"Cycle found"<<endl;
    else cout<<"Not found";
    return 0;
}