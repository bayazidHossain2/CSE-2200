#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int ctrL=0,ctrR=0,res=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='L'){
            ctrL++;
        }else{
            ctrR++;
        }
        if(ctrL==ctrR){
            res++;
        }
    }cout<<res<<endl;
    return 0;
}
