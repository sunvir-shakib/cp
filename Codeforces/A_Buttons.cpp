#include<iostream>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--){
    int a, b, c;
    cin>>a>>b>>c;

    if (c % 2 == 1) // odd
        {
            if (b > a) 
                cout << "Second" << endl; 
            else
                cout << "First" << endl; 
        }

        else // even
        {
            if (a > b) 
                cout << "First" << endl; 
            else
                cout << "Second" << endl; 
        }
    }
   
    return 0;
}
