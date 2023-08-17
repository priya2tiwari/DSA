 #include<iostream>
 using namespace std;
// //SQUAREROOT OF A NUMBER USING BINARY SEARCH WITH DECIMAL POINTS
// int  findsqrt(int n){
//     int start=0;
//     int end=n;
//     int mid=(start+end)/2;
//     int ans=-1;
//     while(start<=end){
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid>n){
//             end=mid-1;
//         }
//         else if (mid*mid<n){
//             ans=mid;//we are storing the ans bcz may be a case if value greater than this will exceed it//nearest ans hai
//             start= mid+1;

//         }
//         mid=(start+end)/2;
//     }
//     return ans;

// }
// int main(){
//     int n;
//     cout<<"Enter the num: "<<endl;
//     cin>>n;

//     int ans= findsqrt(n);
//     //cout<<"The ans is: "<<ans<<endl;

//     int precision;
//     cin>>precision;
//     double step=0.1;
//     for(int i=0;i<precision;i++){
//         for(double j=ans;j*j<=n;j=j+step){
//             ans=j;
//         }
//      step=step/10;
//     }
//     cout<<ans<<endl;

//     return 0;

// }






//binary search in a nearly sorted array
// int BinarySearch(int arr[],int size,int target){
//     int start=0;
//     int end= size-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid-1>=0 && arr[mid-1]==target){
//             return mid-1;

//         }
//         if(mid+1<size && arr[mid+1]==target){
//             return mid+1;
//         }
//         if(arr[mid]<target){
//             start=mid+2;
//         }
//         if(arr[mid]>target){
//             end=mid-2;

//         }
//         mid= (start+end)/2; 
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,3,40,20,50,80,70};
//     int size =7;
//     int target=80;
//     int index= BinarySearch(arr,size,target);
//     cout<<"the index of the target is: "<<index<<endl;
//     return 0;
// }









//divide 2 nums using binary search
// int solve(int dividend,int divisor){
//     int start=0;
//     int end= dividend-1;
//     int mid=start+(end-start)/2;
//     int ans=0;
//     while(start<=end){
//         if(abs(mid*divisor)==abs(dividend)){
//           ans = mid;
//           break;
//         }
//         if(abs(mid*divisor)>abs(dividend)){
//             //left search
//             end= mid-1;
//         }
//         if(abs(mid*divisor)<abs(dividend)){
//             ans=mid;
//             start=mid+1;

//         }
//         mid= start+(end-start)/2;
//     }
//     if((divisor<0 && dividend<0)||(divisor>0 && dividend>0)){
//        return ans;
//     }
//     else{
//          return -ans;
//     }
// }
// int main(){
//     int dividend=10;
//     int divisor=-3;
//     int quoteint= solve(dividend,divisor);
//     cout<<"the quoteint is: "<<quoteint<<endl;
    
// }








//find the odd occurring element in an array
// int findElement(int arr[15],int size){
//     int start=0;
//     int end= size-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(start==end){
//             return start;
//         }
//         //mid on even or odd case
//         //even case
//         if(mid%2==0){
//             if(arr[mid]==arr[mid+1]){
//                 //ans in right
//                 start=mid+2;
//             }
//             else{
//                 end=mid;
//             }

//         }
//         //odd case
//         if(mid%2!=0){
//             if(arr[mid]==arr[mid-1]){
//                 start=mid+1;
//             }
//             if(arr[mid]==arr[mid+1]){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         mid= (start+end)/2;


//     }
//     return -1;
// }
// int main(){
//     int arr[]={3,1,1,2,2,3,3,4,4,7,7,600,600,4,4};
//     int size= 15;
//     int index= findElement(arr,size);
//     cout<<"the index is: "<<index<<endl;
//     return 0;
// }