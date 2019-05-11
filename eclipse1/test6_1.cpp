#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int R, C; // 行列数
int rooms[60][60];
int color[60][60]; // 房间是否染色过的标记
int maxRoomArea = 0, roomNum = 0;
int roomArea;

// 用递归方法解决
/*
void Dfs(int i , int k)
{
	if(color[i][k])
		return;
	++roomArea;
	color[i][k] = roomNum;
	if((rooms[i][k] & 1) == 0) 
		Dfs(i, k - 1);  // 向西走
	if((rooms[i][k] & 2) == 0)
		Dfs(i - 1, k);  // 向北
	if((rooms[i][k] & 4) == 0)
		Dfs(i, k + 1); // 向东
	if((rooms[i][k] & 8) == 0)
		Dfs(i + 1, k); // 向南
}
*/


void Dfs(int r,int c) { //不用递归，用栈解决，程序其他部分不变
struct Room { int r,c; Room(int rr,int cc):r(rr),c(cc) { } };
stack<Room> stk;
stk.push(Room(r,c));
while ( !stk.empty() ) {
Room rm = stk.top();
int i = rm.r; int k = rm.c;
if( color[i][k]) stk.pop();
else {
++ roomArea;
color [i][k] = roomNum;
if( (rooms[i][k] & 1) == 0 ) stk.push(Room(i,k-1)); //向西走
if( (rooms[i][k] & 2) == 0 ) stk.push(Room(i-1,k)); //向北
if( (rooms[i][k] & 4) == 0 ) stk.push(Room(i,k+1)); //向东
if( (rooms[i][k] & 8) == 0 ) stk.push(Room(i+1,k)); //向南
}
}
}



// 用栈解决，程序其他部分不变
/*
void Dfs(int r, int c)
{
	struct Room
	{
		int r, c;
		Room(int rr, int cc):r(rr),c(cc){}
	}
	stack<Room>stk;
	stk.push(Room(r,c));
	while(!stk.empty())
	{
		Room rm = stk.top();
		int i = rm.r; 
		int k = rm.c;
		if(color[i][k])
			stk.pop();
		else
		{
			++roomArea;
			color[i][k] = roomNum;
			if((rooms[i][k] & 1) == 0)
				stk.push(Room(i, k - 1)); // 向西走
			if((rooms[i][k] & 2) == 0)
				stk.push(Room(i - 1, k)); // 向北走
			if((rooms[i][k] & 4) == 0)
				stk.push(Room(i, k + 1)); //向东走
			if((rooms[i][k] & 8) == 0)
				stk.push(Room(i + 1, k)); // 向南走
		}
	}
}
*/
int main()
{
	cin >> R >> C;
	for(int i = 1; i <= R; ++i)
	{
		for(int k = 1; k <= C; ++k)
		{
			cin >> rooms[i][k];
		}
	}
	memset(color, 0, sizeof(color));
	for(int i = 1; i <= R; ++i)
	{
		for(int k = 1; k <= C; ++k)
		{
			if(!color[i][k])
			{
				++roomNum;
				roomArea = 0;
				Dfs(i,k);
				maxRoomArea = max(roomArea, maxRoomArea);
			}
		}
	}
	cout << roomNum << endl;
	cout << maxRoomArea << endl;
}