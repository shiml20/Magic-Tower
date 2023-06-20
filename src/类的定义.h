#ifndef CLASS_H
#define CLASS_H

#include "stdafx.h"
#include<iostream>
#include< graphics.h>
#include<string>
#include<conio.h>
#include <stdio.h>
using namespace std;

/*
˵����
һ��
���ļ�Ϊ����Ķ����ļ���
����
1.����������Ķ����ļ�167�� ���ʵ�֣��������֣��ļ�757�� ���ʵ�֣��ı����֣��ļ�227�� �������ļ�49��
�ܴ���������167+757+227+49=1200��
��Ч����������������-������Ŀ�Ŀ�����-���ַ�������-���������1050��
2.����˵�����ֲ������ڴ������ļ�������
*/

class initial {//������ʼ����
public:
	void welcome();//������ӭ���溯��
	void intro();//˵������
	void selectmode();//������Ϸģʽ����
	void reg();
};

class Monster {//����������
private:
	int Mdefence;
	int Mattack;
	int Mhp;
	int Mmp;//ÿ�ֹ����4������
public:
	Monster() {
		Mdefence = 0;
		Mattack = 0;
		Mhp = 1;
		Mmp = 1;
	};//�������������캯��
	Monster(int x, int y, int z, int m) {
		Mdefence = x;
		Mattack = y;
		Mhp = z;
		Mmp = m;
	}//�����๹�캯��������

	void setMcon(int x, int y, int z, int m) {
		Mdefence = x;
		Mattack = y;
		Mhp = z;
		Mmp = m;
	}//����һ������
	void Mshowcon1();//��ʾ����Ի�����1
	void Mshowcon2();//��ʾ����Ի�����2
	void Mshowcon3();//��ʾ����Ի�����3
	void Mshowcon4();//��ʾ����Ի�����4
};

class NPC;
class Player  {//���������࣬��NPC�������ϡ��������Ǳ���Ϸ����Ҫ���ࡣ

public:
	int win;
	int HP;
	int MP;
	int defence;
	int attack;
	int money;
	int yellowkey;
	int bluekey;
	int redwater;
	int bluewater;
	int experience;
	int redstone;
	int bluestone;
	int sword;
	string Name;
	string School;
	//���������ͽ���������������ԡ�
	Monster skeleton;//���ù���
	Monster ghost;//�������
	Monster whiteball;//��ɫ���
	Monster redball;//��ɫ���
	Monster bat;//��ɫ����
	Monster penguin;//���
	//�������������
	NPC* npc0;
	NPC* calculus;//��NPC�������ϡ�������ָ�룬����ǰ�����õ�ì�ܡ�
	int flag;
	Player();//��ҹ��캯��
	void position(int* px, int* py);//Ѱ�����λ�ú���
	void moveplayer(int row, int col, int x, int y);//�ƶ���Һ������Ǳ���Ϸ����Ҫ�ĺ���
	void setMonster(int x, int y, int z, int m, Monster w);//���ù��ﺯ��
	void setplayer1();//������Һ���
	void showcon();//��ʾ���״̬����
	void allup();//ȫ����+1����
	int showexp();
	void setname();
	string showname();
};


class clearmap;
class NPC {//����NPC�࣬����clearmap��������
public:
	clearmap* cleartextbook;
	void dialogueX();//NPC�Ի�1
	void dialogueY();//NPC�Ի�2
	void dialogueZ();//NPC�Ի�3
	void dialogueP1();//NPC�Ի�4
	void dialogueP2();//NPC�Ի�5
};


class map {//������ͼ��
private:
		IMAGE img_skeleton;
		IMAGE img_angel;
		IMAGE img_ghost;
		IMAGE img_yellowkey;
		IMAGE img_bluekey;
		IMAGE img_yellowdoor;
		IMAGE img_bluedoor;
		IMAGE wallgrey;
		IMAGE wallboil;
		IMAGE wallsilver;
		IMAGE img_redwater;
		IMAGE img_bluewater;
		IMAGE img_redstone;
		IMAGE img_bluestone;
		IMAGE img_upstairs;
		IMAGE img_playerup;
		IMAGE img_playerdown;
		IMAGE img_playerright;
		IMAGE img_playerleft;
		IMAGE img_downstairs;
		IMAGE img_oldmanblue;
		IMAGE img_magicdoor;
		IMAGE img_npc2;
		IMAGE img_sword;
		IMAGE img_redball;
		IMAGE img_whiteball;
		IMAGE img_calculus;
		IMAGE img_penguin;
		IMAGE img_bat;
	//����easyX�⽨������ͼƬ����
public:
	void loadmap();//�ϴ���ͼ��ֽ����
	void drawmap();//���Ƶ�ͼ����
};

class clearmap :public map {//���������ͼ�࣬��Ϊ��ͼ�������
public:
	void cleartext();//�����Ϣ�������Ϣ����
	void clearcon();
};

class gamemode1 :public Player {//������Ϸģʽ�࣬��Ϊ�����������
public:
	gamemode1();//������Ϸģʽ���͹��캯��
};

class bag: public Player{//���������࣬��Ϊ�����������
public:
	void showinfo();//��ʾ��Ʒ��Ϣ����
	void useitem(Player* a);
	void closebag();//�رձ�������
};

class Run{
	
public:
	int exp;
	int w;
	void run(int row, int col, Player player1, map map1, gamemode1 gamemode11, clearmap cleartool1, bag bag1);
};

#endif

