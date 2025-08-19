#include<bits/stdc++.h>
using namespace std;
bool visited[1005]={0};
vector<int> v[1005];
void dfs(int src){
    visited[src]=1;
    cout << src << endl;
    for(auto e:v[src]){
        if(!visited[e]){
            dfs(e);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(0);
    return 0;
}