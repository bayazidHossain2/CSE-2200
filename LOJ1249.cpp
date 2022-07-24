#include<iostream>
#include<vector>
using namespace std;
int main(){
    //freopen("01output.txt","w",stdout);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N;
        cin>>N;
        vector<pair<int,string>> data;
        string name;
        int w,l,h;
        int max_ind=0,min_ind=0;
        for(int i=0;i<N;i++){
            cin>>name>>w>>l>>h;
            data.push_back(make_pair(w*l*h,name));
            if(data[min_ind].first>data[i].first){
                min_ind=i;
            }
            if(data[max_ind].first<data[i].first){
                max_ind=i;
            }
        }
        if(max_ind==min_ind){
            cout<<"Case "<<tc<<": no thief"<<endl;
        }else{
            cout<<"Case "<<tc<<": "<<data[max_ind].second<<" took chocolate from "<<data[min_ind].second<<endl;
        }
    }return 0;
}


