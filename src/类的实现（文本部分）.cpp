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
���ļ�Ϊ�����������ļ���
����
1.����������Ķ����ļ�167�� ���ʵ�֣��������֣��ļ�757�� ���ʵ�֣��ı����֣��ļ�227�� �������ļ�49��
�ܴ���������167+757+227+49=1200��
��Ч����������������-������Ŀ�Ŀ�����-���ַ�������-���������1050��
2.����˵�����ֲ������ڴ������ļ�������
*/

void initial::welcome() {
	initgraph(864, 800);//����һ��864��800����Ϸ��
	settextstyle(60, 60, "����");//���������СΪ60��60�������ʽΪ����
	settextcolor(WHITE);//��������Ϊ��ɫ
	outtextxy(100, 200, "�µǲ�����");//��x=100��y=200��λ��������´��������������
	settextstyle(32, 16, "����");//���������СΪ32��16�������ʽΪ����
	outtextxy(500, 400, "�����ˣ�ʷ����");//��x=500��y=400��λ�����
	outtextxy(500, 500, "���������������Ϸ");//��x=500��y=500��λ�����
	_getch();//����һ���ַ�
	cleardevice();//�����Ϸ�����ڻ�����һ������
}

void initial::intro() {
	initgraph(864, 800);
	settextstyle(60, 50, "����");
	settextcolor(WHITE);
	outtextxy(32, 32, "��Ϸ����˵����");
	settextstyle(32, 16, "����");
	outtextxy(40, 95, "1.����WSAD,�ֱ�Ϊ��������");
	outtextxy(40, 127, "2.�������Ｔ����ս��ģʽ");
	outtextxy(40, 159, "3.����I���򿪱��������鿴��Ϣ");
	outtextxy(40, 191, "��������Ʒÿ��ʹ��ʱ���ٴΰ���I�����и���");
	outtextxy(40, 223, "4.����P��������Ϸ��");
	outtextxy(40, 255, "5.��ɱ������Ҫ����һ��������ֵ");
	outtextxy(40, 287, "6.��ɫҩ����������HP�͹�����");
	outtextxy(40, 319, "7.��ɫҩ����������MP�ͷ�����");
	outtextxy(40, 351, "8.��ɫ��ʯ�������ӹ�����");
	outtextxy(40, 383, "9.��ɫ��ʯ�������ӷ�����");
	outtextxy(40, 430, "������һ�����������������ѧУ��Ϣ����ע��");
	outtextxy(500, 500, "���������������Ϸ");
	_getch();
	closegraph();//��Ϸ�����������ܺ���
}

void initial::reg() {
	initgraph(864, 800);
	settextstyle(50, 45, "����");
	settextcolor(WHITE);
	outtextxy(100, 200, "��ϲ��ɹ�ע�ᣡ");
	settextstyle(32, 16, "����");
	outtextxy(500, 400, "��ʼ�����Ϸ�ɣ�");
	outtextxy(500, 500, "���������������Ϸ");
	_getch();
	cleardevice();//��Ϸע��ɹ�������ʾ����
}

char temp[1000];
char* transfer(int num)
{
	sprintf_s(temp, "%d", num);
	return temp;
}//��������ת�����ַ����ݺ���

void Player::showcon() {

	settextstyle(20, 10, "����");
	outtextxy(32, 252, "��������");
	outtextxy(32, 32, "Ѫ��ֵ��");
	outtextxy(32, 52, "ħ��ֵ��");
	outtextxy(32, 72, "��������");
	outtextxy(32, 92, "��������");
	outtextxy(32, 112, "��Կ������");
	outtextxy(32, 132, "��Կ������");
	outtextxy(32, 152, "ҩ����Ѫ����");
	outtextxy(32, 172, "ҩ����������");
	outtextxy(32, 192, "������ʯ��");
	outtextxy(32, 212, "������ʯ��");
	outtextxy(32, 232, "����ֵ:");
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
}//��ʾ������Ʒ��״̬����

void initial::selectmode() {
	outtextxy(352, 480, "���� * �����޵а档");
	outtextxy(352, 512, "�������������������汾��");
}//������Ϸģʽ���Ѻ���


