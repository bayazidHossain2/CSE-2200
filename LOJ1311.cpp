#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        double v1,v2,v3,a1,a2;
        cin>>v1>>v2>>v3>>a1>>a2;
        double s1,s2;
        s1=(v1*v1)/(2.0*a1);
        s2=(v2*v2)/(2.0*a2);
        double t;
        t=max((v1/(0.0+a1)),(v2/(0.0+a2)));
        //cout<<t<<endl;
        printf("Case %d: %.6lf %.6lf\n",tc,s1+s2,t*v3);
    }return 0;
}
