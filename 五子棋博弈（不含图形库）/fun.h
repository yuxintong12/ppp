#pragma once
#define HA 10
#define LI 10
#define zi 5
#include<stdio.h>
void init(char ch[HA][LI], int ha, int li);
void print_bord(char ch[HA][LI], int ha, int li);
int * player_move(char bord[HA][LI], int ha, int li);
char is_win(char ch[HA][LI], int ha, int li,int* p);
int* computer_move(char ch[HA][LI], int ha, int li);