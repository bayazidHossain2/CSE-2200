#include<iostream>
#include<vector>
using namespace std;

int numberToBinaryString(int N,vector<bool> &bin){
    int nsb=0;
    while(N>0){
        nsb+=(N&1);
        bin.push_back(N&1);
        N=N>>1;
    }return nsb;
}

long long binToDecimal(vector<bool> bin){
    long long result=0,p=1;
    for(auto v : bin){
        result+=(v*p);
        p*=2;
    }return result;
}
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N;
        cin>>N;
        vector<bool> bin;
        int OnoroyOfN=numberToBinaryString(N,bin);
        //cout<<"sz : "<<bin.size()<<" ono : "<<OnoroyOfN<<" back : "<<bin[0]<<endl;
        long long result;
        if(bin.size()==OnoroyOfN||OnoroyOfN==1){
            vector<bool> nbin;
            for(int i=0;i<bin.size()-1;i++){
                nbin.push_back(bin[i]);
            }
            nbin.push_back(0);
            nbin.push_back(bin.back());
            result=binToDecimal(nbin);
        }else if(bin.size()-1==OnoroyOfN&&!bin.front()){
            vector<bool> nbin;
            for(int i=1;i<bin.size()-1;i++){
                nbin.push_back(bin[i]);
            }
            nbin.push_back(0);
            nbin.push_back(0);
            nbin.push_back(bin.back());
            result=binToDecimal(nbin);
            //cout<<"00"<<endl;
        }
        else{
            int nOne=0;
            if(bin[0]){
                nOne=1;
            }
            for(int i=1;i<bin.size();i++){
                if(bin[i]){
                    nOne++;
                }
                if(!bin[i]&&nOne){
                    bin[i]=true;
                    int j=0;
                    for(;j<nOne-1;j++){
                        bin[j]=true;
                    }
                    for(;j<i;j++){
                        bin[j]=false;
                    }
                    nOne=0;
                    break;
                }
            }
            //cout<<"got one : "<<gotOne<<endl;
            if(nOne){
                int sz=bin.size();
                //cout<<sz<<endl;
                bin.clear();
                for(int i=0;i<OnoroyOfN-1;i++){
                    bin.push_back(1);
                }
                for(int i=0;i<sz-OnoroyOfN+1;i++){
                    bin.push_back(0);
                }bin.push_back(1);
            }
            result=binToDecimal(bin);
        }
        cout<<"Case "<<tc<<": "<<result<<endl;
    }return 0;
}
