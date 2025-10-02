#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<=n-1;i++){
        int swapDone = 0;
        for(int j=0; j<n-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapDone = 1
            }
        }
        if(swapDone==0){
            break;
        }
    }
    return nums;
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

    nums=bubbleSort(nums);

    cout<<"Array after Bubble Sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}
