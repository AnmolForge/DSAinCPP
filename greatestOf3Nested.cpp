#include <iostream>
using namespace std ;
int main(){
    int f,g,h ;
    cout<<"num 1 "<<endl ;
    cin>>f;
    cout<<"num 2 "<<endl;
    cin>>g;
    cout<<"num 3"<<endl ;
    cin>>h;
    if (f>g && f>h){
        
        cout<< f<< " is the greatest.";
    }
        
    else if(h>f && h>g){
        cout<<h<<" is the greatest.";
    }
        
    else{
        cout<< g <<" is greatest.";
    }
}
