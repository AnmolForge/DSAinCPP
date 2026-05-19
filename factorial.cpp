#include<iostream>
using namespace std;
int main(){

    int product=1, n;
    cin>>n;
    for(int i=1; i<=n; i++){
        product*=i;
    }
    cout<<product;

}