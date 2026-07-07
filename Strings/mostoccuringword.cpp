#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    //given a sentence, most occuring word
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int count=1;
    int maxcount=1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount, count);
    }
    count =1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++; 
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
    


}