void clearmap::cleartext() {
	outtextxy(352, 480, "                                ");
	outtextxy(352, 512, "                                ");
	outtextxy(352, 544, "                                ");
	outtextxy(352, 576, "                                ");
}//����ı�����

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
}//�������״̬����

void NPC::dialogueX() {
	outtextxy(352, 480, "����ô���ϵ��������ĵڶ���......");
	outtextxy(352, 512, "���������ǰ����.......");
	outtextxy(352, 544, "����д�ֲ�......");
	outtextxy(352, 576, "����ȥ���˶�û�л�����.......");
}//NPC�Ի�1

void NPC::dialogueY() {
	outtextxy(352, 480, "��Ȼ����������");
	outtextxy(352, 480, "�Ҿ͸��������ɣ�");
	outtextxy(352, 544, "�����Ҹ�������ı���......");
}//NPC�Ի�2

void NPC::dialogueZ(){
	outtextxy(352, 480, "����·�ǣ�");
	outtextxy(352, 480, "ϣ���ϵ۱����㣡");
	outtextxy(352, 544, "����֮�����������");
}//NPC�Ի�3

void NPC::dialogueP1() {
	outtextxy(352, 480, "��ϲ���ҵ��˴�ֲ�......");
	outtextxy(352, 512, "����������.....");
	outtextxy(352, 544, "�һ�����е�������....");
	outtextxy(352, 576, "����Y���򿪣����������򿪡�");
	switch (_getch()) {
	case 'Y':
	case 'y':
		outtextxy(352, 480, "                                ");
		outtextxy(352, 512, "                                ");
		outtextxy(352, 544, "                                ");
		outtextxy(352, 576, "                                ");
		_getch();
		outtextxy(352, 480, "�ҵ����ֽ�������ѧ��������");
		outtextxy(352, 512, "��ϲ�㷢���˲��������˵ı��ء�");
		outtextxy(352, 544, "�������������");
		_getch();
		break;
	default:
		outtextxy(352, 480, "                                ");
		outtextxy(352, 512, "                                ");
		outtextxy(352, 544, "                                ");
		outtextxy(352, 576, "                                ");
		outtextxy(352, 480, "���߰ɣ�");
		break;
	}
}//NPC�Ի�4

void NPC::dialogueP2() {
	outtextxy(352, 480, "��ȱ�����ѱ�����");
	outtextxy(352, 512, "��û���㹻���������ٴ�ֲ���");
	outtextxy(352, 544, "�һ�����е�������....");
	outtextxy(352, 576, "��ȥѰ�����ѱ�����");
}//NPC�Ի�5

void bag::showinfo() {
	outtextxy(32, 320, "������Ʒ��");
	outtextxy(32, 352, "����U�����ú�ɫҩ��");
	outtextxy(32, 384, "����Y��������ɫҩ��");
	outtextxy(32, 416, "����T��ʹ�ú�ɫ��ʯ");
	outtextxy(32, 448, "����R��������ɫ��ʯ");
	outtextxy(32, 480, "����I���򿪱���");
	outtextxy(32, 512, "����I�����±���");
	outtextxy(32, 544, "����O���رձ���");
	outtextxy(32, 580, "����P���˳���Ϸ");
}//��ʾ������Ϣ����

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
}//��ձ�������

void Monster::Mshowcon1() {
	outtextxy(352, 480, "����Ҵ����ˣ�������������");
	outtextxy(352, 512, "��̫���ˣ���������������");
	outtextxy(352, 544, "�������������");
	_getch();
}//�����Ի�����1

void Monster::Mshowcon2() {
	outtextxy(352, 480, "��ò˰�����������");
	outtextxy(352, 512, "����������������������");
	outtextxy(352, 544, "�������������");
	_getch();
}//�����Ի�����2

void Monster::Mshowcon3() {
	outtextxy(352, 480, "��������Ļ���");
	outtextxy(352, 512, "봽�ɣ����꣡");
	outtextxy(352, 544, "��������ӵ��ʷ����ǿװ����");
	_getch();
}//�����Ի�����3

void Monster::Mshowcon4() {
	outtextxy(352, 480, "��봽�ʹ��ң�");
	outtextxy(352, 512, "�����أ���");
	outtextxy(352, 544, "�������������");
	_getch();
}//�����Ի�����4

