#include <bits/stdc++.h>

using namespace std;
int32_t main(){
    list<string> web;
    string a;
    while(1){
        cin>>a;
        if(a == "end")break;
        web.push_back(a);
    }
    int w;
    cin>>w;
    auto it =web.begin();
    while(w--){
        string z;
        cin>>z;
        if(z == "visit"){
            string x;
            cin>>x;
            bool ok =0;
            for(auto i=web.begin();i != web.end();i++)if(x  == *i){ok=1; it = i;break;}
            if(ok)cout<<*it<<endl;
            else cout<<"Not Available"<<endl;
        }else if(z == "prev" ){
                if(it == web.begin())cout<<"Not Available"<<endl;
                else{
                    --it;
                    cout<<*it<<endl;
                }
        }else if(z == "next"){
            auto next_it = ++it;
            --it;
            if (next_it == web.end())cout << "Not Available" << endl;
                else{
                    ++it;
                    cout<<*it<<endl;
                }
            }
        }
    }