#include<iostream>
using namespace std;
int main(){
    freopen("01output.txt","w",stdout);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int x1,y1,z1,x2,y2,z2;
        int n;
        int x3,y3,z3,x4,y4,z4;
        cin>>n;
        n--;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        long long vol=(x2-x1)*(y2-y1)*(z2-z1);
        bool flug=false;
        while(n--){
            cin>>x3>>y3>>z3>>x4>>y4>>z4;
            x1=max(x1,x3);
            y1=max(y1,y3);
            z1=max(z1,z3);
            x2=min(x2,x4);
            y2=min(y2,y4);
            z2=min(z2,z4);
            /*if(x3>=x1&&x4<=x2&&y3>=y1&&y4<=y2&&z3>=z1&&z4<=z2){
                x1=x3,y1=y3,z1=z3,x2=x4,y2=y4,z2=z4;
            }else if(vol>=(x4-x1)*(y4-y1)*(z4-z1)){
                x2=x4,y2=y4,z2=z4;
            }else if(vol>=(x3-x2)*(y3-y2)*(z3-z2)){
                x1=x3,y1=y3,z1=z3;
            }cout<<vol<<endl;*/
            //cout<<"now -> "<<x1<<' '<<y1<<' '<<z1<<' '<<x2<<' '<<y2<<' '<<z2<<endl;
            if(x1>x2||y1>y2||z1>z2){
                flug=true;
            }
            vol=(x2-x1)*(y2-y1)*(z2-z1);
        }if(flug){
            vol=0;
        }
        cout<<"Case "<<tc<<": "<<vol<<endl;
    }return 0;
}
