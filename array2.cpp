#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     //creating a vector
//     vector<int>arr;
//     cout<< arr.size() <<endl;
//     cout<<arr.capacity() <<endl;

//     int ans=(sizeof(arr)/sizeof(int));
//     cout<<ans<<endl;



//     //insert
//     arr.push_back(5);
//     arr.push_back(7);



//     //print
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" "<<endl;
//     }



//     //remove
//     arr.pop_back();
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//   cout<<"vector is empty or not: "<<arr.empty()<<endl;

//   vector<int>drr;
//   cout<<"the vector is empty or not: "<<drr.empty()<<endl;    


//     return 0;
// }





    //Unique element
    // int findunique(vector<int>arr){
    //     int ans=0;
    //     for(int i = 0;i<arr.size();i++){
    //         ans=ans^arr[i];
    //     }
    //     return ans;

    // }
    // int main(){
    // int n;
    // cout<<" Enter the size of the array: "<<endl;
    // cin>>n;

    // vector<int>arr(n);
    // cout<<"enter the elements: "<<endl;
    // //taking input
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // int uniqueElement = findunique(arr);
    // cout<<"the unique element is: "<<uniqueElement<<endl;
    // }



    //union of two arrays
    // int main(){
    //     int arr[]={1,2,3,4};
    //     int sizea= 4;
    //     int brr[]={5,6,7};
    //     int sizeb =3;
    //      vector<int>ans;
    //      for(int i=0;i<sizea;i++){
    //          ans.push_back(arr[i]);
    //      }
    //      for(int i=0;i<sizeb;i++){
    //          ans.push_back(brr[i]);
    //      }
    //      for(int i=0;i<ans.size();i++){
    //          cout<<ans[i]<<" ";
    //      }
    // }


    //INTERSECTION
    // int main(){
    // vector<int>arr={1,2,3,4,6,8};
    // vector<int>brr={3,4,9,10};

    // vector<int>ans;

    // //outer loop on arr vector
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     //for every element run loop on brr
    //     for(int j=0;j<brr.size;j++){
    //         if(element==brr[j]){
    //             //mark(jisse dubara check na ho)
    //             brr[j]=-1;
    //             ans.push_back(element);
    //         }
    //     }


    // }
    // //printing
    // for(auto value: ans){
    //     cout<<value<<" ";
    // }
    // cout<<endl;
    // }
    



    //Pair Sum
//     int main(){
//     vector<int> arr{10,20,40,60,70};
//     int sum=80;
//     //print all pairs
// //outer loop will traverse for each element
// for(int i=0;i<arr.size();i++){
//     int element=arr[i];
//     //for every element, will traverse on aage wale elements
//     for(int j=i+1;j<arr.size();j++){
//         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//         if(element+arr[j]==sum){
//             cout<<element<<","<<arr[j]<<endl;
//         }
//     }
// }
//     }



//Triplet
// int main(){
//     vector<int>arr={10,20,30,40};
//     int sum = 80;
//     for(int i=0;i<arr.size();i++){
//        int element1=arr[i];

//        for(int j=i+1;j<arr.size();j++){
//            int element2=arr[j];

//            for(int k=j+1;k<arr.size();k++){
//                int element3=arr[k];
//                if(element1+element2+element3==sum){
//                    cout<<element1<<","<<element2<<","<<element3<<endl;
//                }
//            }
//        }
//     }
// }



//SORT 0'S ND 1'S
// int main(){
//     vector<int>arr={0,1,0,1,1,0,1,0,1,1};
//     int start=0;
//     int end=arr.size()-1;
//     int i=0;
//     while(i!=end){
//         if(arr[i]==0){
//             swap(arr[start],arr[i]);
//             start++;
//             i++;

//         }
//         if(arr[i]==1){
//             swap(arr[end],arr[i]);
//             end--;
        
//         }
//     }
//     for(auto value: arr){
//         cout<<value<<" ";
//     }
    
//     }




//2D ARRAY
// int main(){
// int brr[3][3]={{1,2,3},{4,5,6},{2,4,8}};
// cout<<brr[2][2]<<endl;

// //row wise print
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<< brr[i][j]<<" ";
        

//     }
//     cout<<endl;
//   }
// //column wise

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<< brr[j][i]<<" ";
        

//     }
//     cout<<endl;
//   }


// }



//taking input row wise and coloumn wise
// int main(){
// int arr[4][3];
// int rows=4;
// int cols=3;
//taking input row wise
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>arr[i][j];
//     }
// }
// //printing array row wise
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<arr[i][j]<<" ";
//     }
//    cout<<endl;
// }
//taking input col wise
// for(int i=0;i<cols;i++){
//     for(int j=0;j<rows;j++){
//     cin>>arr[i][j];
//     }
// }
// //printing
// for(int i=0;i<cols;i++){
//     for(int j=0;j<rows;j++){
//     cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }




//}




//ROW WISE SUM

// void  printRowWiseSum(int arr[][3],int rows,int cols){
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[i][j];

//         }
//         cout<<sum<<endl;
//     }
// }


// int main(){
//     int arr[3][3];
// int rows=3;
// int cols=3;
// //taking input row wise
//  for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//                  cin>>arr[i][j];
//      }
//  }
//  //printing array row wise
//  for(int i=0;i<rows;i++){
//      for(int j=0;j<cols;j++){
//          cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
   
// }
//  printRowWiseSum(arr,rows,cols);
// }






//col wise sum
// void  printColWiseSum(int arr[][3],int rows,int cols){
//     for(int i=0;i<cols;i++){
//         int sum=0;
//         for(int j=0;j<rows;j++){
//             sum=sum+arr[i][j];

//         }
//         cout<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][3];
// int rows=3;
// int cols=3;
// //taking input col wise
//  for(int i=0;i<cols;i++){
//     for(int j=0;j<rows;j++){
//                  cin>>arr[i][j];
//      }
//  }
//  //printing array col wise
//  for(int i=0;i<cols;i++){
//      for(int j=0;j<rows;j++){
//          cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
   
// }
//  printColWiseSum(arr,rows,cols);
// }



//linear search
// bool linearSearch(int arr[][3],int rows,int cols){
//     for(int i=0;i<rows;i++){
//         int key=6;
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
            
//         }
        
//     }
//     return false;
// }

// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     for(int i=0;i<cols;i++){
//         for(int j=0;j<rows;j++){
//             cin>>arr[i][j];
//         }


//     }
//     for(int i=0;i<cols;i++){
//         for(int j=0;j<rows;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<linearSearch(arr,rows,cols);
    
// }




//Max element in 2d array
int getMax(int arr[][3],int rows,int cols){
    int maxi=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }


    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans =getMax(arr,rows,cols);
    cout<<ans<<endl;
    
}





