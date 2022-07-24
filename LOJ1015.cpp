#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N;
        cin>>N;
        int temp,res=0;
        while(N--){
            cin>>temp;
            if(temp>0){
                res+=temp;
            }
        }cout<<"Case "<<tc<<": "<<res<<endl;
    }return 0;
}
