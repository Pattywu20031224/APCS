#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int highest_falescore=0;
        int lowest_passscore=101;
        bool all_pass=true;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<60){
                all_pass=false;
            }
        }
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            if(arr[i]<60){
                if(arr[i]<60 && arr[i]>highest_falescore){
                    highest_falescore=arr[i];
                }
            }else{
                if(arr[i] >=60 && arr[i]<lowest_passscore){
                    lowest_passscore=arr[i];
                }
            }
            cout<<arr[i]<<" ";
        }cout<<endl;
        if(all_pass){
            cout<<"best case";
        }else{
            cout<<highest_falescore;
        }
        cout<<endl;
        if(lowest_passscore>=60 && lowest_passscore != 101){
            cout<<lowest_passscore;
        }else{
            cout<<"worst case";
        }
        cout<<endl;
    }
    return 0;
}
