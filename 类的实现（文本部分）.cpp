#include "stdafx.h"
#include<iostream>
#include< graphics.h>
#include<string>
#include<conio.h>
#include <stdio.h>
#include"类的定义.h"
using namespace std;

/*
说明：
一、
本文件为主函数运行文件。
二、
1.代码量：类的定义文件167行 类的实现（操作部分）文件757行 类的实现（文本部分）文件227行 主函数文件49行
总代码行数：167+757+227+49=1200行
有效代码行数：总行数-用于醒目的空行数-单字符成行数-误差行数≈1050行
2.上述说明文字不包含在代码量的计数当中
*/

void initial::welcome() {
	initgraph(864, 800);//绘制一个864×800的游戏框
	settextstyle(60, 60, "楷体");//设置字体大小为60×60，字体格式为楷体
	settextcolor(WHITE);//设置字体为白色
	outtextxy(100, 200, "勇登博雅塔");//在x=100，y=200的位置输出“勇闯博雅塔”五个字
	settextstyle(32, 16, "楷体");//设置字体大小为32×16，字体格式为楷体
	outtextxy(500, 400, "制作人：史明磊");//在x=500，y=400的位置输出
	outtextxy(500, 500, "输入任意键继续游戏");//在x=500，y=500的位置输出
	_getch();//读入一个字符
	cleardevice();//清空游戏框，用于绘制下一个场景
}

void initial::intro() {
	initgraph(864, 800);
	settextstyle(60, 50, "楷体");
	settextcolor(WHITE);
	outtextxy(32, 32, "游戏操作说明：");
	settextstyle(32, 16, "楷体");
	outtextxy(40, 95, "1.按下WSAD,分别为上下左右");
	outtextxy(40, 127, "2.触碰怪物即进行战斗模式");
	outtextxy(40, 159, "3.按下I键打开背包，并查看信息");
	outtextxy(40, 191, "背包中物品每次使用时需再次按下I键进行更新");
	outtextxy(40, 223, "4.按下P键结束游戏。");
	outtextxy(40, 255, "5.击杀怪物需要满足一定的属性值");
	outtextxy(40, 287, "6.红色药剂可以增加HP和攻击力");
	outtextxy(40, 319, "7.蓝色药剂可以增加MP和防御力");
	outtextxy(40, 351, "8.红色宝石可以增加攻击力");
	outtextxy(40, 383, "9.蓝色宝石可以增加防御力");
	outtextxy(40, 430, "请在下一界面输入你的姓名和学校信息用于注册");
	outtextxy(500, 500, "输入任意键继续游戏");
	_getch();
	closegraph();//游戏操作方法介绍函数
}

void initial::reg() {
	initgraph(864, 800);
	settextstyle(50, 45, "楷体");
	settextcolor(WHITE);
	outtextxy(100, 200, "恭喜你成功注册！");
	settextstyle(32, 16, "楷体");
	outtextxy(500, 400, "开始你的游戏吧！");
	outtextxy(500, 500, "输入任意键继续游戏");
	_getch();
	cleardevice();//游戏注册成功窗口提示函数
}

char temp[1000];
char* transfer(int num)
{
	sprintf_s(temp, "%d", num);
	return temp;
}//整型数据转换成字符数据函数

void Player::showcon() {

	settextstyle(20, 10, "黑体");
	outtextxy(32, 252, "宝剑数：");
	outtextxy(32, 32, "血量值：");
	outtextxy(32, 52, "魔法值：");
	outtextxy(32, 72, "攻击力：");
	outtextxy(32, 92, "防御力：");
	outtextxy(32, 112, "黄钥匙数：");
	outtextxy(32, 132, "蓝钥匙数：");
	outtextxy(32, 152, "药剂（血）：");
	outtextxy(32, 172, "药剂（蓝）：");
	outtextxy(32, 192, "力量宝石：");
	outtextxy(32, 212, "防御宝石：");
	outtextxy(32, 232, "经验值:");
	outtextxy(150, 32, transfer(HP));
	outtextxy(150, 52, transfer(MP));
	outtextxy(150, 72, transfer(attack));
	outtextxy(150, 92, transfer(defence));
	outtextxy(150, 112, transfer(yellowkey));
	outtextxy(150, 132, transfer(bluekey));
	outtextxy(150, 152, transfer(redwater));
	outtextxy(150, 172, transfer(bluewater));
	outtextxy(150, 192, transfer(redstone));
	outtextxy(150, 212, transfer(bluestone));
	outtextxy(150, 232, transfer(experience));
	outtextxy(150, 252, transfer(sword));
}//显示人物物品与状态函数

void initial::selectmode() {
	outtextxy(352, 480, "按下 * 开启无敌版。");
	outtextxy(352, 512, "按下其他键开启正常版本。");
}//设置游戏模式提醒函数


void clearmap::cleartext() {
	outtextxy(352, 480, "                                ");
	outtextxy(352, 512, "                                ");
	outtextxy(352, 544, "                                ");
	outtextxy(352, 576, "                                ");
}//清空文本函数

