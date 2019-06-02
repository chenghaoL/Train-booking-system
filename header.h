#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable: 4996)
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

//Ƶ���õ��𳵱����Ϣ
#define HEADER1 "------------------------------------BOOK TICKET------------------------------------\n"
#define HEADER2 "|   number    |start city|reach city|takeoff time|receive time|price|ticket number|\n"
#define HEADER3 "|-------------|----------|----------|------------|------------|-----|-------------|\n"
#define FORMAT "|%-10s   |%-10s|%-10s|%-10s  |%-10s  |%5d| %5d       |\n"
#define DATA p->data.num,p->data.startcity,p->data.reachcity,p->data.takeofftime,p->data.receivetime,p->data.price,p->data.ticketnum

//��Ʊ��Ϣ
struct train
{	
	char num[10];//�г���
	char startcity[10];//��������
	char reachcity[10];//�ﵽ����
	char takeofftime[10];//����ʱ��
	char receivetime[10];//����ʱ��
	int price;//Ʊ��
	int ticketnum;//Ʊ��
};

//��Ʊ�˵���Ϣ
struct man
{
	char num[10];//ID
	char name[10];//����
	int bookNum;//����Ʊ��
};

//��Ʊ��Ϣ����Ľ��ṹ
typedef struct node
{
	struct train data;
	struct node* next;
}TrainNode,*TrainLink;

//��Ʊ������Ľ��ṹ
typedef struct Man
{
	struct man data;
	struct Man* next;
}BookNode,*BookLink;

//ȫ�ֱ����Ƿ񱣴���Ϣ
int saveflag;

//��������
void menu();//�˵���ʾ
void TrainInfo(TrainLink trainHeader);//��ӻ���Ϣ
void searchtrain(TrainLink trainHeader);//��ѯ����Ϣ
void printHeader();//��ʽ�������ͷ
void printData(TrainLink trainNode);//��ʽ�������������
void SaveTrainInfo(TrainLink trainHeader);//�������Ϣ
void SaveBookInfo(BookLink trainHeader);//�����û���Ϣ
void Bookticket(TrainLink trainHeader, BookLink bookHeader);//��Ʊ
void Modify(TrainLink trainHeader);//�޸���Ϣ
void showTrain(TrainLink trainHeader);//��ʾ�г���Ϣ