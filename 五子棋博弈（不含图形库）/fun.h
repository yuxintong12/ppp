#pragma once
enum san
{
	HA = 3,
	LI = 3,
	ZI = 3
};
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
void init(char ch[HA][LI], int ha, int li);
void print_bord(char ch[HA][LI], int ha, int li);
int * player_move(char bord[HA][LI], int ha, int li);
char is_win(char ch[HA][LI], int ha, int li,int* p);
int* computer_move(char ch[HA][LI], int ha, int li);