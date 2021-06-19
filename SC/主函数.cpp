#include "stdafx.h"
#include<iostream>
#include< graphics.h>
#include<string>
#include<conio.h>
#include <stdio.h>
#include"类的定义.h"
#include<fstream>

/*
说明：
一、
本文件为各类中有关操作函数的实现文件。
二、
1.代码量：类的定义文件167行 类的实现（操作部分）文件757行 类的实现（文本部分）文件227行 主函数文件49行
总代码行数：167+757+227+49=1200行
有效代码行数：总行数-用于醒目的空行数-单字符成行数-误差行数≈1050行
2.上述说明文字不包含在代码量的计数当中
*/

int main()
{  
	int row=0;//定义行数据
	int col=0;//定义列数据
	initial initial1;//建立初始化类对象
	map map1;//建立地图类对象
	clearmap cleartool1;//建立清空地图类对象
	Player player1;//建立玩家类对象
	gamemode1 gamemode11;//建立游戏模式类对象
	bag bag1;//建立背包类对象
	Run run1;//建立运行类对象
	initial1.welcome();//调用欢迎界面函数
	initial1.intro();//调用游戏操作介绍界面函数
	player1.setname();//调用设置姓名和学校函数
	initial1.reg();//调用注册成功界面函数
	map1.loadmap();//调用上传游戏图片函数
	map1.drawmap();//调用绘制游戏地图函数
	player1.showcon();//调用显示人物状态函数
	run1.run(row, col, player1, map1, gamemode11, cleartool1, bag1);	//调用游戏操作运行函数
	fstream rank("Rank.txt", ios::out | ios::app);//建立流输入输出对象
	rank << "This is the record of this Game!" << endl;//将提示文字写入文件
	rank << player1.Name<<endl;//将玩家姓名写入文件
	rank << player1.School << endl;//将玩家学校写入文件
	if (run1.w == 0) {
		rank << "该玩家未通关。"<<endl;//将玩家未通关写入文件
	}
	else {
		rank << "该玩家已通关。"<<endl;//将玩家已通关写入文件
	}
	rank << run1.exp<< endl;	//输出经验用于排行
	rank << endl;//输出换行
	rank.close();//以上为记录游戏数据部分
	cout << endl;//输出换行
	cout << "You have closed the game!"<<endl;//输出游戏结束提醒
	cout << "Thank you for playing!";//感谢玩家
	cout << "If you have some advice,";//游戏反馈提示
	cout << "Please e-mail me at 1454853976@qq.com.";//游戏反馈提示
	return 0;//主函数返回值
}