void clearmap::clearcon() {
	settextstyle(20, 10, "                  ");
	outtextxy(32, 252, "                 ");
	outtextxy(32, 32, "                  ");
	outtextxy(32, 52, "                   ");
	outtextxy(32, 72, "                   ");
	outtextxy(32, 92, "                   ");
	outtextxy(32, 112, "                   ");
	outtextxy(32, 132, "                   ");
	outtextxy(32, 152, "                   ");
	outtextxy(32, 172, "                   ");
	outtextxy(32, 192, "                   ");
	outtextxy(32, 212, "                   ");
	outtextxy(32, 232, "                   ");
}//清空人物状态函数

void NPC::dialogueX() {
	outtextxy(352, 480, "你怎么敢上到博雅塔的第二层......");
	outtextxy(352, 512, "警告你别往前走了.......");
	outtextxy(352, 544, "五层有大恐怖......");
	outtextxy(352, 576, "曾经去的人都没有回来过.......");
}//NPC对话1

void NPC::dialogueY() {
	outtextxy(352, 480, "既然你登上了这里，");
	outtextxy(352, 480, "我就给你点帮助吧！");
	outtextxy(352, 544, "这是我给你的最后的保佑......");
}//NPC对话2

void NPC::dialogueZ(){
	outtextxy(352, 480, "哈利路亚！");
	outtextxy(352, 480, "希望上帝保佑你！");
	outtextxy(352, 544, "博雅之神赐你力量！");
}//NPC对话3

void NPC::dialogueP1() {
	outtextxy(352, 480, "恭喜你找到了大恐怖......");
	outtextxy(352, 512, "警告你别打开我.....");
	outtextxy(352, 544, "我会让你感到绝望的....");
	outtextxy(352, 576, "按下Y键打开，其他键不打开。");
	switch (_getch()) {
	case 'Y':
	case 'y':
		outtextxy(352, 480, "                                ");
		outtextxy(352, 512, "                                ");
		outtextxy(352, 544, "                                ");
		outtextxy(352, 576, "                                ");
		_getch();
		outtextxy(352, 480, "我的名字叫做《数学分析》。");
		outtextxy(352, 512, "恭喜你发现了博雅塔顶端的宝藏。");
		outtextxy(352, 544, "按任意键继续。");
		_getch();
		break;
	default:
		outtextxy(352, 480, "                                ");
		outtextxy(352, 512, "                                ");
		outtextxy(352, 544, "                                ");
		outtextxy(352, 576, "                                ");
		outtextxy(352, 480, "你走吧！");
		break;
	}
}//NPC对话4

void NPC::dialogueP2() {
	outtextxy(352, 480, "你缺乏三把宝剑！");
	outtextxy(352, 512, "你没有足够的能力面临大恐怖。");
	outtextxy(352, 544, "我会让你感到绝望的....");
	outtextxy(352, 576, "请去寻找三把宝剑。");
}//NPC对话5

void bag::showinfo() {
	outtextxy(32, 320, "背包物品：");
	outtextxy(32, 352, "按下U键饮用红色药剂");
	outtextxy(32, 384, "按下Y键饮用蓝色药剂");
	outtextxy(32, 416, "按下T键使用红色宝石");
	outtextxy(32, 448, "按下R键饮用蓝色宝石");
	outtextxy(32, 480, "按下I键打开背包");
	outtextxy(32, 512, "按下I键更新背包");
	outtextxy(32, 544, "按下O键关闭背包");
	outtextxy(32, 580, "按下P键退出游戏");
}//显示背包信息函数

void bag::closebag() {
	outtextxy(32, 320, "            ");
	outtextxy(32, 352, "                   ");
	outtextxy(32, 384, "                   ");
	outtextxy(32, 416, "                   ");
	outtextxy(32, 448, "                   ");
	outtextxy(32, 480, "                   ");
	outtextxy(32, 512, "                   ");
	outtextxy(32, 544, "                   ");
	outtextxy(32, 576, "                   ");
	outtextxy(32, 580, "                   ");
}//清空背包函数

void Monster::Mshowcon1() {
	outtextxy(352, 480, "你把我打死了！！！！！！！");
	outtextxy(352, 512, "你太坏了！！！！！！！！");
	outtextxy(352, 544, "按任意键继续。");
	_getch();
}//与怪物对话函数1

void Monster::Mshowcon2() {
	outtextxy(352, 480, "你好菜啊！！！！！");
	outtextxy(352, 512, "哈哈哈！！！！！！！！");
	outtextxy(352, 544, "按任意键继续。");
	_getch();
}//与怪物对话函数2

void Monster::Mshowcon3() {
	outtextxy(352, 480, "我是正义的化身！");
	outtextxy(352, 512, "氪金吧！少年！");
	outtextxy(352, 544, "我能让你拥有史上最强装备！");
	_getch();
}//与怪物对话函数3

void Monster::Mshowcon4() {
	outtextxy(352, 480, "不氪金就打我！");
	outtextxy(352, 512, "呜呜呜！！");
	outtextxy(352, 544, "按任意键继续。");
	_getch();
}//与怪物对话函数4

