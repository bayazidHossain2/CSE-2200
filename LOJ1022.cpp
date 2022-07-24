#include<iostream>
#include<math.h>
#include<cstdio>
//#define pi acos(0.0)
using namespace std;
int main(){
    int T;
    cin>>T;
    const double pi = 2*acos(0.0);
    for(int tc=1;tc<=T;tc++){
        double red;
        cin>>red;
        printf("Case %d: %.2lf\n",tc,pow(2*red,2)-(pi*pow(red,2)));
    }return 0;
}
