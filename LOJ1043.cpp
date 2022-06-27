#include<iostream>
#include<math.h>
using namespace std;
double abc;
double ab,ac,bc,rto;

double area(double a,double b,double c){
    double s=(a+c+b)/2.0;
    //cout<<"B : "<<a<<' '<<b<<' '<<c<<endl;
    double are=sqrt(s*(s-a)*(s-b)*(s-c));
    //cout<<"Area is : "<<are<<endl;
    return are;
}
bool reset(double ad){
    double ae=ad*ac/(ab+0.0);
    double de=ad*bc/(ab+0.0);
    //cout<<"Sending : "<<ad<<' '<<ae<<' '<<de<<endl;
    double ade=area(ad+0.0,ae+0.0,de+0.0);
    double debc=abc-ade;
    cout<<ade<<' '<<debc<<' '<<(ade/debc)<<endl;
    if(((ade+0.0)/debc)>=rto){
        //cout<<"return true"<<endl;
        return true;
    }else return false;
}
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        cin>>ab>>ac>>bc>>rto;
        double lo=0,hi=ab,mid;
        abc=area(ab,ac,bc);
        //cout<<"Area is : "<<abc<<endl;
        for(int i=0;i<50;i++){
            mid=(lo+hi)/2.0;
            cout<<"MID : "<<mid<<' '<<lo<<' '<<hi<<endl;
            if(reset(mid)){
                hi=mid;
            }else{
                lo=mid;
            }
        }printf("Case %d: %.6lf\n",tc,mid);
    }return 0;
}

/*
1
1 1 1 1

1
100 100 100 2

*/
