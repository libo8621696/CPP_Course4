#include<cstring>
#include<iostream>
using namespace std;
struct Block
{
	int color;
	int len;
};

struct Block segment[200];
int score[200][200][200];  // 存放计算结果，避免重复计算
int click_box(int start, int end, int extra_len)
{
	int i, result, temp;
	if(score[start][end][extra_len] > 0)
		return score[start][end][extra_len];
	result = segment[end].len + extra_len;
	result = result * result;  // end和extra_len一起消去的得分
	if(start == end)
	{
		score[start][end][extra_len] = result;
		return score[start][end][extra_len];
	}
	result += click_box(start, end - 1, 0);
	i = end - 1;
	for(i = end - 1; i >= start; i--)
	{
		if(segment[i].color != segment[end].color)
			continue;
		temp = click_box(start, i, segment[end].len + extra_len, click_box(i + 1, end - 1, 0);)
	}
}