#include<iostream>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--){
    int n, k, x;
    cin>>n>>k>>x;

    if((x == 1 && k == 1) || (k == 2 && x == 1 && n%2 == 1 )){ // n is odd
        cout<<"NO"<<endl;
        continue;
    }

    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0; i<n; i++){
            cout<<1<< " ";
            
        }       
        cout<<endl;
        continue;
    }

    //x == 1
    //n is even
    if(n%2 == 0){
        cout<<"YES"<<endl;
        int z = n/2;
        cout<<z<<endl;
        for(int i=0; i<z; i++){
            cout<<2<<" ";
        }
        cout<<endl;
        continue;
    }
    
    //n is odd 
    if(n%2 == 1){
        cout<<"YES"<<endl;
        int y = n/2;
        cout<<y<<endl;
        for(int i=0; i<y-1; i++){
            cout<<2<<" ";
        }
        cout<<3;
        cout<<endl;
    }
  } 
   
    return 0;
}
