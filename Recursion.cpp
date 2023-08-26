#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Factorial
// int factorial(int n){
//     //base condition
//     if(n==1){
//         return 1;
//     }
//     //recursion relation
//    int chotiproblemAns = factorial(n-1);
//    int badiproblemAns = n* chotiproblemAns;

//    return badiproblemAns;
// }
// int main(){
//     int n;
//     cout<<"Enter the num: "<<endl;
//     cin>>n;
//     int ans= factorial(n);
//     cout<<"The factorial is: "<<ans<<endl;
// }



//reverse counting
// void printcounting(int n){
//     //base condn
//     if(n==0){
//         return ;
//     }
//     //recursive condn
//     cout<<n<<' ';
//     printcounting(n-1);

// }
// int main(){
//     int n;
//     cout<<"Enter the num: "<<endl;
//     cin>>n;
//   printcounting(n);
    
// }



//fibonacci series
// int fib(int n){
//     //base case
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }

//     //rr
//     int ans = fib(n-1)+ fib(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the term u want to see: "<<endl;
//     cin>>n;
//     int ans= fib(n);
//     cout<<ans<<endl;
// }



//climb stairs
// int climbstairs(int n){
//     //base condn
//     if(n==0||n==1){
//         return 1;
//     }
//     int ans = climbstairs(n-1)+climbstairs(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Give value of n: "<<endl;
//     cin>>n;
//     int ans= climbstairs(n);
//     cout<<"No of ways are: "<<ans<<endl;
// }



//array traverse
// void print(int arr[],int n,int i){
//     if(i>=n){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     print(arr,n,i+1);
// }
// int main(){
//     int arr[4]={10,20,30,40};
//     int i=0;
//     int n=4;
//     print(arr,n,i);
// }



//find max
// void findmax(int arr[],int n,int i,int& maxi){
//     //base condn
//     if(i>=n){
//         return;
//     }
//     //ek case hum kr dete h
//     if(arr[i]>maxi){
//         maxi=arr[i];
//     }
//     //baaki recursion smbhal lega
//     findmax(arr,n,i+1,maxi);
// }
// int main(){
//     int arr[4]={10,20,30,40};
//     int n=4;
//     int i=0;
//     int maxi=INT_MIN;
//     findmax(arr,n,i,maxi);
//     cout<<maxi<<endl;
// }


//find a key 
// bool find(string str,int n,int i,char key){
//     //base condn
//     if(i>=n){
//         return false;
//     }
//     //1 case khud
//     if(str[i]==key){
//         return true;
//     }
//     //recursion
//     return find(str,n,i+1,key);

// }
// int main(){
//     string str ="priya";
//     int n=str.length();
//     int i=0;
//     char key='j';
//     bool ans= find(str,n,i,key);
//     cout<<ans;
// }


//find num of occurrances
// int find(string str,int n,int i,char key,int& count){
//     //base condn
//     if(i>=n){
//         return 0;
//     }
//     //1 case khud
//     if(str[i]==key){
//         count++;
//     }
//     //recursion
//  int ans= find(str,n,i+1,key,count);
//  return count;
// }

// int main(){
//     string str ="priyaaa";
//     int n=str.length();
//     int i=0;
//     char key='a';
//     int count =0;
//     int ans= find(str,n,i,key,count);
//     cout<<ans;
// }



//store all the occ
// int find(string str,int n,int i,char key,vector<int>&ans){
//     //base condn
//     if(i>=n){
//         return 0;
//     }
//     //1 case khud
//     if(str[i]==key){
//         //count++;
//         ans.push_back(i);
//     }
//     //recursion
//    return find(str,n,i+1,key,ans);
 
// }

// int main(){
//     string str ="praiyaaa";
//     int n=str.length();
//     int i=0;
//     char key='a';
//     vector<int>ans;
   
//     find(str,n,i,key,ans);
//     cout<<"printing ans"<<endl;
//     for(auto val: ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }


