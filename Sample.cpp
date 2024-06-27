#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int key){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
            return binarySearch(arr,mid+1,high,key);
        else
            return binarySearch(arr,low,mid-1,key);
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    int result=binarySearch(arr,0,len-1,key);
    (result==-1)?
        cout<<"Elements not found"<<endl:
        cout<<"Elements found at position "<<result<<endl;
    return 0;
}