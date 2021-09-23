#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
  private:
    int sum;
    int m[5];
  public:
  Student(){
    sum=0;
  }
     void input(){
        for(int i=0; i<5; i++){
          cin>>m[i];
          sum+=m[i];
        }
     }
     int calculateTotalScore(){
        return sum;
     }

};
int main() {