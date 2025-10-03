#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int low, int mid, int high);

void mergeSort(vector<int>& nums, int low, int high){
    if(low>=high){
        return;
    }

    int mid = (low+high)/2;

    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums, low, mid, high);

}

void merge(vector<int>& nums, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

}

int main(){
    vector<int> nums;
    int n;

    cout<<"Enter Number of elements in the Array:"<<endl;
    cin>>n;
       
    nums.resize(n);

    cout<<"Enter the numbers one by one:"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>nums[i];
    }

    cout<<"Here is the array you entered:"<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<< endl;

    mergeSort(nums,0,n-1);

    cout<<"Array after merge Sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

