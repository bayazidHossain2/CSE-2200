#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int tc=1;tc<=N;tc++){
        long long n,k;
        cin>>n>>k;
        if(k>n){
            cout<<"Case "<<tc<<": 0"<<endl;
        }else if(k==0){
            cout<<"Case "<<tc<<": 1"<<endl;
        }
        else{
            long long res=n*n;
            n--;
            for(int i=2;i<=k;i++){
                bool f=true;
                if(res%i==0){
                    res/=i;
                    f=false;
                }
                res*=(n*n);
                if(f){
                    res/=i;
                }
                n--;
            }cout<<"Case "<<tc<<": "<<res<<endl;
        }
    }return 0;
}
