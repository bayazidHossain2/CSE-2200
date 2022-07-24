#include<iostream>
using namespace std;
int main(){
    //freopen("01output.txt","w",stdout);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int n,m;
        cin>>n>>m;
        long long res=0;
        if(min(n,m)==1){
            cout<<"Case "<<tc<<": "<<max(n,m)<<endl;
            continue;
        }else if(min(n,m)==2){
            if(max(n,m)&1){
                cout<<"Case "<<tc<<": "<<max(n,m)+1<<endl;
            }else{
                if((max(n,m)/2)&1){
                    cout<<"Case "<<tc<<": "<<max(n,m)+2<<endl;
                }else{
                    cout<<"Case "<<tc<<": "<<max(n,m)<<endl;
                }
            }continue;
        }
        int cy=(m/2)+((m+1)/2);
        res+=(n/2)*cy;
        if(1&n){
            res+=((m+1)/2);
        }
        cout<<"Case "<<tc<<": "<<res<<endl;
    }return 0;
}
