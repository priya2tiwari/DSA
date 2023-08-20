#include<iostream>
using namespace std;


//LENGTH OF STRING
// int getlength(char name[]){
//     int length =0;
//     int i =0;
//     while(name[i] !='\0'){
//         length++;
//         i++;

//     }
//     return length;
// }

// int main(){
//     char name[100];
//     cin>> name;
//     cout<<"length is: "<<getlength(name)<<endl;
//     cout<<"length is: "<<strlen(name)<<endl;
//     return 0;
// }





//BASICS
// int main(){
//     // char name[100];
//     // cin>> name;
//     // for(int i=0;i<5;i++){
//     //     cout<<"Index: "<< i << "value: "<< name[i]<<endl;

//     // }
//     // int value = (int)name[5];
//     // cout<<"the value is"<<value<<endl;

//     // char name[200];
//     // //cin>>name;
//     // cin.getline(name,50);
//     // cout<<"the full name is: "<<name<<endl;


//     // char name[100];
//     // cin>> name[2];
//     // cin>> name[49];
//     // cin>>name;
//     // cin.getline(name,50);
//     // cout<<name[2];
//     // cout<<name[49];
//     // cout<<name;


// }




//REVERSE A STRING
// void reverseCharArray(char name[]){
//     int i=0;
//     int n = getlength(name);
//     int j= n-1;
//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;

//     }

// }
// int main(){
//     char name[100];
//     cin>>name;
//     cout<<"initially:  "<<name<<endl;
//     reverseCharArray(name);
//     cout<<"afterwards:  "<<name<<endl;
//     return 0;
// }



//REPLACE SPACES
// void replaceSpaces(char sentence[]){
//     int i=0;
//     int n= strlen(sentence);
//     for(int i=0;i<n;i++){
//         if(sentence[i]==' '){
//             sentence[i] = '@';
//         }
//     }

// }
// int main(){
//     char sentence[200];
//     cin.getline(sentence,200);
//     cout<<"initially: "<<sentence<<endl;
//     replaceSpaces(sentence);
//     cout<<"afterwards: "<<sentence<<endl;
//     return 0;

// }



// int main(){
//     char arr[100];
//     cin >> arr[2];
//     cin>>arr[49];
//     cin.getline(arr,100);

// }




//PALINDROME
// bool checkPalindrome(char name[]){
//     int i=0;
//     int n = strlen(name);
//     int j=n-1;
//     while(i<=j){
//         if(name[i]==name[j]){
//             i++;
//             j--;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     char name[50];
//     cin.getline(name,50);
//     checkPalindrome(name);
// }




//UPPER/LOWER CASE 
// void convert_to_lower(char arr[]){
//     int n= strlen(arr);
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i]+'a'-'A';
//     }
// }
// void convert_to_upper(char arr[]){
//     int n= strlen(arr);
//     for(int i=0;i<n;i++){
//         arr[i]= arr[i]-'a'+'A';

//     }
// }
// int main(){
//     char arr[100]="priya";
//     convert_to_upper(arr);
//     cout<<arr<<endl;
//     convert_to_lower(arr);
//     cout<<arr<<endl;
// }



