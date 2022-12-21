#pragma once
enum san
{
	HA = 6,
	LI = 6,
	ZI = 5
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