/*
Program Name main.cpp
Date 2024/10/23
*/

#include<iostream>
using namespace std;
/*クラス　Monster */
//class Monster {
//public:
//	コンストラクター
//	Monster() {
//		cout << "コンストラクター生成" << endl;
//	}
//	デストラクター
//	~Monster() {
//		cout << "デストラクター生成" << endl;
//	}
//	メンバー関数
//	void showData() {
//		cout << "Monster Data " << endl;
//	}
//
//};
#include"Monster.h"
void main() {

	Monster::Title();//staticがついているメンバー関数は実体なく関数をコールできる
	Monster m;//1匹目
	m.showData();

	Monster m1;//2匹目
	m1.showData();


}

