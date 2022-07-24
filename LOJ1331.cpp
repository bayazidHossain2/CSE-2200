#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        double R1,R2,R3;
        cin>>R1>>R2>>R3;
        double a=R1+R2,b=R2+R3,c=R3+R1;
        double A,B,C;
        A=acos((b*b+c*c-a*a)/(2.0*b*c));
        B=acos((a*a+c*c-b*b)/(2.0*a*c));
        C=acos((b*b+a*a-c*c)/(2.0*b*a));
        double ATringle=0.5*a*b*sin(C);
        //cout<<ATringle<<endl;
        double S1,S2,S3;
        S1=R1*R1*B/2.0;
        S2=R2*R2*C/2.0;
        S3=R3*R3*A/2.0;
        printf("Case %d: %.6lf\n",tc,ATringle-S1-S2-S3);
    }return 0;
}

