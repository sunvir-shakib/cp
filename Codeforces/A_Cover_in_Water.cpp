#include<iostream>
#include<string>
using namespace std;



int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '#'){
                continue;
            }

            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                count = 2;
                break;
            }
            count +=1;

        }
        cout<<count<<endl;

    }
   
   
    return 0;
}
