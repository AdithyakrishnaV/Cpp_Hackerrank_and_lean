#include <sstream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    for (int i=0; i<str.size(); i++){
        if(str[i]!=','){
          cout<<str.at(i);
        }else{
            cout<<"\n";
        }
    }
    
    return 0;
}
