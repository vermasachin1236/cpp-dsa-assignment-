#include<iostream>
int main(){
    int arr[]={1,2,3,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
   int x=3;
int lo=0,hi=n-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;

    if(arr[mid]==mid+1){
        lo=mid+1;
    }
    else if(arr[mid]==mid){
        if(arr[mid-1]==arr[mid]){
            cout<<"Repeat element : "<<arr[mid];
            else{
                hi=mid-1;
            }
        }
    }
}

}