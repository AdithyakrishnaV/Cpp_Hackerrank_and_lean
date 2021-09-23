#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin>>a;
    cin>>b;
    int n, m;
    n=a.size();//find length
    m=b.size();//find length
    c=a+b;
    
    char temp=a.at(0);
    a.at(0)=b.at(0);
    b.at(0)=temp;
    
    
    cout<<n<<" "<<m<<"\n";
    cout<<c<<"\n";
    cout<<a<<" "<<b;
  
    return 0;
}
