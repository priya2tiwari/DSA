#include<iostream>
using namespace std;

//Merge sorting

void merge(int arr[],int s, int e){
    int mid= (s+e)/2;
    int len1=mid-s+1;
    int len2=s-mid;

    //new left array
    int* leftarray = new int[len1];
    int* rightarray = new int[len2];

    //copy to leftarray
    int k=s;
    for(int i=0;i<len1;i++){
        leftarray[i]=arr[k];
        k++;
    }
    //copy to  rightarray
    k=mid+1;
    for(int i=0;i<len2;i++){
        rightarray[i]=arr[k];
        k++;
    }

    //merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;
    while(leftIndex<len1&&rightIndex<len2){
        if(leftarray[leftIndex]<rightarray[rightIndex]){
            arr[mainArrayIndex]=leftarray[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex]=rightarray[rightIndex];
            mainArrayIndex++;
            rightIndex++;

        }
    }







}
void mergeSort(int arr[],int n,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    //left part recur call sort
    mergeSort(arr,n,s,mid);
   //right part sort
   mergeSort(arr,n,mid+1,e);

   //merge two sorted array
   merge(arr,s,e);
}
int main(){
    int arr[]={2,5,1,6,8};
    int n=5;
    int s=0;
    int e= n-1;
    mergeSort(arr,n,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}



//Quick Sort
// int partition(int arr[],int n,int s,int e){
//     //choose pivot element
//     int pivotIndex=s;
//     int pivotElement=arr[s];

//     //place pivot element to right place
//     int count=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivotElement){
//             count++;
//         }
//     }
//     int rightIndex = s+count;
//     swap(arr[pivotIndex],arr[rightIndex]);
//     pivotIndex=rightIndex;
    
//     //left me small right mei  larger
//     int i=s;
//     int j=e;
//     while(i<pivotIndex&&j>pivotIndex){
//         while(arr[i]<=pivotElement){
//             i++;
//         }
//         while(arr[j]>pivotElement){
//             j--;
//         }
//     }
//     while(i<pivotIndex&&j>pivotIndex){
//         swap(arr[i],arr[j]);
//     }
//     return pivotIndex;


// }
// void quicksort(int arr[],int n,int s,int e){
//     //base case
//     if(s>=e){
//         return ;
//     }
//     //partion logic
//     int p = partition(arr,n,s,e);

//     //recursive logic
//     //left
//     quicksort(arr,n,s,p-1);

//     //right call
//     quicksort(arr,n,p+1,e);
// }
// int main(){
//     int arr[]={8,4,1,3,20,30,50};
//     int n=7;
//     int s=0;
//     int e=n-1;
//     quicksort(arr,n,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     return 0;
// }



//backtracking
// void printBacktracking(string& str,int i){
//     //base case
//     if(i >=str.length()){
//         cout<<str<<" "<<endl;
//         return;
//     }
//   //swapping
//   for(int j=i;j<str.length();j++){
//       swap(str[i],str[j]);
//       //recursion
//       printBacktracking(str,i+1);
//       //backtracking to recreate the original
//        swap(str[i],str[j]);
//   }

// }
// int main(){
//     string str="abc";
//     int i=0;
//     printBacktracking(str,i);
// }
