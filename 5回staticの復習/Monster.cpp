/*
プログラム名　Monster.cpp
*/
#include"Monster.h"//モンスタークラスの変数などの定義部分

int Monster::num = 0;//static変数の初期化


void Monster::Title()
{
	cout << "モンスター一覧"<< endl;
}

//コンストラクター
Monster::Monster() {
	cout << "コンストラクター生成" << endl;
	num++;//オブジェクトの数をカウント
}
//デストラクター
Monster::~Monster() {
	cout << "デストラクター生成" << endl;
}
//メンバー関数
void Monster::showData() {
	cout << "Monster Data " << endl;
	cout << "モンスターが" << num << "匹できた"<< endl;
}

