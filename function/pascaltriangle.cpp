#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f*=i;
    }
    return f;
}
int combination(int x, int y){
    int c= fact(x)/ (fact(y)*fact(x-y));
    return c;

}

int main(){
    int n,r ;
    cin>>n>>r;
    
    for(int i=0; i<=n-1; i++){
        //spaces
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<< combination(i,j)<<" ";
        }
        cout<<endl;
    }

}