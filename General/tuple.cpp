#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main() 
{
   
   vector<tuple<string, int, int >> tup;

   tup.push_back(make_tuple("shakib", 2, 333)) ;
   tup.push_back(make_tuple("sunvir", 5, 999)) ;

    for(auto i : tup){
        cout<<get<0>(i)<<", "<<get<1>(i)<< ", "<<get<2>(i)<<endl;
    }

    return 0;
}
