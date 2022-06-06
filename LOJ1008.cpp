#include<iostream>
#include<math.h>
using namespace std;
int main(){
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        long long s;
        cin>>s;
        long long row,col;
        row=ceil(sqrt(s));
        if(row&1){
            long long start=(row)*(row);
            if(s>start-row){
                col=(start-s)+1;
            }else{
                col=row;
                start=(row-1)*(row-1)+1;
                row=s-start+1;
            }
        }else{
            long long start=(row-1)*(row-1)+1;
            if(s<start+row){
                col=(s-start)+1;
            }else{
                col=row;
                start=row*row;
                row=start-s+1;
            }
        }
        cout<<"Case "<<tc<<": "<<col<<' '<<row<<endl;
    }return 0;
}
