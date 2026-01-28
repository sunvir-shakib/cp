#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;

    int pos = 0;
    int neg = 0;

    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
        if(ar[i] > 0){
            pos++;
        }

        else{
            neg++;
        }
    }

    if(pos >= neg){
        if(neg % 2 == 1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }


    else{
        // if(pos < neg){
           int op = neg - (n/2);
            if((n/2)%2 == 1){
                cout<<op+1<<endl;
            }
            else{
                cout<<op<<endl;
            }    
        // }
    }
}
    return 0;
}