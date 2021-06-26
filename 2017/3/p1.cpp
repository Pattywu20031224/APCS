#include<iostream>
using namespace std;
int main(){
    string num;
    while(cin>>num){
        int odd=0;
        int even=0;
        int length=num.length();
        for(int i=0; i<length; i++){
            if(i%2==0){
                odd+=int(num[i])-48;
            }else{
                even+=int(num[i])-48;
            }
        }
        cout<<abs(odd-even)<<endl;
    }

    return 0;
}