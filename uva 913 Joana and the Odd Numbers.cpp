#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        long long line = (n+1)/2;
        long long int th_odd_number=line*line;
        long long int number=(1+(th_odd_number-1)*2);
        cout<<number+number-2+number-4<<endl;
    }return 0;
}
