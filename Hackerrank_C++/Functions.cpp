#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
     if(a>b && a>c){
         if(a>d){
             cout<<a;
         }else{
             cout<<d;
         }
     }else if(b>c){
        if(b>d){
            cout<<b;
        }else{
            cout<<d;
        }
     }else if(c>d){
            cout<<c;
     }else{
         cout<<d;
     }
    return 0;
 };
 
int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    max_of_four(a, b, c, d);  
    
    return 0;
}
