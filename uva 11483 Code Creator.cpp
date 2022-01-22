#include<iostream>
using namespace std;
int main(){
    int N;
    int tc=1;
    while(cin>>N&&N){
        cout<<"Case "<<tc++<<':'<<endl;
        cout<<"#include<string.h>\n#include<stdio.h>\nint main()\n{"<<endl;
        string line;
        cin.ignore();
        for(int i=0;i<N;i++){
            getline(cin,line);
            cout<<"printf(\"";
            for(char ch : line){
                if(ch=='\\'||ch=='"'){
                    cout<<'\\';
                }cout<<ch;
            }cout<<"\\n\");"<<endl;
        }
        cout<<"printf(\"\\n\");\nreturn 0;\n}"<<endl;
    }return 0;
}