//print digits
// int main(){
//     int n=756;
    
// }




//is sorted
// bool checkSorted(int arr[],int n,int i){
//    //base case
//     if(i==n-1){
//         return true;
//     }
//     if(arr[i+1]<arr[i]){
//         return false;
//     }
    
//    return checkSorted(arr,n,i+1);
    
// }
// int main(){
//     int arr[4]={80,20,30,40,};
//     int n = 4;
//     int i = 0;
//     bool isSorted = checkSorted(arr,n,i);
//     if(isSorted){
//         cout<<"Sorted"<<endl;
//     }
//     else{
//          cout<<" Not Sorted"<<endl;
//     }
//}






//binary search
// int bs(int arr[],int s,int e,int key){
//     //base case for not found
//     if(s>e){
//         return -1;
//     }
//     int mid = (s+e)/2;
//     //found
//     if(arr[mid]==key){
//         return mid;
//     }
//     if(key>arr[mid]){
//         return bs(arr,mid+1,e,key);
//     }
//     if(key<arr[mid]){
//         return bs(arr,s,mid-1,key);
//     }
// }
// int main(){
//     int arr[4]={10,20,30,40};
//     int n=4;
//     int s=0;
//     int e=n-1;
//     int key=10;
//     int ans =bs(arr,s,e,key);
//     cout<<"The ans is "<<ans<<endl;
// }




//subsequences
// void printSub(string str,string output,int i,int n){
//     if(i>=n){
//         cout<<output<<endl;
//         return;
//     }
//     //exclude
//     printSub(str,output,i+1,n);

//     //include
//     printSub(str,output+str[i],i+1,n);
// }
// int main(){
//     string str="abc";
//     int n = str.length();
//     string output =" ";
//     int i=0;
//     printSub(str,output,i,n);
// }





//COIN CHANGE PROBLEM
// int solve(int arr[],int n,int target){
//     //base case
//     if(target==0){
//         return target;
//     }
//     if(target<0){
//         return INT_MAX;
//     }
//     //1 cse solve
//     int mini = INT_MAX;
//     for(int i=0;i<n;i++){
//      int ans = solve(arr,n,target-arr[i]);
//      if(ans!=INT_MAX){
//         mini = min(mini,ans+1);
//     }
// return mini;
// }

// }
// int main(){
//     int arr[2]={1,2};
//     int n = 2;
//     int target=3;
//     int ans= solve(arr,n,target);
//     cout<<ans<<endl;
// }




//CUT INTO SEGMENTS
// int solve(int n,int x,int y,int z){
//     //base 
//     if(n==0){
//         return 0;//0 length ki rod banane k liye 0 segments chahiye
//     }
//     if(n<0){
//         return INT_MIN;
//     }
//     int maxi=INT_MIN;
//     int ans1=solve(n-x,x,y,z)+1;
//     int ans2= solve(n-y,x,y,z)+1;
//     int ans3= solve(n-z,x,y,z)+1;
//     maxi= max(ans1,max(ans2,ans3));
//     return maxi;
// }
// int main(){
//     int n=7;
//     int x=5;
//     int y=2;
//     int z=2;
//     int ans = solve(n,x,y,z);
//     if(ans<0){
//         ans=0 ;
//     }
//     cout<<ans<<endl;
// }






//max sum of non adjacent elements
int solve(int arr[],int n,int i,int sum,int& maxi){
    //base case
    if(i>=n){
        maxi= max(sum,maxi);
        return maxi;
    }
    //include
    int ans1= solve(arr,n,i+2,sum+arr[i],maxi);

    //exclude
    int ans2=solve(arr,n,i+1,sum,maxi);

    maxi = max(ans1,ans2);
    return maxi;
}
int main(){
    int arr[4]={1,2,4,9};
    int n=4;
    int i =0;
    int sum=0;
    int maxi=INT_MIN;
    int ans = solve(arr,n,i,sum,maxi);
    cout<<ans<<endl;

}