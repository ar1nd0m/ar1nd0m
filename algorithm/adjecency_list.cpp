#include <bits/stdc++.h>

using namespace std;

int main()

{

 int n, e;

 cin >> n >> e;
 //jekono non primitive data type er array create kora jai
 vector<int> mat[n];
//  map <int,int> a[n];
//  string s[n];
//  list<int> l[n];
//  set<int> st[n];
 while (e--)

 {

 int a, b;

 cin >> a >> b;

 mat[a].push_back(b);

 mat[b].push_back(a);

 }

 

 for(auto q:mat[3]){
    cout<<q<<" ";
 }

 return 0;

}
