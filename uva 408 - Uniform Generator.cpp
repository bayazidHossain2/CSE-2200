#include<iostream>
#include<vector>
using namespace std;
int main(){
    int STEP,MOD,M;
    while(cin>>STEP>>MOD){
        M=MOD;
        vector<bool> randN(MOD,false);
        int diff_count=1,cur=0;
        randN[0]=true;
        for(int i=0;i<MOD;i++){
            //cout<<(cur+STEP)%MOD<<" "<<randN[(cur+STEP)%MOD]<<endl;
            if(randN[(cur+STEP)%MOD]){
                break;
            }else{
                randN[(cur+STEP)%MOD]=true;
                diff_count++;
                cur=(cur+STEP)%MOD;
            }
        }//cout<<diff_count<<' ';
        string justified_str="    ";
        int c=0;
        while(MOD){
            justified_str=char((MOD%10)+'0')+justified_str;
            MOD/=10;
            c++;
        }
        while(c<10){
            justified_str=' '+justified_str;
            c++;
        }
        c=0;
        while(STEP){
            justified_str=char((STEP%10)+'0')+justified_str;
            STEP/=10;
            c++;
        }
        while(c<10){
            justified_str=' '+justified_str;
            c++;
        }
        cout<<justified_str;
        if(diff_count==M){
            cout<<"Good Choice"<<endl;
        }else{
            cout<<"Bad Choice"<<endl;
        }cout<<endl;
    }return 0;
}
