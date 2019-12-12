// C program for Knight Tour problem 
#include<stdio.h> 
#define N 8 

int solveKTUtil(int x, int y, int movei, int sol[N][N], 
				int xMove[], int yMove[]); 

/* A utility function to check if i,j are valid indexes 
for N*N chessboard */
bool isSafe(int x, int y, int sol[N][N]) 
{ 
	return ( x >= 0 && x < N && y >= 0 && 
			y < N && sol[x][y] == -1); 
} 

/* A utility function to print solution matrix sol[N][N] */
void printSolution(int sol[N][N]) 
{ 
	for (int x = 0; x < N; x++) 
	{ 
		for (int y = 0; y < N; y++) 
			printf(" %2d ", sol[x][y]); 
		printf("\n"); 
	} 
} 

bool solveKT() 
{ 
	int sol[N][N]; 

	/* Initialization of solution matrix */
	for (int x = 0; x < N; x++) 
		for (int y = 0; y < N; y++) 
			sol[x][y] = -1; 

	/* xMove[] and yMove[] define next move of Knight. 
	xMove[] is for next value of x coordinate 
	yMove[] is for next value of y coordinate */
	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
	int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 

	// Since the Knight is initially at the first block 
	sol[0][0] = 0; 

	/* Start from 0,0 and explore all tours using 
	solveKTUtil() */
	if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == false) 
	{ 
		printf("Solution does not exist"); 
		return false; 
	} 
	else
		printSolution(sol); 

	return true; 
} 

/* A recursive utility function to solve Knight Tour 
problem */
int solveKTUtil(int x, int y, int movei, int sol[N][N], 
				int xMove[N], int yMove[N]) 
{ 
	int k, newi,newj;
	if(movei==N*N) return true;
	for(k=0;k<8;k++){
		newi= x+ xmove[k];
		newj=y+ ymove[k];
		if(isSafe(newi,newj)){
			sol[newi][newj]=1;
			if(solveKTUtil(newi,newj,movei+1,sol,xMove, yMove)==true)
				return true;
			else sol[newi][newj]=-1;
		}
	}
} 

/* Driver program to test above functions */
int main(){
	solveKT();
	return 0;
}