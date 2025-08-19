#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<string> v;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool visited[INT_MAX][INT_MAX]={0};
bool valid(int i,int j){
    return v[i][j] == '.' and i >=0 and j>=0 and i<n and j< m;
}
bool dfs(int x,int y){
    visited[x][y] =true;
    for(int i=0;i<4;i++){
        if(valid(x,y) and !visited[x][y]){
            dfs(x,y);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    v.resize(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
        int ans=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(v[i][j] =='.')ans++;
}
