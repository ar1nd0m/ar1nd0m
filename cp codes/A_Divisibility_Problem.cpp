#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(!(a%b))cout<<0<<endl;
        else{
        int div=a/b;
        div++;
        cout<<(div*b)-a<<endl;
        }
    }
}