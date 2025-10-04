#include <bits/stdc++.h>
using namespace std;


int secondLargestElement(vector<int>& nums) {
    //your code goes here
    int n = nums.size();
    int largest = 0, secLarge = -1;
    for(int i=0; i<n; i++){
        if(nums[i] > largest){
            if(largest > secLarge){
                secLarge = largest;
            }
            largest = nums[i];
        }
            
    }
    return secLarge;
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

    int secLargest = secondLargestElement(nums);

    cout<<"Second Largest element in the array: "<<secLargest;
}
