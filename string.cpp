#include<iostream>
using namespace std;

// int main(){
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;
    // cout<<"Length: "<<str.length()<<endl;
    // cout<<"Isempty: "<<str.empty()<<endl;
    // str.push_back('A');
    // str.pop_back();
    // cout<< str.substr(0,3)<<endl;
    // cout<<str;
    // string a = "PRIYA";
    // string b = "PRIYA";
    // if(a.compare(b)==0){
    //     cout<<"a b are exact same " << endl;
    // }
    // else{
    //    cout<< "a b are not same" << endl;
    // }
    // string x ="ayz";
    // string y ="xyz";
    // cout<<x.compare(y)<<endl;
    // string sentence= "hello jee kaise ho saare?";
    // string target = "jee";
    // cout<<sentence.find(target)<<endl;
    // string s = "Priya is studying";
    // string word = "Aditya";
    // s.replace(0,5,word);
    // cout<<s<<endl;
    // string str="abcde";
    // cout<<str.erase(3,2);
// }





//remove all adjacent duplicates
// string remove_duplicates(string s){
//     string ans =" ";
//     for(int i=0;i<=s.length();i++){
//         if(ans.length()-1 >= 0 && ans[ans.length()-1] == s[i]){
//             ans.pop_back();

//         }
//         else{
//             ans.push_back(s[i]);
//         }
//     }
//     return ans;
// }
// int main(){
//     string s="abbaca";
//     string ans_string=remove_duplicates(s);
//     cout<<ans_string<<endl;
// }



//remove all occurrances of a substring
// string remove_all_occ(string s,string part){
//     int pos= s.find(part);
//     while(pos != string::npos){
//     s.erase(pos,part.length());
//     pos= s.find(part);
// }
// return s;
// }

// int main(){
//     string s="dabcdabce";
//     string part ="abc";
//     string ans = remove_all_occ(s,part);
//     cout<<ans<<endl;
// }



//valid palindrome
// bool checkpalin(string s,int i,int j){
//     while(i<=j){
//     if(s[i]!=s[j]){
//         return false;
//     }
//     i++;
//     j--;

// }
// return true;
// }
// bool validpalindrome(string s){
//     int i=0;
//     int j=s.length()-1;
//     while(i<=j){
//         if(s[i]!=s[j]){
//             //ya toh i wale ko remove kro ya toh j wale ko remove kro
//             return checkpalin(s,i+1,j)||checkpalin(s,i,j-1);
//         }
//         else{
//             i++;
//             j--;
//         }
        
//     }
//     return true;//zero removal se ans aya hoga
// }

// int main(){
//     string s= "abce";
//     validpalindrome(s);
//     if(validpalindrome(s)){
//         cout<<"yes"<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }
// }




//minimum time difference






//Palindromic substring
int expandAroundIndex(string s,int i,int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int countsubstring(string s){
    int count=0;
    int n = s.length();
    for(int i=0;i<=n;i++){
        //odd
        int oddkaAns= expandAroundIndex(s,i,i);
        count = count+ oddkaAns;
        //even
        int evenkaAns=expandAroundIndex(s,i,i+1);
        count = count+evenkaAns;
    }
    return count;
}
int main(){
    string s= "noon";
    int ans = countsubstring(s);
    cout<<"the ans is"<<ans<<endl;
}




