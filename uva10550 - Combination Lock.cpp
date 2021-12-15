#include<iostream>
using namespace std;
int main(){
    int s,a,b,c;
    while(cin>>s>>a>>b>>c&&(s||a||b||c)){
        int result=0;
        if(s>a){
            result+=(s-a);
        }else if(s<a){
            result+=s;
            result+=(40-a);
        }s=a;
        if(b>s){
            result+=(b-s);
        }else if(b<s){
            result+=b;
            result+=(40-s);
        }s=b;
        if(s>c){
            result+=(s-c);
        }else if(s<c){
            result+=s;
            result+=(40-c);
        }cout<<1080+(result*9)<<endl;
    }return 0;
}
