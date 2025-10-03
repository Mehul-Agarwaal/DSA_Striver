#include <bits/stdc++.h>
using namespace std;

int findPartition(vector<int>& nums, int low, int high);

void quickSort(vector<int>& nums, int low, int high){
    if(low>=high){
        return;
    }

    int partition = findPartition(nums,low,high);

    quickSort(nums, low, partition-1);
    quickSort(nums, partition+1, high);

}

int findPartition(vector<int>& nums, int low, int high){
    int i=low, j=high, pivot=nums[low];
    while(i<j){

        while(nums[i] <= pivot && i<=high-1){
            i++;
        }

        while(nums[j] > pivot && j>=low+1){
            j--;
        }

        if(i<j){
            swap(nums[i], nums[j]);
        }

    }

    swap(nums[low],nums[j]);

    return j;
}

int main(){
    int n;
    vector<int> array;
    cout<<"enter the number of elements in the array:"<<endl;
    cin>>n;
    array.resize(n);
    cout<<"enter the elements one by one:"<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    };
    cout<<endl;
    cout<<"Here is the array you entered:"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    };
    cout<<endl;

    quickSort(array,0,n-1);

    cout<<"here is your sorted array:"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    };

}