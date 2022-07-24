#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int M;
        cin>>M;
        int x,y;
        cout<<"Case "<<tc<<":\n";
        while(M--){
            cin>>x>>y;
            if(x>x1&&x<x2&&y>y1&&y<y2){
                cout<<"Yes"<<endl;
            }else cout<<"No"<<endl;
        }
    }return 0;
}

