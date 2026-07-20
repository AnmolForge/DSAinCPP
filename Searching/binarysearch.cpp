#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int target;
    cin>>target;
    int arr[]={1,3,6,9,15,22};
    int n=6;
    sort(arr, arr+n);
    int hi=n-1;
    int lo=0;
    cout<<"Index where element found: ";
    bool flag=false;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(arr[mid]==target) {
            cout<<mid;
            flag=true;
            break;
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<"Not found";
}