#include<bits/stdc++.h>
using namespace std;

bool isSafeToPlaceQueen(int board[][10], int i, int j,int n)
{

    //check the current column
    for (int row = 0; row < i; row++)
    {
        if(board[row][j]==1){
            return false;
        }
    }

    //check the left diagonal
    int x=i;
    int y=j;
    while (x>=0 && y>=0)
    {
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    
    //check the right diagonal
    x=i;
    y=j;
    while (x>=0 && y<=(n-1))
    {
        if (board[x][y]==1)
        {
            return false;
        }
        x--;
        y++;
    }
    
    return true;
}


bool solveNqueen(int board[][10],int i,int n)
{
    if(i==n){
        //print the board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;  
        }
        return true;
    }

    //recursive search
    //try to place the queen int current row
    for (int j = 0; j < n; j++)
    {
        //now i have to check that the i,j is the right position to place the queen or not
        if(isSafeToPlaceQueen(board,i,j,n)){
            board[i][j] =1;

            bool queenRakhSakteHainKya=solveNqueen(board,i+1,n);
            if(queenRakhSakteHainKya){
                return true;
            }
            //if queen is not on placeable on i,j
            board[i][j]=0;//backtracking 

        }
    }
    //you have tried all the position but could not place the queen
    return false;
}

int main()
{
    int board[10][10]={0};
    int n;
    cin >> n;
    cout<<(solveNqueen(board,0,n))?("Placed!"):("Not placed!");
    return 0;
}