#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited[1005][1005]={0};
int n,m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i >= 0 and i < n and j >= 0 and j < m and (grid[i][j] == '.' or grid[i][j] == 'B'))return 1;
    return 0;
}
bool bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    visited[si][sj]=1;
    while(!q.empty()){
        int x= q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
        int ci=d[i].first +x;
        int cj=d[i].second +y;

        if(valid(ci,cj) and !visited[ci][cj]){
            if(grid[ci][cj] == 'B')return 1;
            q.push({ci,cj});
            visited[ci][cj]=1;
        }
        }
    }
    return 0;
}
int main(void){
    cin>>n>>m;
    int si,sj;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            if(x == 'A'){
                si=i;
                sj=j;
            }
            grid[i][j]=x;
        }
    }
    if(bfs(si,sj))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}