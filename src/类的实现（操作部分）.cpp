#include "stdafx.h"
#include<iostream>
#include< graphics.h>
#include<string>
#include<conio.h>
#include <stdio.h>
#include"��Ķ���.h"
using namespace std;

/*
˵����
һ��
���ļ�Ϊ�������йز����ĺ���ʵ���ļ���
����
1.����������Ķ����ļ�167�� ���ʵ�֣��������֣��ļ�757�� ���ʵ�֣��ı����֣��ļ�227�� �������ļ�49��
�ܴ���������167+757+227+49=1200��
��Ч����������������-������Ŀ�Ŀ�����-���ַ�������-���������1050��
2.����˵�����ֲ������ڴ������ļ�������
*/

int level = 0;//�����������
int maps[10][27][22] = {
{   {0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//1
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,0},//2

	{0,1,1,1,1,1,1,0,2, 4,21,3,3,3,3,3,3,3,3,3,  2},//3
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,3,  2},//4
	{0,1,1,1,1,1,1,0,2,15,3,3,6,3,2,17,20,3,2,3,  2},//5
	{0,1,1,1,1,1,1,0,2, 3,8,3,2,3,2,16,15,3,2,3,  2},//6
	{0,1,1,1,1,1,1,0,2, 2,6,2,2,3,2,2,2,6,2,3,  2},//7
	{0,1,1,1,1,1,1,0,2, 20,3,3,2,3,6,3,9,3,2,3, 2},//8
	{0,1,1,1,1,1,1,0,2, 3,8,3,2,3,2,2,2,2,2,3,  2},//9
	{0,0,0,0,0,0,0,0,2, 2,6,2,2,3,3,3,3,3,3,3,  2},//10
	{0,1,1,1,1,1,1,0,2, 3,3,3,2,2,6,2,2,2,6,2,  2},//11
	{0,1,1,1,1,1,1,0,2, 15,3,20,2,20,3,20,2,3,3,3,2},//12
	{0,1,1,1,1,1,1,0,2, 15,3,20,2,20,100,20,2,3,16,3,2},//13 

	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//14

	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//15
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//16
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//17
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//18
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//19
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//20
	{0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//21
//   1 2 3 4 5 6 7 8 9  1 2 3 4 5 6 7 8 9 10 11 12 13
},//��һ���ͼ����
{   {0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//1
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,0},//2

	{0,1,1,1,1,1,1,0,2, 5,3,7,3,3,    3,3,3,3,3,3,  2},//3
	{0,1,1,1,1,1,1,0,2, 100,3,2,2,2,    2,3,2,2,2,2,  2},//4
	{0,1,1,1,1,1,1,0,2, 3,2,2,2,2,    2,3,2,2,2,2,  2},//5
	{0,1,1,1,1,1,1,0,2, 3,2,20,20,2,  3,3,3,2,3,40,  2},//6
	{0,1,1,1,1,1,1,0,2, 3,2,20,3,25,   3,3,3,25,3,3,  2},//7
	{0,1,1,1,1,1,1,0,2, 3,2,2,2,2,    3,3,3,2,2,2, 2},//8
	{0,1,1,1,1,1,1,0,2, 3,2,8,3,2,    3,3,3,2,2,8,  2},//9
	{0,0,0,0,0,0,0,0,2, 3,2,3,3,25,    3,3,3,25,3,3,  2},//10
	{0,1,1,1,1,1,1,0,2, 3,2,2,2,2,     3,3,3,2,2,2,  2},//11
	{0,1,1,1,1,1,1,0,2, 3,2,16,16,2,  3,3,3,2,3,3,  2},//12
	{0,1,1,1,1,1,1,0,2, 4,2,16,3,25,   3,3,3,25,3,3,  2},//13  

	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//14 

	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//15
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//16
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//17
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//18
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//19
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//20
	{0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//21
//   1 2 3 4 5 6 7 8 9  1 2 3 4 5 6 7 8 9 10 11 12 13
},//�ڶ����ͼ����
{   {0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//1
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,0},//2

	{0,1,1,1,1,1,1,0,2, 20,50,2,20,16,    20,2,3,2,3,15,  2},//3
	{0,1,1,1,1,1,1,0,2, 3,15,2,16,20,    16,2,3,6,3,3,  2},//4
	{0,1,1,1,1,1,1,0,2, 9,3,2,20,21,    20,2,3,2,2,2,  2},//5
	{0,1,1,1,1,1,1,0,2, 6,2,2,2,3,  2,2,3,2,3,41,  2},//6
	{0,1,1,1,1,1,1,0,2, 3,3,3,3,3,   3,3,3,3,3,3,  2},//7
	{0,1,1,1,1,1,1,0,2, 6,2,2,3,3,    3,2,3,2,2,2, 2},//8
	{0,1,1,1,1,1,1,0,2, 8,3,2,2,3,    2,2,3,2,50,15,  2},//9
	{0,0,0,0,0,0,0,0,2, 3,20,2,3,3,    3,2,3,6,9,20,  2},//10
	{0,1,1,1,1,1,1,0,2, 15,17,2,3,3,    3,2,3,2,2,2,  2},//11
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,3,  2,2,3,2,3,3,  2},//12
	{0,1,1,1,1,1,1,0,2, 5,100,3,3,3,   3,2,3,6,3,4,  2},//13  

	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//14 ��Ϸ������ 13*13

	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//15
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//16
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//17
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//18
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//19
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//20
	{0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//21
//   1 2 3 4 5 6 7 8 9  1 2 3 4 5 6 7 8 9 10 11 12 13
},//�������ͼ����
{   {0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//1
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,0},//2

	{0,1,1,1,1,1,1,0,2, 3,21,3,2,15,    16,15,2,3,42,3,  2},//3
	{0,1,1,1,1,1,1,0,2, 15,3,20,2,16,    15,16,2,20,3,16,  2},//4
	{0,1,1,1,1,1,1,0,2, 3,3,3,2,18,    17,18,2,3,8,3,  2},//5
	{0,1,1,1,1,1,1,0,2, 2,6,2,2,2,    7,2,2,2,6,2,  2},//6
	{0,1,1,1,1,1,1,0,2, 3,9,3,6,3,    3,3,3,8,3,3,  2},//7
	{0,1,1,1,1,1,1,0,2, 3,3,3,2,2,    2,2,2,2,2,2, 2},//8
	{0,1,1,1,1,1,1,0,2, 3,3,3,3,3,    3,3,3,3,3,3,  2},//9
	{0,0,0,0,0,0,0,0,2, 6,2,2,6,2,    2,2,6,2,2,6,  2},//10
	{0,1,1,1,1,1,1,0,2, 3,2,3,3,3,    2,3,9,3,2,3,  2},//11
	{0,1,1,1,1,1,1,0,2, 3,2,3,3,20,   2,17,3,15,2,100,  2},//12
	{0,1,1,1,1,1,1,0,2, 4,2,20,3,20,   2,3,3,3,2,5,  2},//13  

	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//14 

	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//15
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//16
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//17
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//18
	{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//19
	{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//20
	{0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//21
//   1 2 3 4 5 6 7 8 9  1 2 3 4 5 6 7 8 9 10 11 12 13
},//���Ĳ��ͼ����
{ {0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//1
		{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,0},//2

		{0,1,1,1,1,1,1,0,2, 18,2,3,31,6,    3,2,3,3,6,3,  2},//3
		{0,1,1,1,1,1,1,0,2, 18,2,3,3,2,    20,2,30,30,2,31,  2},//4
		{0,1,1,1,1,1,1,0,2, 18,6,3,3,2,    3,2,20,20,2,3,  2},//5
		{0,1,1,1,1,1,1,0,2, 2,2,2,6,2,    32,2,20,20,2,3,  2},//6
		{0,1,1,1,1,1,1,0,2, 20,3,9,3,2,    3,2,2,2,2,3,  2},//7
		{0,1,1,1,1,1,1,0,2, 20,3,9,3,2,    3,30,3,3,3,3, 2},//8
		{0,1,1,1,1,1,1,0,2, 2,8,2,2,2,    3,2,2,2,2,31,  2},//9
		{0,0,0,0,0,0,0,0,2, 3,3,3,3,2,    31,2,3,3,3,3,  2},//10
		{0,1,1,1,1,1,1,0,2, 18,20,15,88,2,    3,2,20,2,2,2,  2},//11
		{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,   3,2,3,2,3,3,  2},//12
		{0,1,1,1,1,1,1,0,2, 5,100,3,3,3,   3,2,3,6,33,50,  2},//13 

		{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//14 

		{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//15
		{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//16
		{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//17
		{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//18
		{0,1,1,1,1,1,1,0,2, 1,1,1,1,1,1,1,1,1,1,1,1,2},//19
		{0,1,1,1,1,1,1,0,2, 2,2,2,2,2,2,2,2,2,2,2,2,2},//20
		{0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0},//21
	//   1 2 3 4 5 6 7 8 9  1 2 3 4 5 6 7 8 9 10 11 12 13
	},//������ͼ����
};

Player::Player() {
	HP = 999;
	MP = 99;
	defence = 800;
	attack = 800;
	yellowkey = 0;
	bluekey = 0;
	bluewater = 0;
	redwater = 0;
	experience = 0;
	bluestone = 0;
	redstone = 0;
	flag = 0;
	sword = 0;
	Name = "��С��";
}//ʵ��������Ĭ�Ϲ��캯��

void Player::setname() {
	cout << "����������ǳƣ�" << endl;
	cin >> Name;
	cout << "���������ѧУ��" << endl;
	cin >> School;
}//ʵ�������������������ѧУ����

string Player::showname() {
	return Name;
}//ʵ�����������ʾ��������

inline void Player::setplayer1() {
	HP = 9999;
	MP = 9999;
	defence = 80000;
	attack = 80000;
	money = 0;
	yellowkey = 1000;
	bluekey = 1000;
	bluewater = 0;
	redwater = 0;
	experience = 0;
	bluestone = 0;
	redstone = 0;
	sword = 0;
}//ʵ�����������������Һ���

int Player::showexp() {
	return experience;
};//ʵ�����������ʾ���麯��

void Player::moveplayer(int row, int col, int x, int y) {
	int con = 0;//��������״̬����
	if (x == -1 && y == 0)
		con = 100;
	if (x == 1 && y == 0)
		con = 101;
	if (x == 0 && y == 1)
		con = 102;
	if (x == 0 && y == -1)
		con = 103;//�����ж��ֱ��ɫ�����������ϵ�����

	switch (maps[level][row + x][col + y])
	{
	case 2://�����߽�
		maps[level][row][col] = con;
		break;
	case 3://����·��
	case 25://����ħ����
		maps[level][row + x][col + y] = con;
		maps[level][row][col] = 3;
		break;
	case 4://�����Ͻ���
		level++;
		break;
	case 5://�����½���
		level--;
		break;
	case 6://������֮��
		if (yellowkey > 0) {
		outtextxy(352, 480, "���Ƿ�ѡ������֮�ţ�");
		outtextxy(352, 512, "���¡�Y����ʾ���п��š�");//�ж��Ƿ�����֮�ţ���ֹ��
		switch (_getch()) {
		case 'Y':
		case 'y':
			yellowkey--;
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			break;
		default:
			break;
		}
	}
		else{
			outtextxy(362, 480, "С������û����֮Կ��");
			maps[level][row][col] = con;
			_getch();
		}
		break;
	case 7://����ˮ֮��
		if (bluekey > 0) {
			outtextxy(352, 480, "���Ƿ�ѡ����ˮ֮�ţ�");
			outtextxy(352, 512, "���¡�Y����ʾ���п��š�");
			switch (_getch()) {
			case 'Y':
			case 'y':
				bluekey--;
				maps[level][row + x][col + y] = con;
				maps[level][row][col] = 3;
				break;
			default:
				break;
			}
		}
		else {
			outtextxy(362, 480, "С������û��ˮ֮Կ��");
			maps[level][row][col] = con;
		}
		break;


	case 8://�������ù���
		setMonster(200, 200, 50, 50, skeleton);//����һ�����ù���
		if (defence >= 200 && attack >= 200 && MP > 50 && HP > 300) {
			skeleton.Mshowcon1();
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			experience += 1;
			HP = HP-299 ;
			MP = MP - 50;
			attack -= 200;
			defence -= 200;
			break;
		}
		else {
			skeleton.Mshowcon2();
			maps[level][row][col] = con;
		}
		break;
	case 9://�����������
		setMonster(400, 400, 50, 50, ghost);//����һ���������
		if (defence >= 200 && attack >= 200 && MP > 50 && HP > 300) {
			ghost.Mshowcon1();
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			experience++;
			HP = HP - 299;
			MP = MP - 50;
			attack -= 200;
			defence -= 200;
			break;
		}
		else {
			ghost.Mshowcon2();
			maps[level][row][col] = con;
		}
		break;
	case 15://������ɫҩ��
		maps[level][row + x][col + y] = con;
		redwater = redwater + 1;
		maps[level][row][col] = 3;
		break;
	case 16://������ɫҩ��
		maps[level][row + x][col + y] = con;
		bluewater = bluewater + 1;
		maps[level][row][col] = 3;
		break;
	case 17://������ɫ��ʯ
		maps[level][row + x][col + y] = con;
		redstone = redstone + 1;
		maps[level][row][col] = 3;
		break;
	case 18://������ɫ��ʯ
		maps[level][row + x][col + y] = con;
		bluestone = bluestone + 1;
		maps[level][row][col] = 3;
		break;
	case 20://������ɫԿ��
		maps[level][row + x][col + y] = con;
		yellowkey = yellowkey + 1;
		maps[level][row][col] = 3;
		break;

	case 21://������ɫԿ��
		maps[level][row + x][col + y] = con;
		bluekey = bluekey + 1;
		maps[level][row][col] = 3;
		break;

	case 30://������ɫ���
		setMonster(150, 150, 50, 50, whiteball);//����һ���������
		if (defence >= 200 && attack >= 200 && MP > 50 && HP > 300) {
			whiteball.Mshowcon1();
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			experience++;
			HP = HP - 299;
			MP = MP - 50;
			attack -= 200;
			defence -= 200;
			break;
		}
		else {
			whiteball.Mshowcon2();
			maps[level][row][col] = con;
		}
		break;
	case 31://������ɫ���
		setMonster(150, 150, 50, 50, redball);//����һ���������
		if (defence >= 200 && attack >= 200 && MP > 50 && HP > 300) {
			redball.Mshowcon1();
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			experience++;
			HP = HP - 299;
			MP = MP - 50;
			attack -= 200;
			defence -= 200;
			break;
		}
		else {
			redball.Mshowcon2();
			maps[level][row][col] = con;
		}
		break;
	case 32://����������BOSS
		setMonster(150, 150, 50, 50, bat);//����һ��������
		if (defence >= 200 && attack >= 200 && MP > 200 && HP > 300) {
			bat.Mshowcon1();
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			experience++;
			HP = HP - 299;
			MP = MP - 50;
			attack -= 200;
			defence -= 200;
			break;
		}
		else {
			bat.Mshowcon2();
			maps[level][row][col] = con;
		}
		break;
	case 33://�������BOSS
		setMonster(150, 150, 50, 50, penguin);//����һ�����
		if (defence >= 200 && attack >= 200&&MP>200&&HP>300) {
			penguin.Mshowcon3();
			maps[level][row + x][col + y] = con;
			maps[level][row][col] = 3;
			experience++;
			HP = HP - 299;
			MP = MP - 50;
			attack -= 200;
			defence -= 200;
			break;
		}
		else {
			penguin.Mshowcon4();
			maps[level][row][col] = con;
		}
		break;
	case 40://����NPC1��ɫ����
		npc0->dialogueX();
		_getch();
		maps[level][row][col] = con;
		break;
	case 41://����NPC2ħ��ʦ
		npc0->dialogueY();
		_getch();
		allup();
		maps[level][row + x][col + y]=3;
		maps[level][row][col] = con;
		break;
	case 42://����NPC3��ʹ
		npc0->dialogueZ();
		_getch();
		allup();
		allup();
		allup();
		allup();
		maps[level][row + x][col + y] = 3;
		maps[level][row][col] = con;
		break;

	case 50://��������
		sword++;
		maps[level][row + x][col + y] = con;
		maps[level][row][col] = 3;
		outtextxy(362, 480, "������һ�ѱ�����");
		_getch();
		break;
	case 88://����ħ����
		if (sword >= 3) {
			calculus->dialogueP1();
			_getch();
			win += 1;
			maps[level][row][col] = con;
			break;
		}
		else {
			calculus->dialogueP2();
			_getch();
			maps[level][row][col] = con;
		}
		break;
	}
}//ʵ�������������Ҫ�ĺ��� ��Ϸ��������

void Player::position(int* px, int* py) {
	for (*px = 0;*px <= 14;(*px)++) {
		for (*py = 9;*py <= 22;(*py)++) {
			switch (maps[level][*px][*py])
			{
			case 100:
			case 101:
			case 102:
			case 103:return;
			default: break;
			}
		}
	}//���������ֱ���޸�
}//���λ��Ѱ�Һ���

void Player::allup() {
	this->redwater++;
	this->redstone++;
	this->bluestone++;
	this->bluewater++;
}//ʵ������ȫ��Ʒ��������

inline void Player::setMonster(int x, int y, int z, int m, Monster w) {
	w.setMcon(x, y, z, m);
};//ʵ�����ù��ﺯ��

void map::loadmap() {
	loadimage(&img_playerdown, _T("E://��Ϸ�ز�//godown.bmp"));
	loadimage(&img_playerup, _T("E://��Ϸ�ز�//goup.bmp"));
	loadimage(&img_playerleft, _T("E://��Ϸ�ز�//goleft.bmp"));
	loadimage(&img_playerright, _T("E://��Ϸ�ز�//goright.bmp"));
	loadimage(&img_skeleton, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-12_������_aigei_com.bmp"));
	loadimage(&img_yellowdoor, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-37_������_aigei_com.bmp"));
	loadimage(&img_bluedoor, _T("E://��Ϸ�ز�//bluedoor.bmp"));
	loadimage(&img_ghost, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-20_������_aigei_com.bmp"));
	loadimage(&img_bluekey, _T("E://��Ϸ�ز�//bluekey.bmp"));
	loadimage(&img_yellowkey, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-01_������_aigei_com (2).bmp"));
	loadimage(&wallgrey, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-03_������_aigei_com.bmp"));
	loadimage(&wallboil, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-02_������_aigei_com.bmp"));
	loadimage(&wallsilver, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-01_������_aigei_com.bmp"));
	loadimage(&img_redstone, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-17_������_aigei_com.bmp"));
	loadimage(&img_bluestone, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-18_������_aigei_com.bmp"));
	loadimage(&img_redwater, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-21_������_aigei_com.bmp"));
	loadimage(&img_bluewater, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-22_������_aigei_com.bmp"));
	loadimage(&img_upstairs, _T("E://��Ϸ�ز�//�����԰�ħ����ϷԴ��-04_������_aigei_com.bmp"));
	loadimage(&img_downstairs, _T("E://��Ϸ�ز�//downstairs.bmp"));
	loadimage(&img_oldmanblue, _T("E://��Ϸ�ز�//oldmanblue.bmp"));
	loadimage(&img_magicdoor, _T("E://��Ϸ�ز�//magicdoor.bmp"));
	loadimage(&img_whiteball, _T("E://��Ϸ�ز�//whiteball.bmp"));
	loadimage(&img_redball, _T("E://��Ϸ�ز�//redball.bmp"));
	loadimage(&img_penguin, _T("E://��Ϸ�ز�//penguin.bmp"));
	loadimage(&img_sword, _T("E://��Ϸ�ز�//sword.bmp"));
	loadimage(&img_bat, _T("E://��Ϸ�ز�//bat.bmp"));
	loadimage(&img_npc2, _T("E://��Ϸ�ز�//npc2.bmp"));
	loadimage(&img_calculus,_T("E://��Ϸ�ز�//calculus.bmp"));
	loadimage(&img_angel, _T("E://��Ϸ�ز�//angel.bmp"));
}//ʵ�ֵ�ͼ��ֽ�ϴ�����

void map::drawmap() {
	for (int i = 0;i < 23;i++) {
		for (int j = 0;j < 23;j++) {
			switch (maps[level][j][i])
			{
			case 0:putimage(i * 32, j * 32, &wallsilver);break;
			case 2:putimage(i * 32, j * 32, &wallboil);break;
			case 3:putimage(i * 32, j * 32, &wallgrey);break;
			case 4:putimage(i * 32, j * 32, &img_upstairs);break;
			case 5:putimage(i * 32, j * 32, &img_downstairs);break;
			case 6:putimage(i * 32, j * 32, &img_yellowdoor);break;
			case 7:putimage(i * 32, j * 32, &img_bluedoor);break;
			case 8:putimage(i * 32, j * 32, &img_skeleton);break;
			case 9:putimage(i * 32, j * 32, &img_ghost);break;
			case 15:putimage(i * 32, j * 32, &img_redwater);break;
			case 16:putimage(i * 32, j * 32, &img_bluewater);break;
			case 17:putimage(i * 32, j * 32, &img_redstone);break;
			case 18:putimage(i * 32, j * 32, &img_bluestone);break;
			case 20:putimage(i * 32, j * 32, &img_yellowkey);break;
			case 21:putimage(i * 32, j * 32, &img_bluekey);break;
			case 25:putimage(i * 32, j * 32, &img_magicdoor);break;
			case 30:putimage(i * 32, j * 32, &img_whiteball);break;
			case 31:putimage(i * 32, j * 32, &img_redball);break;
			case 32:putimage(i * 32, j * 32, &img_bat);break;
			case 33:putimage(i * 32, j * 32, &img_penguin);break;
			case 40:putimage(i * 32, j * 32, &img_oldmanblue);break;
			case 41:putimage(i * 32, j * 32, &img_npc2);break;
			case 42:putimage(i * 32, j * 32, &img_angel);break;
			case 50:putimage(i * 32, j * 32, &img_sword);break;
			case 88:putimage(i * 32, j * 32, &img_calculus);break;
			case 100:putimage(i * 32, j * 32, &img_playerup);break;
			case 101:putimage(i * 32, j * 32, &img_playerdown);break;
			case 102:putimage(i * 32, j * 32, &img_playerleft);break;
			case 103:putimage(i * 32, j * 32, &img_playerright);break;
			}
		}
	}
}//ʵ�ֻ�ͼ��������ͼ����Ϊ��ά����

gamemode1::gamemode1() {
		setplayer1();
}//ʵ��������Ϸģʽ����

void bag::useitem(Player* a) {
	switch (_getch()) {
	case 'U':
		if (a->redwater > 0) {
			a->redwater--;
			a->HP += 350;
			a->attack += 100;
			break;
		}
		else {
			outtextxy(352, 480, "��û�к�ɫҩˮ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫҩˮ��");
			_getch();
			break;
		}
		break;
	case 'u':
		if (a->redwater > 0) {
			a->redwater--;
			a->HP += 350;
			a->attack += 100;
			break;
		}
	else {
			outtextxy(352, 480, "��û�к�ɫҩˮ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫҩˮ��");
			_getch();
			break;
		}
	break;

	case 'Y':
		if (a->bluewater > 0) {
			a->bluewater--;
			a->MP += 70;
			a->defence += 100;
			break;
		}
		else {
			outtextxy(352, 480, "��û����ɫҩˮ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫҩˮ��");
			_getch();
			break;
		}
	case 'y':
		if (a->bluewater > 0) {
			a->bluewater--;
			a->MP += 70;
			a->defence += 100;
			break;
		}
		else {
			outtextxy(352, 480, "��û����ɫҩˮ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫҩˮ��");
			_getch();
			break;
		}
	case 'T':
		if (a->redstone > 0) {
			a->redstone--;
			a->attack += 200;
			break;
		}
		else {
			outtextxy(352, 480, "��û�к�ɫ��ʯ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫ��ʯ��");
			_getch();
			break;
		}
	case 't':
		if (a->redstone > 0) {
			a->redstone--;
			a->attack += 100;
			break;
		}
		else {
			outtextxy(352, 480, "��û�к�ɫ��ʯ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫ��ʯ��");
			_getch();
			break;
		}
	case 'R':
		if (a->bluestone > 0) {
			a->bluestone--;
			a->defence += 100;
			break;
		}
		else {
			outtextxy(352, 480, "��û����ɫ��ʯ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫ��ʯ��");
			_getch();
			break;
		}
	case 'r':
		if (a->bluestone > 0) {
			a->bluestone--;
			a->defence += 100;
			break;
		}
		else {
			outtextxy(352, 480, "��û����ɫ��ʯ��");
			outtextxy(352, 512, "��ȥ�ռ���ɫ��ʯ��");
			_getch();
			break;
		}
	case 'L':// use sword
	case 'l':
		if (a->sword > 0) {
			a->sword--;
			a->defence += 1000;
			a->attack += 1000;
			break;
		}
		else {
			outtextxy(352, 480, "��û�б�����");
			outtextxy(352, 512, "��ȥ�ռ�������");
			_getch();
			break;
		}
	case '0':
	case 'o':
		closebag();
		break;
	}
}//ʵ�ֱ������ƺ���

void Run::run(int row, int col, Player player1, map map1, gamemode1 gamemode11, clearmap cleartool1, bag bag1) {
	switch (_getch()) {
	case '*':
		while (gamemode11.flag == 0) {
			map1.drawmap();
			cleartool1.clearcon();
			gamemode11.showcon();
			gamemode11.position(&row, &col);
			cleartool1.cleartext();
			switch (_getch()) {
			case 'D':gamemode11.moveplayer(row, col, 0, 1);break;
			case 'd':gamemode11.moveplayer(row, col, 0, 1);break;
			case 'A':gamemode11.moveplayer(row, col, 0, -1);break;
			case 'a':gamemode11.moveplayer(row, col, 0, -1);break;
			case 'W':gamemode11.moveplayer(row, col, -1, 0);break;
			case 'w':gamemode11.moveplayer(row, col, -1, 0);break;
			case 'S':gamemode11.moveplayer(row, col, 1, 0);break;
			case 's':gamemode11.moveplayer(row, col, 1, 0);break;
			case 'I':
			case 'i':bag1.showinfo();bag1.useitem(&player1);break;
			case 'P':
			case 'p':
				outtextxy(352, 480, "�Ƿ�ѡ���˳���Ϸ��");
				outtextxy(352, 512, "�ٴΰ�P�˳���Ϸ");
				outtextxy(352, 544, "�������������");
				switch (_getch())
				{
				case'P':
				case'p':
					gamemode11.flag += 1;
					break;
				default:break;
				}
				break;
			}
		}
	default:
		while (player1.flag == 0) {
			map1.drawmap();
			player1.position(&row, &col);
			cleartool1.clearcon();
			player1.showcon();
			cleartool1.cleartext();
			switch (_getch()) {
			case 'n':
			case 'N':player1.allup();break;
			case 'M':
			case 'm':
			case ',':cleartool1.clearcon();break;
			case 'D':player1.moveplayer(row, col, 0, 1);break;
			case 'd':player1.moveplayer(row, col, 0, 1);break;
			case 'A':player1.moveplayer(row, col, 0, -1);break;
			case 'a':player1.moveplayer(row, col, 0, -1);break;
			case 'W':player1.moveplayer(row, col, -1, 0);break;
			case 'w':player1.moveplayer(row, col, -1, 0);break;
			case 'S':player1.moveplayer(row, col, 1, 0);break;
			case 's':player1.moveplayer(row, col, 1, 0);break;
			case 'I':
			case 'i':bag1.showinfo();bag1.useitem(&player1);break;
			case 'P':
			case 'p':
				outtextxy(352, 480, "�Ƿ�ѡ���˳���Ϸ��");
				outtextxy(352, 512, "�ٴΰ�P�˳���Ϸ");
				outtextxy(352, 544, "�������������");
				switch (_getch())
				{
				case'P':
				case'p':
					player1.flag += 1;
					break;
				default:break;
				}
				break;
			}
		}
		break;
	}
	exp = player1.experience;
	w = player1.win;
}//ʵ����Ϸ���к���

