#pragma once
#define HA 3
#define LI 3
#define zi 3
#include<stdio.h>
#include<string.h>
void init(char ch[HA][LI], int ha, int li);
void print_bord(char ch[HA][LI], int ha, int li);
int * player_move(char bord[HA][LI], int ha, int li);
char is_win(char ch[HA][LI], int ha, int li,int* p);
int* computer_move(char ch[HA][LI], int ha, int li);