#pragma once
/*
	项目名：三子棋
	负责人：郁昕瞳
	迭代版本：1.2v
	日期：2022.11.7
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define HA 3
#define LI 3
#define ZI 3
void print(int ha, int li, char arr[HA][LI]);
void init(char arr[HA][LI], int ha, int li);
void player_move(char arr[HA][LI], int ha, int li,char c);
void com_mov(char arr[HA][LI],int ha,int li);
char win(char arr[HA][LI], int ha, int li,char c);