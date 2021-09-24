#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string sentence="Hi I'm Adi welcome to my repo";

    istringstream aa(sentence);
    string reader;

    while(getline(aa, reader, ' ')){
        cout<< reader << endl;
    }

    return 0;
}