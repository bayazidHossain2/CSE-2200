#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        Dx=Ax+Cx-Bx;
        Dy=Ay+Cy-By;
        double area1,area2;
        area1=0.5*((Ax*By-Ay*Bx)+(Bx*Cy-By*Cx)-(Ax*Cy-Ay*Cx));
        area2=0.5*((Ax*Dy-Ay*Dx)+(Dx*Cy-Dy*Cx)-(Ax*Cy-Ay*Cx));
        //cout<<area1<<' '<<area2<<endl;
        cout<<"Case "<<tc<<": "<<Dx<<' '<<Dy<<' '<<int(fabs(area1)+fabs(area2))<<endl;
    }return 0;
}
