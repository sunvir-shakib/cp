#include<iostream>
using namespace std;

int main(){
    int h,w; cin>>h>>w;
    char ar[h][w];
     int sum = 0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>ar[i][j];
            if(ar[i][j] == '#'){
                sum++;
        }
    }
}

    // int sum = 0;
    // for(int i=0; i<h; i++){
    //     for(int j=0; j<w; j++){
    //         if(ar[i][j] == '#'){
    //             sum++;
    //         }
    //     }
    // }

    cout<<sum<<endl;



    return 0;
}