#include<iostream>
using namespace std;
int main(){ 
//flipped solid diamond

//     int n;
//     cin>>n;
//     for(int row=0;row<n;row=row+1){
//         for(int col=0;col<n-row;col=col+1){
//             cout<<"*";
//         }
//         for(int col=0;col<2*row+1;col=col+1){
//             cout<<" ";
//         }
//          for(int col=0;col<n-row;col=col+1){
//             cout<<"*";
//     }
//      cout<<endl;
// }
// for(int row=0;row<n;row=row+1){
//     for(int col =0;col<row+1;col=col+1){
//     cout<<"*";
// }
// for(int col=0;col<  ;col=col+1){
//     cout<<" ";
// }
// for(int col=0;col<row+1;col=col+1){
//     cout<<"*";
// } 
// cout<<endl;
// }


//fancy pattern#2

// int n;
// cin>>n;
// for(int row=0;row<n;row=row+1){
//     for(int col=0;col<row+1;col=col+1){
//         cout<<row+1;
//         if(col!=row){
//             cout<<"*";
//         }

//     }
//     cout<<endl;
// }

//numeric full pryamid
// int n;
// cin>> n;
// for(int row=0;row<n;row=row+1){
//     //spaces
//     for(int col=0;col<n-row-1;col=col+1){
//         cout<<" ";
//     }
//     //numbers
//     for(int col=0;col<row+1;col=col+1){
//         cout<<row+1+col;
//     }
//     //reverse count
//     for(int col=0;col<row;col=col+1){
//         cout<<row*2-col;
//     }
//     cout<<endl;
// }

// numeric hollow pyramid

// int n;
// cin>>n;
// for(int row=0;row<n;row=row+1){
//     for(int col=0;col<n-row-1;col=col+1){
//         cout<<" ";
//     }
//     int start=1;
//     for(int col=0;col<2*row+1;col=col+1){
//         if(row==0||row==n-1){
//             if(col%2==0){
//                 cout<<start;
//                 start=start+1;
//             }
//             else{
//                 cout<<" ";

//             }
//         }
//         else{
//             if(col==0){
//                 cout<<1;
//             }
//             else if(col==2*row){
//                 cout<<row+1;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
        
//     }
//     cout<<endl;
// }



//hollow diamond
int n;
cin>>n;
for(int row=0;row<n;row++){
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }

    for(int col=0;col<2*row+1;col++){
        if(col==0||col==2*row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
//for lower part
for(int row=0;row<n;row++){
    for(int col=0;col<row;col++){
        cout<<" ";
    }

    for(int col=0;col<(n+2)-2*row;col++){
        if(col==0 || col==n-2*row+1){
            cout<<"*";

        }
        else{
            cout<<" ";
        }

    }
    cout<<endl;
}




}