#include<iostream>
#include<vector>
using namespace std;

int partition2(vector<int> &ar, int si, int ei){
    int pivot = ar[(si+ei)/2]; // pivot at mid
    int i = si;
    int j = ei;
    
    while(i <= j){
        while(i <= ei && ar[i] < pivot){
            i++;
        }
        while(j >= si && ar[j] > pivot){
            j--;
        }
        
        // If we found elements to swap
        if(i <= j){
            swap(ar[i], ar[j]);
            i++;
            j--;
        }
    }
    return i; 
}

int partionAtEnd(vector<int> &ar, int si, int ei){
    int pivot = ar[ei];
    int i = si-1;
    
    for(int j= si; j<ei; j++){
        if(ar[j] < pivot){
            i++;
            swap(ar[i], ar[j]);
        }
    }
    i++;
    swap(ar[i], ar[ei]);
    return i;
}

int partition(vector<int> &ar, int si, int ei){
    int pivot = ar[si];
    int i = si;

    for(int j = si+1; j<=ei; j++){
        if(ar[j] < pivot ){
            i++;
            swap(ar[i], ar[j]);
        }
    }

    swap(ar[i], ar[si]);
    return i;

}

void quickSort(vector<int> &ar, int si, int ei){
    if(si >= ei){
        return;
    }

    int pivotIDX = parAtMid(ar, si, ei);
    quickSort(ar, si, pivotIDX-1);
    quickSort(ar, pivotIDX+1, ei);

}

int main() 
{
   vector<int> ar = {7, 1, 5, 9, 3};

   quickSort(ar, 0, ar.size()-1);

   for(int i = 0; i<ar.size(); i++){
    cout<<ar[i]<<" ";
   }
   cout<<endl;
    return 0;
}
