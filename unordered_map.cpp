#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; //length of the array
  cin>>n;

  int a[n]; //an array of length n

  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  unordered_map<int,int> mp;

  int sum = 0, find_sub=0;

  for(int i=0;i<n;i++){
    sum = sum+a[i];

    if(sum==0){
      find_sub = 1;
    }
    else{
        if(mp[sum]>0){
          find_sub = 1;
        }else{
          mp[sum]++;
        }
    }
  }
  if(find_sub == 1){
    cout<<"True"<<endl;
  }else{
    cout<<"False"<<endl;
  }

  return 0;
}