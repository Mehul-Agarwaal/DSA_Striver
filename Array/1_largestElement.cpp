#include <bits/stdc++.h>
using namespace std;

//Time Complexity = O(nLog(n))
int largestElementBrute(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[n-1];
}

int largestElementOptimal(vector<int>& nums){
    int n = nums.size();
    int largest = INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i] >= largest){
            largest = nums[i];
        }
    }
    return largest;
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

    int largest = largestElementOptimal(nums);

    cout<<"Largest element in the array: "<<largest;

}