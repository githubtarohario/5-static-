/*
�v���O�������@Monster.cpp
*/
#include"Monster.h"//�����X�^�[�N���X�̕ϐ��Ȃǂ̒�`����

int Monster::num = 0;//static�ϐ��̏�����


void Monster::Title()
{
	cout << "�����X�^�[�ꗗ"<< endl;
}

//�R���X�g���N�^�[
Monster::Monster() {
	cout << "�R���X�g���N�^�[����" << endl;
	num++;//�I�u�W�F�N�g�̐����J�E���g
}
//�f�X�g���N�^�[
Monster::~Monster() {
	cout << "�f�X�g���N�^�[����" << endl;
}
//�����o�[�֐�
void Monster::showData() {
	cout << "Monster Data " << endl;
	cout << "�����X�^�[��" << num << "�C�ł���"<< endl;
}

