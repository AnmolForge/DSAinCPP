#include <iostream>
using namespace std;
int main(){
    int arr[18]={1,1,2,2,2,3,3,3,3,3,4,5,6,7,7,7,7,7};
    int n=18;
    int x=3;
    int hi=n-1;
    int lo=0;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+ (hi-lo)/2;
        if(arr[mid]==x){    
            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid<<" index";
                break;
            }
            else hi=mid-1;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;
}