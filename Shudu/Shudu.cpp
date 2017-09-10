#include"shudu.h"
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
shudu::shudu()
{
	memset(table, '0', sizeof(table));
	memset(line, 0, sizeof(line));
	memset(list, 0, sizeof(list));
	memset(palace, 0, sizeof(palace));
	
	flag = false;
	sum = 0;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int row = (i - 1) / 3;
			int cow = (j - 1) / 3;
			seat[i][j] = row + cow * 3 + 1;     //标记宫 
		}
	}
	
}

shudu::~shudu()
{
}

void shudu::fillNumber(int x, int y)
{
	if (flag)return;
	if (x < 9 || y < 9)
	{
		int a = x;
		int b = y + 1;
		if (b>9)
		{
			b = 1;
			a++;
		}
		int p = seat[a][b];        //p来表示现在所属的宫
		int them = rand() % 9 + 1;   //产生随机数 
		int k = them;
		while (1)
		{
			if (!line[a][k] && !list[b][k] && !palace[p][k])          //若没出现过则都为0 
			{
				table[a][b] = k + '0' , line[a][k] = 1, list[b][k] = 1, palace[p][k] = 1;
				fillNumber(a, b);
				table[a][b] = '0' , line[a][k] = 0, list[b][k] = 0, palace[p][k] = 0;
			}
			k++;
			if (k == 10)k = 1;
			if (them == k)break;	           //退回 
		}
		
	}
	else
	{
		sum++;
		int i, j;
		for (i = 1; i <= 9; ++i) {
			for (j = 1; j <= 9; ++j) {
				putchar(table[i][j]);
				if (j < 9) putchar(' ');
			}
			putchar('\n');
		}
		if (sum!= n)  putchar('\n');
		if (sum == n)flag = true;              //输出n个数独表后结束 
	}
	
}
