#include<iostream>
using namespace std;
//transpose a matrix
// void transpose(int arr[][3],int rows,int cols,int transposearr[][3]){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            transposearr[i][j]=arr[j][i];
//         }
//     }
   
// }

// void printArray(int transposearr[][3],int rows,int cols){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<transposearr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }


//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int transposearr[3][3];
//     transpose(arr,rows,cols,transposearr);
//     printArray(transposearr,rows,cols);
//     }








//COMMON ELEMENT IN 3 ARRAY********
// void findcommon(int arr[3],int brr[3],int crr[3]){ 
//     int common;  
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<3;k++){
//                 if(arr[i]==brr[j]==crr[k]){
//                  common= arr[i];
                    
//                 }
                
//             }

//         }

//     }
//     cout<<common<<endl;

// }
// int main(){
// int arr[3];
// int brr[3];
// int crr[3];
// cout<<"Input for 1st array:  "<<endl;
//  for(int i=0;i<3;i++){
//      cin>>arr[i];
//  }
//  cout<<"input for 2nd array: "<<endl;
//  for(int j=0;j<3;j++){
//      cin>>brr[j];
//  }
//  cout<<"input for 3rd array: "<<endl;
//  for(int k=0;k<3;k++){
//      cin>>crr[k];
//  }
//  cout<<"printing the arrays: "<<endl;
//  for(int i=0;i<3;i++){
//      cout<<arr[i]<<" ";
//  }
//  cout<<endl;

//  for(int j=0;j<3;j++){
//      cout<<brr[j]<<" ";
//  }
//  cout<<endl;

//  for(int k=0;k<3;k++){
//      cout<<crr[k]<<" ";
//  }
//  cout<<endl;
 
// findcommon(arr,brr,crr);
 
// }









//buy and sell stock;*******
// int main(){
//     int arr[7]={9,7,1,6,2,4,8};
//     int mini= INT_MAX;
//     int maxi= INT_MIN;
//     for(int i=0;i<7;i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     for(int j=mini;j<7;j++){
//         if(arr[j]>maxi){
//             maxi=arr[j];
//         }

//     }
//     cout<<"u should buy it for: "<<mini<<endl;
//     cout<<"u should sell it for: "<<maxi<<endl;
//     int profit= maxi-mini;
//     cout<<"ur net profit is: "<<profit<<endl;
// }








//SORT 0'S 1'S AND 2's**
// int main(){
//     int arr[6]={0,1,2,0,2,1};
//     int size=6;
//     int start=0;
//     int end=size-1;
//     int mid=0;
//     while(start<=end){
//         if(arr[mid]==0){
//             swap(arr[mid],arr[start]);
//             start++;
         

//         }
//        if(arr[mid]==1){
//             mid++;
//         }
//         if(arr[mid]==2){
//             swap(arr[mid],arr[end]);
//             end--;
            
            
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }







//Move all negative num to the left side
// int main(){
//     int arr[7]={1,-9,2,-7,-2,1,5};
//     int size=7;
//     int high= size-1;
//     int low=0;
//     while(high>=low){
//         if(arr[low]<0){
//             low++;
//         }
//         else if(arr[high]>0){
//             high--;
//         }
//         else{
//             swap(arr[low],arr[high]);
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




//add two arrays*****
// int main(){
// int arr[]={1,2,3,4,5};
// int brr[]={6,7,8,9,0};
// int n;
// int m;
// int carry=0;
// for(int i=n-1;i<0;i--){
//     for(int j=m-1;j<0;j--){
//         int x = arr[i]+brr[j]+carry;
//         brr[j]= x%10;
//         carry= x/10;

//     }
  
// }
// for(int j=0;j<m-1;j++){
//     cout<<brr[j]<<" ";
// }
// }










//FIND DUPLICATE ELEMENT
//VISITED APPROACH

















