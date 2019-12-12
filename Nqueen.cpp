/* C/C++ program to solve N Queen Problem using 
backtracking */
#include<bits/stdc++.h> 
#define N 4
using namespace std;
/* A utility function to print solution */
void printSolution(int board[N][N]) 
{ 
	for (int i = 0; i < N; i++) 
	{ 
		for (int j = 0; j < N; j++) 
			printf(" %d ", board[i][j]); 
		printf("\n"); 
	} 
	printf("\n"); 
} 

/* A utility function to check if a queen can 
be placed on board[row][col]. Note that this 
function is called when "col" queens are 
already placed in columns from 0 to col -1. 
So we need to check only left side for 
attacking queens */
bool isSafe(int board[N][N], int row, int col) {
	int i,j;
	for(i=0;i<col;i++) if(board[row][i]==1) return false;
	for(i=row,j=col; i>=0,j>=0;i--,j--){
		cout<< board[i][j];
		if(board[i][j]==1) return false;
	}	
	for(i=row, j=col;i<N,j>=0;i++,j--){
		if(board[i][j]==1) return false;
	}
	return true;
}

void solveNQUtil(int board[N][N], int col) {
	if(col==N){
		printSolution(board);
		return;
	}
	for(int i=0;i<N;i++){
		if(isSafe(board,i,col)){
			board[i][col]=1;
			solveNQUtil(board, col+1);
			board[i][col]=0;
		}
	}
	return ;
}

void solveNQ() 
{ 
	int board[N][N]; 
	memset(board, 0, sizeof(board)); 
	solveNQUtil(board,0);
	return ; 
} 

// driver program to test above function 
int main() 
{ 
	solveNQ(); 
	return 0; 
} 
