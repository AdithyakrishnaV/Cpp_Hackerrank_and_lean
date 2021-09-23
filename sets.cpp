#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(2);

    for(int element:s){
        cout<<element<<"\n";
    }

    cout<<"\n";

    s.erase(3);

    for(int element:s){
        cout<<element<<"\n";
    }

    return 0;
}