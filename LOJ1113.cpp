#include<iostream>
#include<stack>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        cout<<"Case "<<tc<<':'<<endl;
        stack<string> bk;
        stack<string> fw;
        string str;
        bk.push("http://www.lightoj.com/");
        while(cin>>str){
            if(str[0]=='Q'){
                break;
            }else if(str[0]=='V'){
                cin>>str;
                bk.push(str);
                cout<<str<<endl;
                while(!fw.empty()){
                    fw.pop();
                }
            }else if(str[0]=='F'){
                if(fw.empty()){
                    cout<<"Ignored"<<endl;
                }else{
                    bk.push(fw.top());
                    fw.pop();
                    cout<<bk.top()<<endl;
                }
            }else{
                if(bk.size()<=1){
                    cout<<"Ignored"<<endl;
                }else{
                    fw.push(bk.top());
                    bk.pop();
                    cout<<bk.top()<<endl;
                }
            }
        }cout<<endl;
    }return 0;
}
