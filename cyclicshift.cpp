#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int k=4;

    reverse(arr, arr+n-k);
    reverse(arr+n-k, arr+n);
    reverse(arr, arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}