#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int a,b;
        cin>>a>>b;
        int res=(max(a,b)-min(a,b))*4;
        res+=19;
        res+=(a*4);
        cout<<"Case "<<tc<<" :"<<res<<endl;
    }return 0;
}
