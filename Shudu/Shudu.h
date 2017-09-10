#pragma once
class shudu {
public:
	shudu();
	~shudu();
	char table[11][11];        //数独表 
	int palace[11][11];      //宫标记 
	int line[11][11];       //行标记 
	int list[11][11];      //列标记
	int  seat[11][11];   //该位置所属的宫 
	int sum, n;
	bool flag;
	void fillNumber(int x, int y);
};

