#include<iostream>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        double R;
        int n;
        cin>>R>>n;
        printf("Case %d: %.6lf\n",tc,R*sin(pi/n)/(sin(pi/n)+1));
    }return 0;
}
