#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
     cout<<"\n";
    int l=0, h=n-1;
    
    while(l<h){
        int temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";

    return 0;
}