/*
Program Name main.cpp
Date 2024/10/23
*/

#include<iostream>
using namespace std;
/*�N���X�@Monster */
//class Monster {
//public:
//	�R���X�g���N�^�[
//	Monster() {
//		cout << "�R���X�g���N�^�[����" << endl;
//	}
//	�f�X�g���N�^�[
//	~Monster() {
//		cout << "�f�X�g���N�^�[����" << endl;
//	}
//	�����o�[�֐�
//	void showData() {
//		cout << "Monster Data " << endl;
//	}
//
//};
#include"Monster.h"
void main() {

	Monster::Title();//static�����Ă��郁���o�[�֐��͎��̂Ȃ��֐����R�[���ł���
	Monster m;//1�C��
	m.showData();

	Monster m1;//2�C��
	m1.showData();


}

