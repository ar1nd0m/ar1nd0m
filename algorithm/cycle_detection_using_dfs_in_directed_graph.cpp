#include<bits/stdc++.h>
using namespace std;
bool ans=0;
bool visited[1005]={0};
bool path[1005];
vector<int> v[1005];
void dfs(int src){
    visited[src]=1;
    path[src]=1;
    for(auto child:v[src]){
        if(path[child]){
            ans=1;
        }
        if(!visited[child]){
            dfs(child);
        }
    }
    path[src]=0;
}
int main()
{
    int n, e;
    cin >> n >> e;
    memset(path, 0, sizeof(path));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i=0;i<n;i++)if(!visited[i])dfs(i);
    if(ans)cout<<"Cycle found"<<endl;
    else cout<<"Not found";
    return 0;
}