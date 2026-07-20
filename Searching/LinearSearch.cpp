#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,11,6,7,34};
    int n=6;
    bool flag=false ;
    int target;
    cin>>target;
    for(int i=0;i<n; i++ ){
        if(arr[i]==target){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"present";
    else cout<<"not present";
}
