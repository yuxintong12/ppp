#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//打印棋盘
//确定棋盘的道数
#define HA 3
#define LI 3
void pp(char ch[HA][LI], int ha,int li);
void ta(char ch[HA][LI], int ha, int li);
void player(char ch[HA][LI], int ha, int li);
char who(char ch[HA][LI], int ha, int li);
void com(char ch[HA][LI], int ha, int li);
int full(char ch[HA][LI], int ha, int li);





