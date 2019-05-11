#include<stdio.h>
#include<memory.h>
#define MAXIN 75
char board[MAXIN + 2][MAXIN + 2]; // Define the rectangular board
int minstep, w, h, to[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};  // Define direction
bool mark[MAXIN + 2][MAXIN + 2]; // Define the marked array

void Search(int now_x, int now_y, int end_x, int end_y, int step, int f)
{
	if(step > minstep) return;  //current route numbers larger than minstep, then return the optimized strategy
	if(now_x == end_x && now_y == end_y)
	{
		// reach the terminal point
		if(minstep > step)  // update the minimal route number
			minstep = step;
		return;
	}
	for(int i = 0; i < 4; i++) //enumerate direction at the next step
	{
		int x = now_x + to[i][0]; // get the new position
		int y = now_y + to[i][1];
		if((x > -1) && (x < w + 2) && (y > -1) && (y < h + 2) && (((board[y][x]==' ') && (mark[y][x]== false)) || ((x==end_x) && (y == end_y) && (board[y][x] == 'X'))))
		{
			mark[y][x] = true;// if the new position is correctly marked
			// if the direction after the previous step is the same as the current position, then keep the step in recurrent search, otherwise set step + 1
			if(f == i)
			{
				Search(x, y, end_x, end_y, step, i);
			} 
			else
			{
				Search(x, y, end_x, end_y, step + 1, i);
			}
			mark[y][x] = false;  // trace back so that the position has never been taken
		}
	}
}

int main()
{
	int Boardnum = 0;
	while(scanf("%d %d", &w, &h)) // read data
	{
		if(w == 0 && h == 0) break;
		Boardnum++;
		printf("Board#%d:\n", Boardnum);
		int i, j;
		for(i = 0; i < MAXIN + 2;i++) 
			board[0][i] = board[i][0] = ' ';
		for(i = 1; i <= h; i++) // read the layout of the rectangular board
		{
			getchar();
			for(j = 1; j <= w; j++)
				board[i][j] = getchar();
		}
		// add one layer of squares outside the rectangular board 
		for(i = 0; i <= w; i++)
			board[h + 1][i + 1] = ' ';
		for(i = 0; i <= h; i++)
			board[i + 1][w + 1] = ' ';
		int begin_x, begin_y, end_x, end_y, count = 0;
		while(scanf("%d %d %d %d", &begin_x, &begin_y, &end_x, &end_y) && begin_x > 0)//read the start point and the end point
		{
			count++;
			minstep = 100000;  // the initializer of minstep is a large value
			memset(mark, false, sizeof(mark)); //recurrent search
			Search(begin_x, begin_y, end_x, end_y, 0, -1);  // output result
			if(minstep < 100000) 
				printf("Pair %d: %d segments.\n", count, minstep);
			else 
				printf("Pair %d: impossible.\n", count);
		}
		printf("\n");
	}
	return 0;
}