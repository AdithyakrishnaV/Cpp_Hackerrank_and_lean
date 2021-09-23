#include <iostream>
using namespace std;

int main(){
    int a=25;
    int *p=&a;
    cout<<a<<" "<<p<<" "<<&a<<" "<<*p<<"\n";
    return 0;
}


          //& adress print in void 

#include <iostream>
using namespace std;

int main(){
    char a=63;
    void* p=&a;

    cout<<p<<"\n";

    return 0;
}

       //* value print in void 

#include <iostream>
using namespace std;

int main(){
    char a=63;
    void* p=&a;

    cout<<*(char*)p<<"\n";

    return 0;
}