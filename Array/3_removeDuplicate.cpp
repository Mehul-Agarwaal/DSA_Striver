#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& nums){
    //2pointer approach
    int n = nums.size();
    int i = 0;
    for(int j=1; j<n; j++){
        if(nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }

    }
    return i+1;
}

int main(){
    int n;
    vector<int> nums;
    
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

    int uniqueElements = removeDuplicate(nums);

    cout<<"No. of unique element in the array: "<< uniqueElements<<endl;

    cout<<"The Array of unique elements are:"<<endl;

    for(int i=0; i<uniqueElements; i++){
        cout<<nums[i]<<" ";
    }


}