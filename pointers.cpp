#include<iostream>
using namespace std;
// int main(){
// //     int a=9;
// //     int b=9;
// //     cout << a << endl;
// //     cout << &a <<endl;
// //     cout << &b <<endl;
//        int a=5;
//        int*ptr=&a;
//        cout<<*ptr<<endl;
//         cout<<ptr<<endl;
     
// }


// int main(){
//         int a=5;
//         int *p = &a;
//         cout<<sizeof(p)<<endl;

//         char ch='b';
//         char *c = &ch;
//         cout<<sizeof(c)<<endl;


//         double d=1.03;
//         double *dtr = &d;
//         cout<<sizeof(d)<<endl;
 
// }

 
 
 //copy pointer
// int main(){
//         int a= 5;
//         int* ptr=&a;
//         int *dusraptr= ptr;
//         cout<<*ptr<<endl;
//         cout<<*dusraptr<<endl;
// }


// int main(){
//         int a=10;
//         int *p =&a;
//         int *q=p;
//         int *r =q;

//         cout<< a << endl;
//         cout<< &a << endl;
//         cout<< p << endl;
//         cout<< &p << endl;
//         cout<< *p << endl;
//         cout<< q << endl;
//          cout<< &q << endl;
//           cout<< *q << endl;
//            cout<< r << endl;
//             cout<< &r << endl;
//              cout<< *r << endl;
//               cout<< (*p + *q + *r) << endl;
//                cout<< (*p)*2 + (*r)*3 << endl;
//                 cout<< (*p/2)-(*q)/2 << endl;

// }



//Pointer in Array
// int main(){
//         int arr[4]={12,14,16,18};
//         // cout<<arr<<endl;
//         // cout<<arr[0]<<endl;
//         // cout<<&arr<<endl;
//         // cout<<&arr[0]<<endl;

//         cout<<*arr<<endl;
//         cout<<*(arr+1)<<endl;
//         cout<<arr[1]<<endl;
//         cout<<*(arr+2)<<endl;
//         cout<<arr[2]<<endl;

//         int i =0;
//         cout<<arr[i]<<endl;
//         cout<<i[arr]<<endl;
// }




//CHAR ARRAY
// int main(){
//         char ch[10]="PRIYA";
//         char* c = ch;
//         cout<<c<<endl;
// }




//double pointer
// int main(){
//         int a =5;
//         int *ptr =&a;
//         int **q = &ptr;
//         cout<<a<<endl;
//         cout<<&a<<endl;
//         cout<<*ptr<<endl;
//         cout<<*q<<endl;
//         cout<<**q<<endl;
// }
// void solve(int **ptr){
//        // ptr = ptr+1;
//         //*ptr = *p+1;
//         **ptr = **ptr+1;
        
// }


// int main(){
//         int a= 5;
//         int *p=&a;
//         int **q =&p;
//         solve(q);
//         cout<<a<<endl;
// }





//reference variable
// int main(){
//         int a =5;
//         int &b = a;
//         cout<<a<<endl;
//         cout<<b<<endl;
//         a++;
//         cout<<a<<endl;
//         cout<<b<<endl;
//}
//imp
int * solve(){
        int a=5;
        int *ans=&a;
        return ans;

}
int main(){
         int* b=solve();
         cout<<b<<endl;
}

