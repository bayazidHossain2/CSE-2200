#include<iostream>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int Ox,Oy,Ax,Ay,Bx,By;
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        double OA,OB,AB,thita;
        OA=sqrt(pow((Ox-Ax),2)+pow((Oy-Ay),2));
        OB=sqrt(pow((Ox-Bx),2)+pow((Oy-By),2));
        AB=sqrt(pow((Ax-Bx),2)+pow((Ay-By),2));
        //cout<<OA<<' '<<OB<<' '<<AB<<endl;
        thita=acos((pow(OA,2)+pow(OB,2)-pow(AB,2))/(2.0*OA*OB));
        printf("Case %d: %.6lf\n",tc,OA*thita);
    }return 0;
}


/*


*/
