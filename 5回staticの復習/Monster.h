#pragma once
/*
プログラム名　Monster.h

*/
#include<iostream>
using namespace std;
class Monster {
private:
	static int num;
public:
	static void Title();
	Monster();//コンストラクター
	~Monster();//デストラクター
	void showData();//メンバー関数

};