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
说明：
一、
本文件为各类的定义文件。
二、
1.代码量：类的定义文件167行 类的实现（操作部分）文件757行 类的实现（文本部分）文件227行 主函数文件49行
总代码行数：167+757+227+49=1200行
有效代码行数：总行数-用于醒目的空行数-单字符成行数-误差行数≈1050行
2.上述说明文字不包含在代码量的计数当中
*/

class initial {//建立初始化类
public:
	void welcome();//建立欢迎界面函数
	void intro();//说明界面
	void selectmode();//设置游戏模式函数
	void reg();
};

class Monster {//建立怪物类
private:
	int Mdefence;
	int Mattack;
	int Mhp;
	int Mmp;//每种怪物的4个属性
public:
	Monster() {
		Mdefence = 0;
		Mattack = 0;
		Mhp = 1;
		Mmp = 1;
	};//怪物类内联构造函数
	Monster(int x, int y, int z, int m) {
		Mdefence = x;
		Mattack = y;
		Mhp = z;
		Mmp = m;
	}//怪物类构造函数的重载

	void setMcon(int x, int y, int z, int m) {
		Mdefence = x;
		Mattack = y;
		Mhp = z;
		Mmp = m;
	}//设置一个怪物
	void Mshowcon1();//显示怪物对话函数1
	void Mshowcon2();//显示怪物对话函数2
	void Mshowcon3();//显示怪物对话函数3
	void Mshowcon4();//显示怪物对话函数4
};

class NPC;
class Player  {//建立人物类，与NPC类进行组合。人物类是本游戏最重要的类。

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
	//上述用整型建立人物的若干属性。
	Monster skeleton;//骷髅怪物
	Monster ghost;//幽灵怪物
	Monster whiteball;//白色球怪
	Monster redball;//红色球怪
	Monster bat;//黑色蝙蝠
	Monster penguin;//企鹅
	//与怪物类进行组合
	NPC* npc0;
	NPC* calculus;//与NPC类进行组合。且设置指针，消除前向引用的矛盾。
	int flag;
	Player();//玩家构造函数
	void position(int* px, int* py);//寻找玩家位置函数
	void moveplayer(int row, int col, int x, int y);//移动玩家函数，是本游戏最重要的函数
	void setMonster(int x, int y, int z, int m, Monster w);//设置怪物函数
	void setplayer1();//建立玩家函数
	void showcon();//显示玩家状态函数
	void allup();//全属性+1函数
	int showexp();
	void setname();
	string showname();
};


class clearmap;
class NPC {//建立NPC类，且与clearmap类进行组合
public:
	clearmap* cleartextbook;
	void dialogueX();//NPC对话1
	void dialogueY();//NPC对话2
	void dialogueZ();//NPC对话3
	void dialogueP1();//NPC对话4
	void dialogueP2();//NPC对话5
};


class map {//建立地图类
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
	//利用easyX库建立各种图片对象
public:
	void loadmap();//上传地图贴纸函数
	void drawmap();//绘制地图函数
};

class clearmap :public map {//建立清理地图类，作为地图类的子类
public:
	void cleartext();//清除消息框里的消息函数
	void clearcon();
};

class gamemode1 :public Player {//建立游戏模式类，作为人物类的子类
public:
	gamemode1();//设置游戏模式类型构造函数
};

class bag: public Player{//建立背包类，作为人物类的子类
public:
	void showinfo();//显示物品信息函数
	void useitem(Player* a);
	void closebag();//关闭背包函数
};

class Run{
	
public:
	int exp;
	int w;
	void run(int row, int col, Player player1, map map1, gamemode1 gamemode11, clearmap cleartool1, bag bag1);
};

#endif

