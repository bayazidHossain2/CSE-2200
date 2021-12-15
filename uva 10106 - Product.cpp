#include<iostream>
#include<vector>
using namespace std;
int main(){
    string N1,N2;
    while(cin>>N1>>N2){
        vector<int> result(510,0);
        int rind,carry=0;
        for(int i=N1.size()-1;i>=0;i--){
            rind=N1.size()-i-1;
            for(int j=N2.size()-1;j>=0;j--){
                int p=((N2[j]-'0')*(N1[i]-'0'))+carry+result[rind];
                result[rind]=p%10;
                carry=p/10;
                rind++;
            }while(carry){
                int s=carry+result[rind];
                result[rind]=s%10;
                carry=s/10;
                rind++;
            }
        }rind =509;
        while(result[rind]==0&&rind>0){
            rind--;
        }if(rind==0){
            cout<<result[rind]<<endl;
        }else{
            while(rind>=0){
                cout<<result[rind];
                rind--;
            }cout<<endl;
        }
    }return 0;
}
