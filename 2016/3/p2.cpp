#include<iostream>
using namespace std;
int a[10][10];
int b[10][10];

void rotate(int R, int C){
    for(int i=C-1;i>=0;i--){
		for(int j=0;j<R;j++){
			b[(C-1)-i][j]=a[j][i];
		}
	}
	for(int i=0;i<C;i++){
		for(int j=0;j<R;j++){
			a[i][j]=b[i][j];
		}
	}
}
void flip(int R, int C){
    for(int i=R-1;i>=0;i--){
		for(int j=0;j<C;j++){
			b[(R-1)-i][j]=a[i][j];
		}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			a[i][j]=b[i][j];
		}
	}
}

int main(){
    int r, c, k;
    while(cin>>r>>c>>k){
        int mk[k];
        for(int i=0; i<r; i++){
            for(int s=0; s<c; s++){
                cin>>a[i][s];
            }
        }
        for(int f=0; f<k; f++){
            cin>>mk[f];
        }
        for(int f=k-1; f>=0; f--){
            if(mk[f]==0){
                rotate(r, c);
                int tmp=r;
				r=c;
				c=tmp;
            }else{
                flip(r, c);
            }
        }
        cout<<r<<" "<<c<<endl;
        for(int i=0;i<r;i++){
		    cout << a[i][0];
		    for(int j=1;j<c;j++){
			    cout << " " << a[i][j];
	    	}
		    cout << endl;
	    }	
        
        
    }
    return 0;
}