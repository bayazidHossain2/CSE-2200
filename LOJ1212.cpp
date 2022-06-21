#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int n,m;
        cin>>n>>m;
        int c_size=0;
        int arr[2005];
        int lp,rp;
        lp=1000;
        rp=1001;
        cout<<"Case "<<tc<<":"<<endl;
        while(m--){
            string str;
            cin>>str;
            if(str[1]=='u'){
                int num;
                cin>>num;
                if(c_size>=n){
                    cout<<"The queue is full"<<endl;
                }
                else if(str[4]=='L'){
                    cout<<"Pushed in left: "<<num<<endl;
                    arr[lp]=num;
                    lp--;
                    c_size++;
                }else{
                    cout<<"Pushed in right: "<<num<<endl;
                    arr[rp]=num;
                    rp++;
                    c_size++;
                }
            }else{
                if(c_size<=0){
                    cout<<"The queue is empty"<<endl;
                }else if(str[3]=='L'){
                    lp++;
                    cout<<"Popped from left: "<<arr[lp]<<endl;
                    c_size--;
                }else{
                    rp--;
                    cout<<"Popped from right: "<<arr[rp]<<endl;
                    c_size--;
                }
            }
        }

    }return 0;
}
