#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums,int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
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
    insertionSort(array,n);
    cout<<"here is your sorted array:"<<endl;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    };

}