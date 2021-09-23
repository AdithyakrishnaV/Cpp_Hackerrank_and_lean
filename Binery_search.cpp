

                   //Binery Search

#include <bits/stdc++.h>
using namespace std;

int findIndex(int a[], int n, int target)
{
  int low=0, mid, high=n-1;

  while(low<=high){
    mid=(low+high)/2;
    
    if(a[mid]==target){
      return mid;
    }
    else if(a[low]<=a[mid]){
        if(target<=a[mid] && target >= a[low]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    else{
      if(target>=a[mid] && target<=a[high]){
         low=mid+1;
      }else{
        high=mid-1;
      }
    }
  }
  return -1;
}

int main(){
  int n;
  cin>>n;

  int a[n];
  for (int i = 0; i < n; i++){
     cin>>a[i];
  }
  
  int target;
  cin>>target;

  cout<<findIndex(a,n,target);
  
  return 0;
}