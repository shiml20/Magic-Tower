#include "stdafx.h"
#include<iostream>
#include< graphics.h>
#include<string>
#include<conio.h>
#include <stdio.h>
#include"��Ķ���.h"
#include<fstream>

/*
˵����
һ��
���ļ�Ϊ�������йز���������ʵ���ļ���
����
1.����������Ķ����ļ�167�� ���ʵ�֣��������֣��ļ�757�� ���ʵ�֣��ı����֣��ļ�227�� �������ļ�49��
�ܴ���������167+757+227+49=1200��
��Ч����������������-������Ŀ�Ŀ�����-���ַ�������-���������1050��
2.����˵�����ֲ������ڴ������ļ�������
*/

int main()
{  
	int row=0;//����������
	int col=0;//����������
	initial initial1;//������ʼ�������
	map map1;//������ͼ�����
	clearmap cleartool1;//������յ�ͼ�����
	Player player1;//������������
	gamemode1 gamemode11;//������Ϸģʽ�����
	bag bag1;//�������������
	Run run1;//�������������
	initial1.welcome();//���û�ӭ���溯��
	initial1.intro();//������Ϸ�������ܽ��溯��
	player1.setname();//��������������ѧУ����
	initial1.reg();//����ע��ɹ����溯��
	map1.loadmap();//�����ϴ���ϷͼƬ����
	map1.drawmap();//���û�����Ϸ��ͼ����
	player1.showcon();//������ʾ����״̬����
	run1.run(row, col, player1, map1, gamemode11, cleartool1, bag1);	//������Ϸ�������к���
	fstream rank("Rank.txt", ios::out | ios::app);//�����������������
	rank << "This is the record of this Game!" << endl;//����ʾ����д���ļ�
	rank << player1.Name<<endl;//���������д���ļ�
	rank << player1.School << endl;//�����ѧУд���ļ�
	if (run1.w == 0) {
		rank << "�����δͨ�ء�"<<endl;//�����δͨ��д���ļ�
	}
	else {
		rank << "�������ͨ�ء�"<<endl;//�������ͨ��д���ļ�
	}
	rank << run1.exp<< endl;	//���������������
	rank << endl;//�������
	rank.close();//����Ϊ��¼��Ϸ���ݲ���
	cout << endl;//�������
	cout << "You have closed the game!"<<endl;//�����Ϸ��������
	cout << "Thank you for playing!";//��л���
	cout << "If you have some advice,";//��Ϸ������ʾ
	cout << "Please e-mail me at 1454853976@qq.com.";//��Ϸ������ʾ
	return 0;//����������ֵ
}

