#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        int points = 0;
        int prevMin = 0;
        int prevSide = 0;  

        for(int i = 0; i < n; i++){
            int currMin, currSide;
            cin >> currMin >> currSide;
            
            int duration = currMin - prevMin;

            if(prevSide == currSide ){
                points += duration - (duration%2); //largest even
            }

            else{
                points += duration - (1-(duration%2)); //largest odd
            }
            prevSide = currSide;
            prevMin = currMin;
        }

        points += m - prevMin;
        cout<<points<<endl;
    }  

    return 0;
}