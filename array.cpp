#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    //array declaration
    // int arr[7];
    // cout<<"Array created successfully"<<endl;
    // cout<<&arr<<endl;//for address print

    //array initialisation
    // int arr[] = {2,4,6,8,10};
    // int cr[5] = {1,2,3,4,5};
    // int brr[10]={1,2,3,4,5};
    // int drr[2]={2,3,8,7,5,6};//error
    // cout<<"Array initialised successfully";
    

    //Access of array
    // int brr[]={5,6,7};
    // cout<<brr[2];
    // //printing all values
    // for(int i=0;i<3;i++){
    //     cout<<brr[i]<<endl;
    // }

//Taking input from user
// int arr[10];
// cout<<"Enter the values of the array: "<<endl;
// for(int i =0;i<10;i++){
//     cin>>arr[i];
// }
    

//taking input and printing its double
// int arr[5];
// for(int i=0;i<5;i++){
//     cin>>arr[i];
// }
// for(int i=0;i<5;i++){
//     cout<<2*arr[i];
// }

//change the array nums to 1
//my way
// int arr[]={1,3,5,7,9};
// for(int i=1;i<10;i++){
//     if(i%2!=0){
//         cout<<1;
//     }
// }

//diff way
// int arr[5]={1,3,5,7,9};
// for(int i=0;i<5;i++){
//     arr[i]=1;
// }
// //printing it
// for(int i =0;i<5;i++){
//     cout<<arr[i]<<" ";
// }


//linear search in array
// int arr[]={1,2,3,4,5,6,7,8,9};
// int size=9;
// int key=15;
// bool flag=0;
// for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         flag=1;
//         break;
//     }  
//     }
// if(flag){
//     cout<<"is present"<<endl;
// }
//  else{
//     cout<<"is not present"<<endl;
//  }


 //Counting no. of 0's and 1's
//  int arr[]={0,0,1,1,0,0,1,1,0,0,1,1};
//  int size=12;
//  int numzero=0;
//  int numone=0;
//  for(int i=0;i<size;i++){
//      if(arr[i]==0){
//          numzero++;
//      }
//      else{
//      numone++;
 
//  }
//  }
//  cout<<"num of 0 is: "<<numzero<<endl;
//  cout<<"num of 1 is: "<<numone<<endl;


//count no of 2's
// int arr[]={1,4,5,6,8,2,4,2,3,2,4,2,5,2,5,2};
// int size=16;
// int count=0;
// for(int i=0;i<16;i++){
//     if(arr[i]==2){
//         count++;
//     }

// }
// cout<<count<<endl;


//find max in the array
// int arr[]={2,5,7,21,34,56};
// int size=6;
// int maxnum=INT_MIN;
// for(int i = 0; i<6; i++){
//     if(arr[i]>maxnum){
//         maxnum=arr[i];
//     }
// }
// cout<<"The maximum no. is: "<<maxnum<<endl;


//Extreme print array
// int arr[]={1,2,3,4,5,6,7,8};
// int size=8;
// int start=0;
// int end =size-1;
// for(int i=0;i<end;i++){
//     if(start==end){
//         cout<<arr[start]<<" ";
//     }
//     else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//     }
//     start++;
//     end--;
// }
// return 0;


//reverse an array
int n;
cout<<"Enter the num of elements for your array: "<<endl;
cin>>n;
cout<<"Enter the elements for your array: "<<endl;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int start=0;
int end=n-1;
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
cout<<"the array is: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;

}


