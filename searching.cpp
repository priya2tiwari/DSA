#include<iostream>
#include<vector>
 using namespace std;
 //binary search
// int binarysearch(int arr[],int size,int element){
//     int start=0;
//     int end=size-1;
//     int mid= start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==element){
//             return mid;
//         }
//        else if(element>arr[mid]){
//             start=mid+1;
//         }
//        else{
//             end= mid-1;
//         }
//         mid= start+(end-start)/2;
        
//         }
// return -1;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size=7;
//     int element=7;
//     int indexofElement= binarysearch(arr,size,element);
//     if(indexofElement==-1){
//         cout<<"not found"<<endl;
//     }
//     else{
//         cout<<"the index of the element is: "<<indexofElement;
//     }
   
// }








//first occurrance
// int firstocc(int arr[],int size,int target){
//     int start=0;
//     int end= size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==target){
//         //ans store
//         ans=mid;
//         //left search
//         end=mid-1;
//         }
//         else if(target<arr[mid]){
//             //left mein
//             end =mid-1;
//         }
//         else if(target>arr[mid]){
//             start=mid+1;
//         }
//         mid= start+(end-start)/2;


//     }
//     return ans;
// }

// int main(){
//     int arr[]={1,2,4,4,5,6,7,4};
//     int target =9;
//     int size= 8;

//     int ans= firstocc(arr,size,target);
//     cout<<"the first occurrance is: "<<ans<<endl;
//     return 0;
// }










//last occurrance
// int lastocc(int arr[],int size,int target){
//     int start=0;
//     int end= size-1;
//     int mid = (start+end)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==target){
//             ans=mid;
//             //right search
//             start= mid+1;
//         }
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return ans;

// }
// int main(){
//     int arr[]={1,2,4,4,4,6,7,8};
//     int size=8;
//     int target=7;
//     int ans = lastocc(arr,size,target);
//     cout<<"the last occurrance is: "<<ans<<endl;
//     return 0;
// }











//TOTAL OCCURRANCE
//In total occ we will subtract first and last occurrance
//so we'll use the code of first and last occurrance and wil make a int main() here.

// int main(){
//     int arr[]={1,2,4,4,4,6,7,8};
//     int size=8;
//     int target=4;
//     int ans = lastocc(arr,size,target) - firstocc(arr,size,target) +1;
//     cout<<"the total occurrance is: "<<ans<<endl;
// }












//PEAK ELEMENT IN A MOUNTAIN ARRAY
// int findpeak(int arr[],int size){
//     int start=0;
//     int end= size-1;
//     int mid=start +(end-start)/2;
//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid;//bcz peak can be the mid value also and we left it while neglecting left search
//         }
//         mid= start+(end-start)/2;
//     }
//     return end;//we can also return start as well
// }
// int main(){
//     int arr[]={1,2,4,6,10,12};
//     int size= 7;
//     int ans = findpeak(arr,size);
//     cout<<"THE peak element is:  "<<ans<<endl;
//     return 0;
// }









//FIND PIVOT ELEMENT
// int findpivot(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid = start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if(arr[mid-1]>arr[mid]){
//             return mid-1;
//         }
//         else if(arr[start]<arr[mid]){
//             //right search
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }

// }
// int main(){
//     int arr[]={1,3,5,7,9,2,4};
//     int size=7;
//     int ans= findpivot(arr,size);
//     cout<<"the pivot is: "<<ans<<endl;
//     return 0;
// }










//SQUAREROOT OF A NUMBER USING BINARY SEARCH
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
//     cout<<"The ans is: "<<ans<<endl;

//     return 0;

// }






//APPLY BINARY SEARCH IN 2D MATRIX
bool BinarySearch(int arr[][4],int rows,int cols,int target){
    int start=0;
    int end= rows*cols-1;
    int mid= start+(end-start)/2;
    
    while(start<=end){
        int rowindex = mid/cols;
        int colindex= mid%cols;

        if(arr[rowindex][colindex]==target){
            
            cout<<"Found at "<< rowindex <<" "<<colindex <<" "<<endl;
            return true;
            }

        if(arr[rowindex][colindex]<target){
            start=mid+1;
        }
        
        
        if(arr[rowindex][colindex]>target){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return false;

}

int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int target=20;
    int rows=5;
    int cols=4;
    bool ans = BinarySearch(arr,rows,cols,target);
        if(ans){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }

    
    }















