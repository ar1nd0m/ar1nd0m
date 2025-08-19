#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    bool ans=false;
    while(n--){
        int x;
        cin>>x;
        if(x == 1){
            ans=true;
            break;
        }
    }
    if(ans)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}