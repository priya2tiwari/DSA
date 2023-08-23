#include<iostream>
using namespace std;
// int BinarySearch(int arr[],int size,int k){
//     int start=0;
//     int end= size-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         if(arr[mid]==k){
//             return k;
//         }
//         else if(k>arr[mid]){
//             start= mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,1,3,4,5};
//     int size =5;
//     int k =2;
//     for(int i = 0;i<size;i++){
//         if( BinarySearch(arr,i+1,arr[i]+k) != -1){
            
//         }
//     }

// }






//EXPONENTIAL SEARCH
int bs(int arr[],int start,int end,int x){
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x){
            return x;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}
int exponential(int arr[],int size,int x){
if(arr[0]==x){
    return 0;
}
int i = 1;
while(i<size && arr[i]<=x){
   
    i=i*2;


}
return bs(arr,i/2,min(i,size-1),x);
}
int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int size = 10;
    int x=56;
    int ans = exponential(arr,size,x);
    cout<<ans<<endl;
    return 0;
}
