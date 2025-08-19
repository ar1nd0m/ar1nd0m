#include<bits/stdc++.h>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    vector<int> a(n);
    int c=1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)if(a[i-1] != a[i])c++;
    cout<<c<<endl;
    }