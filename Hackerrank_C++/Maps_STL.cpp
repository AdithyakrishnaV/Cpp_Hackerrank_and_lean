#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    map<string, int>mp;
    while(q--){
        int type;
        cin>>type;
        if(type == 1){
            string name;
            int mark;
            cin>>name>>mark;
            if(mp.find(name) != mp.end()){
                mp[name] = mp[name] + mark;
            }else{
                mp.insert(make_pair(name,mark));
            }
        }else if(type == 2){
            string name;
            cin>>name;
            mp[name] = 0;
        }else if(type == 3){
            string name;
            cin>>name;
            cout<<mp[name]<<endl;
        }
    }  
    return 0;
}
