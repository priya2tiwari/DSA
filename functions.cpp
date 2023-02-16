#include<iostream>
using namespace std;
// void printnum(int num){
//         cout<< num<<endl;
//     }
// int main(){
//     int a=5;
//     printnum(a);
//}



// Add two nums
    // int add(int x, int y){
    //     int result= x+y;
    //     return result;
    // }
    // int main(){
    //     int a=4;
    //     int b=5;
    //     int sum = add(a,b);
    //     cout<< sum<<endl;
    //     return 0;
    // }




    // max of 3 nums
//     int findmax(int x,int y, int z){
//         if(x>y&&x>z){
//             return x;
//         }
//         else if(y>x&&y>z){
//             return y;
//         }
//         else return z;

//     }

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int maxnum= findmax(a,b,c);
//     cout<< maxnum<<endl;
// }





//counting 1 to n
// void printcounting(int n){
//     for(int i=1;i<n;i++){
//         cout<<i<<" ";

//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<" Enter n: "<<endl;
//     cin>>n;
//     printcounting(n);
// }





//student grade problem
// char getGrade(int marks){
//     if(marks>=90){
//         return 'A';
//     }
//     else if (marks>=80){
//         return 'B';
//     }
//     else{
//         return 'D';
//     }
// }
// int main(){
//     int marks;
//     cout<<"Enter the marks: ";
//     cin>>marks;
//     char finalgrade = getGrade(marks);
//     cout<<finalgrade<<endl;
//     return 0;

// }




//sum of even num upto N
// int getevenSum(int n){
//     int sum=0;
//     for(int i=2;i<=n;i=i+2){
//         sum=sum+i;
//     }
//     return sum;
// }
// int main(){
// int n;
// cout <<"Enter n: ";
// cin >>n;  
// int ans = getevenSum(n);
// cout<<ans<<endl;
// return 0;
// }




//area of circle
// int getArea(int r){
//     int area = 2*3.14*r;
//     return area;
// }
// int main(){
//     int r;
//     cout<<"Enter the radius: ";
//     cin>>r;
//    int area = getArea(r);
//    cout<<"the area is: "<<area<<endl;
// }





//num is even or odd
// void getnum(int num){
//     if(num%2==0){
//         cout<< "even";
//     }
//     else{
//         cout<<"odd";
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     getnum(num);
//     return 0;
// }




//factorial
// int getfact(int n){
//     int fact=1;
//      for(int i=n;i>=1;i--){
//          fact=fact*i;

//      }
//      return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter the num: ";
//     cin>>n;
//     int ans = getfact(n);
//     cout<<"the ans is: "<<ans<<endl;
//     return 0;

// }





//prime or not
//  bool checkPrime(int num){
//     for(int i=2;i<num;i++){
//          if(num%i==0){
//             return false;
//         }  
//     }
//    return true;
//  }
//     int main(){
//     int num;
//     cin>>num;
//     bool isprime= checkPrime(num);
//     if(isprime==true){
//         cout<<"Prime"<<endl;
//     }
//     else{
//         cout<<"Not Prime"<<endl;
//     }
//      return 0;
// }






//prime from 1 to n
bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        bool printprime=checkPrime(i);
        if(printprime){
            cout<<i<<"  :is prime num"<<endl;
        }
    }
    
  
  
}


 
    
 
 

