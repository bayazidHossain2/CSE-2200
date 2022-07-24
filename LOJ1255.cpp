#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("01output.txt","w",stdout);
    int T;
    cin>>T;

    for(int tc=1;tc<=T;tc++){
        string A,B;
        cin>>A>>B;
        vector<pair<char,int>> lps(B.size()+2);
        int ind=0;
        lps[0]=make_pair('0',0);
        lps[1]=make_pair(B[0],0);
        for(int i=1;i<B.size();i++){
            if(B[ind]==B[i]){
                lps[i+1]=make_pair(B[i],ind+1);
                ind++;
            }else{
                ind=0;
                if(B[0]==B[i]){
                    ind++;
                }
                lps[i+1]=make_pair(B[i],ind);
            }
        }
        /*for(int i=0;i<B.size()+1;i++){
            cout<<lps[i].first<<" -> "<<lps[i].second<<endl;
        }*/
        ind=0;
        int result=0;
        for(int i=0;i<A.size();i++){
            //cout<<"compair "<<A[i]<<" with "<<lps[ind+1].first<<endl;
            if(A[i]==lps[ind+1].first){
                ind++;
                //cout<<ind<<endl;
                if(ind==B.size()){
                    result++;
                    ind=lps[ind].second;
                }
            }else{
                //cout<<"get miss match"<<endl;
                if(ind!=0){
                    //cout<<"stop i"<<endl;
                    ind=lps[ind].second;
                    i--;
                }
            }
        }cout<<"Case "<<tc<<": "<<result<<endl;
        /*if(tc==897){
            cout<<A<<endl;
            cout<<B<<endl;
        }*/

    }return 0;
}

/*


bbbbaabbbbbbabbabaabaabababababbbaab
abaa



*/
