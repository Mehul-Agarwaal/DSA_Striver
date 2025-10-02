#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i=0; i<=n-2; i++ ){
        int mini = i; 
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[i]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);

    }

}

int main(){
    int n;
    cout<<"Enter number of elements to be entered in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<"here is your entered array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    };
    cout<< endl;
    selectionSort(arr,n);
    cout<<"After Selection Sort"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ,";
    };

}