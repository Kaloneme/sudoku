#pragma once
class shudu {
public:
	shudu();
	~shudu();
	char table[11][11];        //������ 
	int palace[11][11];      //����� 
	int line[11][11];       //�б�� 
	int list[11][11];      //�б��
	int  seat[11][11];   //��λ�������Ĺ� 
	int sum, n;
	bool flag;
	void fillNumber(int x, int y);
};

