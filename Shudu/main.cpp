#include"shudu.h"
#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;
int main(int argc, char *argv[])
{
	//freopen("readin.txt", "r", stdin);
	freopen("sudoku.txt", "w", stdout);
	srand(time(NULL));
	shudu s;
	if (sscanf(argv[2], "%d", &s.n) == 0)
	{
		cout << "请输入一个数字：" << endl;
		return 0;
	}

	int a = (3 + 0) % 9 + 1;
	s.table[1][1] =a +'0';
	s.line[1][a] = 1, s.list[1][a] = 1;
	s.fillNumber(1, 1);
	return 0;
}
