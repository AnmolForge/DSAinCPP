#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,88,16};
    //output :  3,1, 4, 0, 2
    int n=5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>v (n,0);  //0means not visited
    int x=0;
    for(int i=0; i<n; i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0; j<n; j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                    mindx=j;
                }
                
            }
        }
        arr[mindx]=x;
        x++;
        v[mindx]=1; //visited
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}