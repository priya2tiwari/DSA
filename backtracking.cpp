#include<iostream>
#include<vector>
using namespace std;


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




//Rat Maze
// void solvemaze(int maze[3][3],int row,int col,int i,int j,vector<vector<bool> visited,vector<string>path,string output){
//     //base case
//     if(i==row-1&&j==col-1){
//         path.push_back(output);
//     }
//     //down(i+1,j)
//     if(isSafe(i+1,j,row,col,maze,visited)){
//         visited[i+1][j]=true;
//         solvemaze(maze,row,col,i+1,j,visited,path,output+'D');
//         //backtrack
//         visited[i+1][j]=false;
//     }

//     //up(i-1,j)
//     if(isSafe(i-1,j,row,col,maze,visited)){
//         visited[i-1][j]=true;
//         solvemaze(maze,row,col,i-1,j,visited,path,output+'U');
//         //backtrack
//         visited[i-1][j]=false;
//     }

//     //left(i,j-1)
//     if(isSafe(i,j-1,row,col,maze,visited)){
//         visited[i][j-1]=true;
//         solvemaze(maze,row,col,i,j-1,visited,path,output+'D');
//         //backtrack
//         visited[i][j-1]=false;
//     }

//     //right(i,j+!)
//     if(isSafe(i,j+1,row,col,maze,visited)){
//         visited[i][j+1]=true;
//         solvemaze(maze,row,col,i,j+1,visited,path,output+'D');
//         //backtrack
//         visited[i][j+1]=false;
//     }
// }
// int main(){
//     int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
//     int row=3;
//     int col=3;
//     vector<vector<bool>> visited(row,vector<bool>(col,false));
//     visited[0][0]=true;
//     vector<string> path;
//     string output=" ";
//     solvemaze(maze,row,col,0,0,visited,path,output);
//     return 0;

// }





//N Queen Problem
//void printsoln(vector<vector<int>> &board,int n){
    
//}
bool isSafe(vector<vector<int> > &board,int row,int col,int n){
    int i= row;
    int j= col;
    //check for row
    while(j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }
    //check for uppr left diagonal
    while(j>=0&&i>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    //check for lower left diagonal
    while(i<n&&j>=0){
        if(board[i][j]==1){
            return false;

        }
        i++;
        j--;
    }

}
void solve(vector<vector<int> > &board,int col,int n){
    //base case
    if(col>=n){
    print_soln(board,n);
    return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n){
            board[row][col]=1;
        }
        //recursion
        solve(board,col+1,n);

        //backtracking
        board[row][col]=0;
    }
}
int main(){
    int n=4;
    vector<vector<int> > board(n,vector<int>(n,0));
    int col=0;
    solve(board,col,n);

    return 0;
}


