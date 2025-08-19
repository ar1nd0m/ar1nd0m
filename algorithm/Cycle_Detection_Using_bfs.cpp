#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> List[N];
bool visited[N]={0};
bool ans= 0;
int parentArray[N];
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
     parentArray[s] = -1;
    while(!q.empty()){
       int pr= q.front();
       q.pop();
       for(auto child:List[pr]){
        if(visited[child] and parentArray[pr] != child){
            ans = 1;
        }
        if(!visited[child]){
            visited[child]=1;
            parentArray[child] = pr;
            q.push(child);
        }
       }
    }
}
int main(void){
    int n,e;
    cin>>n>>e;
    set<pair<int,int>> seen;
    while(e--){
        int a,b;
        cin>>a>>b;
        if(seen.count({a,b}) || seen.count({b,a})) continue;
        seen.insert({a,b});
        List[a].push_back(b);
        List[b].push_back(a);
    }
    memset(parentArray, -1, sizeof(parentArray));
    for(int i=0;i<n;i++)if(!visited[i])bfs(i);
        
    if(ans)cout<<"Cycle ditected";
    else cout<<"Cycle not found";
}