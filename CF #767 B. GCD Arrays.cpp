#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int l,r,k;
        cin>>l>>r>>k;
        int result;
        if(l%2==0&&r%2==0){
            result=(r-l)/2;
        }else if(l%2!=0&&r%2!=0){
            result=((r-l)/2)+1;
        }else{
            result=((r-l)+1)/2;
        }if(k>=result||(l==r&&l>1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }return 0;
}
