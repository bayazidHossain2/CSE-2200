#include<iostream>
///unsolved
using namespace std;
const int MS=5*1000000+2;
unsigned long long coprime[MS];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    //freopen("01output.txt","w",stdout);
    for(int i=2;i<MS;i++){
        coprime[i]=i;
    }
    for(int i=2;i<MS;i++){
        if(coprime[i]==i){
            for(int j=i;j<MS;j+=i){
                coprime[j]-=(coprime[j]/i);
            }
        }
    }
    for(int i=3;i<MS;i++){
        coprime[i]=(coprime[i]*coprime[i])+coprime[i-1];
        //cout<<i<<" -> "<<coprime[i]<<endl;
        //mx=max(mx,coprime[i]);
    }coprime[1]=0;
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<tc<<": "<<coprime[b]-coprime[a-1]<<endl;
    }
}
