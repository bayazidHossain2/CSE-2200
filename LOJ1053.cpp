#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a*a==(b*b+c*c))||((a*a+b*b)==c*c)||(b*b==(a*a+c*c))){
            cout<<"Case "<<tc<<": yes"<<endl;
        }else cout<<"Case "<<tc<<": no"<<endl;
    }return 0;
}
