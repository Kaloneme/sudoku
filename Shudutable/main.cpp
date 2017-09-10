#include"shudu.h"
#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	//freopen("readin.txt", "r", stdin);
	freopen("sudoku.txt", "w", stdout);
	srand(time(NULL));
	shudu s;
	cin >> s.n;
	int a = (3 + 0) % 9 + 1;
	s.table[1][1] =a +'0';
	s.line[1][a] = 1, s.list[1][a] = 1;
	s.fillNumber(1, 1);
	return 0;
}
