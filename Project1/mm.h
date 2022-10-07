#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//打印棋盘
//确定棋盘的道数
#define HA 3
#define LI 3
void pp(char ch[HA][LI], int ha,int li);//棋局打印函数
void ta(char ch[HA][LI], int ha, int li);//初始化棋局
void player(char ch[HA][LI], int ha, int li);//玩家
char who(char ch[HA][LI], int ha, int li);//胜负判断返回数值
void com(char ch[HA][LI], int ha, int li);//电脑落子
int full(char ch[HA][LI], int ha, int li);//棋盘是否已满





