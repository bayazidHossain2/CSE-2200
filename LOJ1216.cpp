#include<iostream>
#include<math.h>
#define pi acos(-1)
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        double r3=((r1-r2)*p)/(h+0.0);
        r3+=r2;
        printf("Case %d: %.6lf\n",tc,(pi/3)*p*(r3*r3+r2*r2+r3*r2));
    }return 0;
}

