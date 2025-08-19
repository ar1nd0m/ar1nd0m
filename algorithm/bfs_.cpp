#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool visited[10005]={0};
vector<int> ans;
void bfs(int source){
    queue <int> q;
    q.push(source);
    visited[source]=1;
    while (!q.empty())
    {
        int pr= q.front();
        q.pop();
        cout<<pr<<" ";
        for(auto w:v[pr]){
            if(!visited[w]){
                q.push(w);
                visited[w]= 1;
                ans.push_back(w);
            }
        }
    }
    
}
int main(int argc, char const *argv[])
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int s;
    cin>>s;
    bfs(s);
    cout<<endl;
    for(auto x:ans)cout<<x<<" ";
    return 0;
}
