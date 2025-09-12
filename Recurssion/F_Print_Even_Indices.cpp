#include <iostream>
using namespace std;

void printRec(int *ar, int i){

    //base case
    if(i < 0){
        return;
    }

    if(i % 2 == 0){
        cout<<ar[i]<< " ";
    }

    printRec(ar, i-1);
}

  // normal 
//    void printArr(int ar[], int n){
//     for(int i=n-1; i >=0; i--){
//         if (i%2 == 0)
//         cout<<ar[i]<<" ";
//     }
//    }



int main() {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    // printArr(ar, n);
    printRec(ar, n-1);


    return 0;
}


