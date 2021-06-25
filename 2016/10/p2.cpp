#include<iostream>
using namespace std;
int main(){
    int n, m;
    while(cin>>n>>m){
        int arr[n][m];
        int count=0;
        int max[n];
        for(int i=0; i<n; i++){
            max[i]=0;
            for(int k=0; k<m; k++){
                cin>>arr[i][k];
                if(arr[i][k]>max[i]){
                    max[i]=arr[i][k];
                }
            }
            count += max[i];
        }
        int flag=true;
        cout<<count<<endl;
        for(int i=0; i<n; i++){
            if(count %  max[i] == 0){
                cout<<max[i]<<" ";
                flag=false;    
            }
        }
        if(flag){
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}