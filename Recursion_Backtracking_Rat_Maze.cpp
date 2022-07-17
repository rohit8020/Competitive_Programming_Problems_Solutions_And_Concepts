#include<bits/stdc++.h>
using namespace std;

bool ratMaze(char maze[][10],int sol[][10],int i,int j,int m,int n){

    if(i==m&&j==n){
        sol[m][n]=1;
        //print the sol 
            for (int i = 0; i <=m; i++)
            {
                for (int j = 0; j <=n; j++)
                {
                    cout<<sol[i][j]<<" ";
                }
                cout<<endl;  
            }
            cout<<endl;

            return true;
    }
    //rat should stay inside the maze
    if(i>m||j>n){
        return false;
    }

    if(maze[i][j]=='x'){
        return false;
    }

    //assume that solution exists through the current cell
    sol[i][j]=1;
    bool right=ratMaze(maze,sol,i,j+1,m,n);
    bool down=ratMaze(maze,sol,i+1,j,m,n);

    //backtracking
    sol[i][j]=0;

    if(right||down){
        return true;
    }
    return false;
}

int main()
{
    char maze[10][10]={
        "0000",
        "00x0",
        "000x",
        "0x00"
    };

    int sol[10][10]={0};
    ratMaze(maze,sol,0,0,3,3);
    return 0;
}