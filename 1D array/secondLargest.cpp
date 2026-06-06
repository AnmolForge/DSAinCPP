#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    //max
    for(int i=0; i<n; i++){
        if(max<arr[i]) max= arr[i];
    }
    //second max
    for(int i=0; i<n; i++){
        if(smax<arr[i] && arr[i]!=max) smax= arr[i];
    }
    cout<<smax;

}