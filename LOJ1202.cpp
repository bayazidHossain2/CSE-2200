#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        //cout<<(r1&1)<<' '<<(r2&1)<<' '<<(c1&1)<<' '<<(c2&1)<<endl;
        int row_dif=fabs(r1-r2);
        //cout<<row_dif<<endl;
        if((row_dif&1)&&(((r1&1)==(r2&1))||((c1&1)==(c2&1)))){
            cout<<"Case "<<tc<<": impossible"<<endl;
        }else if(((row_dif&1)==0)&&(((r1&1)!=(r2&1))||((c1&1)!=(c2&1)))){
            cout<<"Case "<<tc<<": impossible"<<endl;
        }else if(fabs(r1-r2)==fabs(c1-c2)){
            cout<<"Case "<<tc<<": 1"<<endl;
        }else{
            cout<<"Case "<<tc<<": 2"<<endl;
        }
    }return 0;
}
