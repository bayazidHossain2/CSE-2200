#include<iostream>
using namespace std;

int numberOfOnes(int N){
    int ctr=0;
    while(N>0){
        if(1&N) ctr++;
        N=N>>1;
        //cout<<N<<endl;
    }return ctr;
}

int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int n;
        cin>>n;
        if(numberOfOnes(n)&1){
            cout<<"Case "<<tc<<": odd"<<endl;
        }else cout<<"Case "<<tc<<": even"<<endl;
    }return 0;
}
