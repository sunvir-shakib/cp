#include<iostream>
using namespace std;

void pyramidPrint(int n, int i){
//i = currRow
   if(i > n){
    return;
   }

        //for space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //for star
        for(int j=1; j<= (2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;

        pyramidPrint(n, i+1);

}

int main() 
{
   
   int n;
   cin>>n;

   pyramidPrint(n, 1);

    return 0;
}
