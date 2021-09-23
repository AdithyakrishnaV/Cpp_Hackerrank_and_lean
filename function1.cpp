#include <iostream>
using namespace std;

//function declaration 
void party (string);

//function definition
void party(string n){
    cout<<"hey "<<n<<", welcome to our party\n";
    cout<<"yeyy.. its fun\n";
}
int main(){
    string x="adi";
    party(x);

    return 0;
}



// #include <iostream>
// using namespace std;

// //function declaration 
// void multiply5(int&);

// //function definition
// void multiply5(int& a){
//     a=a*5;
// }

// int main(){
//     int x=10;
//     //function calling
//     multiply5(x);
//     cout<<x<<"\n";
//     return 0;
// }



//all lower}else if(){ letters to upper }else if(){



// #include <iostream>
// using namespace std;

// //function definition
// string  stringConvert(string s){
//      string res=s;
//      for(int i=0; i<s.length(); i++){
//          if(s[i]-'A'>=0 && s[i]-'A'<= 25){  //big to small
//             res[i]=res[i]-'A'+'a';
//          }else if(s[i]-'a'>=0 && s[i]-'a'<= 25){  //small to big
//             res[i]=res[i]-'a'+'A';
//          }
//      }
//      return res;
// }

// int main(){
//     string s="adithya&*&DSNFKJHDKSFKDSFKD";
//     string res1=stringConvert(s);
//     cout<<res1<<"\n";
//     return 0;
// }