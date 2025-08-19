#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
vector<pair<int,int>> v[N];
int dis[N];
class cmp{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        return a.second > b.second;
    }
};
void bfs(int source){
    priority_queue <pair<int,int>,vector<pair<int,int>>,cmp> q;
    q.push({source,0});
    dis[source]=0;
    while (!q.empty())
    {
        auto  pr = q.top();
        int node = pr.first;
        int cost = pr.second;
        q.pop();
        for(auto child:v[node]){
               if(child.second + cost < dis[child.first]){
                dis[child.first]=child.second + cost;
                q.push({child.first,dis[child.first]});
               }
            }
        }
}
    
int main(int argc, char const *argv[])
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)dis[i] =INT_MAX;
    int s;
    cin>>s;
    bfs(s);
   for(int i=0;i<n;i++)cout<<i<<" -> "<<dis[i]<<endl;
    return 0;
}
