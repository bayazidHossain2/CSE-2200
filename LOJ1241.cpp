#include<iostream>
using namespace std;
int main(){
    //freopen("01output.txt","w",stdout);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N;
        cin>>N;
        int prev=2;
        int res=0;
        int inp;
        while(N--){
            cin>>inp;
            if(inp-prev>0){
                res+=(inp-prev+4)/5;
            }
            prev=inp;
        }cout<<"Case "<<tc<<": "<<res<<endl;
    }return 0;
}

