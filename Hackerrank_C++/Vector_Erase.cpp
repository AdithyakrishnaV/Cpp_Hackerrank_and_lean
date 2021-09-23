#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int x, y, z;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    int a1, a2, a3;
    cin>>a1;
    cin>>a2>>a3;
    v.erase(v.begin()+a1-1);
    v.erase(v.begin()+a2-1, v.begin()+a3-1);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    return 0;
}
