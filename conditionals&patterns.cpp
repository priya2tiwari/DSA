#include<iostream>
using namespace std;
int main(){
// {
//     //declare a int type varible
//     int score;
//     //print enter the score
//     cout<<"Enter the score: "<<endl;
//     //taking input
//     cin >> score;
//     //if condition
//     if(score<300){
//         cout <<"india wins"<<endl;
     
//     }
//     else{
//         cout << "pak wins";
//     }
//     //Multiple conditions
//   int marks;
//   cin >> marks;
//   if(marks>=90){
//       cout<<"A grade"<<endl;
//       }
//       else if(marks>=70){
//           cout<<"B grade"<<endl;
//   }
//   else if(marks>=60){ 
//           cout<<"c grade"<<endl;
//   }
//   else if(marks>=40){
//           cout<<"D grade"<<endl;
//   }
//   else{
//       cout<<"f grade"<<endl;
//   }
//   int bronum;
//   cin >> bronum;
//   if(bronum == 0){
//       cout <<"Baat bn jayegi";
//   }
//   else{
//       cout <<"baat nhi bni";
//   }
// for(int i =5;i>0;i--){
//     cout<<i;
// }
// for(int i = 0;i<5;i++){
//     cout<<i*2<<endl;
// }
// for(int i =1 ;i<5;i=i+2){
//     cout<<i<<endl;
// }
//  for(int i=1;i<10;i=i*2){
//      cout<< i << endl;
//  }
//    for(int i=100;i>0;i= i/2){
//        cout <<i<<endl;

//    }
// for(int i =5;(i>=0&&i<=10);i=i+1){
//     cout<<i<<endl;
// }
// int n;
// if(cin>>n){
//     cout <<"priya";
// }
//printing solid rectangle
//outer loop: row observation
// for(int row =0 ; row<3;row = row+1){
//     //inner loop: coloumn observation
//     for(int col=0;col<5;col = col+1){
//         cout<<"*  ";

//     }
//     cout<<endl;
// }
//printing solid square
// for(int row = 0;row<4; row = row+1){
//     for(int col =0;col<4;col = col+1){
//         cout<<"*  ";

//     }
//     cout<<endl;
// }
//printing solid square of our choice of length
// int n;
// cin>> n;
// for(int row = 0;row<n; row = row+1){
//     for(int col =0;col<n;col = col+1){
//         cout<<"*  ";

//     }
//     cout<<endl;
// }
// Hollow Rectangle
// int rowcount,colcount;
// cin>>rowcount;
// cin>>colcount;
// for (int row = 0; row<rowcount; row = row+1){
//     if(row==0 || row==rowcount-1){
//     for(int col=0; col<colcount; col = col+1){
//         cout<<"* ";
//     }
//     }
//     else{
//         cout<<"* ";
//         for(int col=0;col<colcount-2;col = col +1){
//             cout<<"  ";
//         }
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//Half Pyramid
//  int n;
//  cin>> n;
//  for(int row=0;row<n;row=row+1){
//      for(int col=0;col<row+1;col=col+1){
//          cout<<"*";

//      }
//      cout<<endl;
//  }
//inverted half pyramid
// int n;
// cin>> n;
// for(int row=0; row<n; row=row+1){
//     for(int col=0;col<n-row;col=col+1){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//numeric half pyramid
// int n;
// cin>>n;
// for(int row=0;row<n;row=row+1){
//     for(int col=0;col<row+1;col=col+1){
//         cout<<col+1;
//     }
//     cout<<endl;
// }
//inverted numeric half pyramid
// int n;
// cin>>n;
// for(int row=0;row<n;row=row+1){
//     for(int col = 0;col<n-row;col=col+1){
//         cout<<col+1;
//     }
//     cout<<endl;
// }
//solid diamond
// Full pryamid
// int n ;
// cin>>n;
// for(int row=0;row<n;row=row+1){
//     //spaces
//     for(int col=0;col<n-row-1;col=col+1){
//         cout<<" ";
//     }
//     //stars
//     for(int col=0;col<row+1;col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// // Inverted Full pryamid
// for(int row=0;row<n;row=row+1){
//     for(int col = 0;col<row;col=col+1){
//         cout<<" ";

//     }
//     for(int col=0;col<n-row;col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//hollow diamond
// int n;
// cin>>n;
// for(int row=0;row<n;row=row + 1){
//     //spaces
//     for(int col=0;col<n-row-1;col=col+1){
//         cout<<" ";
//     }
//     //stars
//     for(int col=0;col<2*row+1;col=col+1){
//         if(col==0){
//             cout<<"*";
//                     }
    
//     else if(col==2*row){
//         cout<<"*";
// }
//     else { cout<<" ";
//     }
//     cout<<endl;
// }


// }
//flipped solid diamond
int n;
cin>> n;
for(int row=0;row<n;row=row+1){
    for(int col =0;col<n-row;col=col+1){
        cout<<"*";
    }
    for(int col=0;col<2*row+1;col=col+1){
        cout<<" ";
    }
    for(int col =0;col<n-row;col=col+1){
        cout<<"*";
    }
    cout<<endl;
}


}
