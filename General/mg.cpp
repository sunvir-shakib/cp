#include<iostream>
#include<vector>
using namespace std;

void merge(int ar[], int si, int mid, int ei){
    vector<int> tmp;
    int i = si;
    int j = mid+1;

    while(i<=mid && j<=ei){
        if(ar[i] <= ar[j]){
            tmp.push_back(ar[i++]);
        }

        else{
            tmp.push_back(ar[j++]);
        }
    }

            while(i<=mid){
            tmp.push_back(ar[i++]);
        }

        while(j<= ei){
            tmp.push_back(ar[j++]);
        }

    int k=0;
    for(int i = si; i<=ei; i++ ){
        ar[i] = tmp[k++];
        // k++;
    }
}

void mergeSort(int ar[], int si, int ei){

    if(si>= ei){
        return;
    }

    int mid = (si+ei) / 2;

    mergeSort(ar, si, mid);
    mergeSort(ar, mid+1, ei);

    merge(ar, si, mid, ei);

}

int main() 
{
    int n = 5;
   int ar[5] = {8, 2, 6, 1, 7};
   mergeSort(ar, 0, n-1);

   for(int i = 0; i<n; i++){
    cout<<ar[i]<<" ";
   }

   cout<<endl;
   
    return 0;
}
