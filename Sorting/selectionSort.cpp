#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    //traverse whole arr , find smallest ele, swap
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int i=0; i<n-1; i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            } 
        }
        swap(arr[i], arr[mindx]);
    }
    for(int ele: arr){
        cout<<ele<<" ";
    }
}