#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define HA 3
#define LI 3
void print(int ha, int li, char arr[HA][LI]);
void init(char arr[HA][LI], int ha, int li);
void player_move(char arr[HA][LI], int ha, int li);
void com_mov(char arr[HA][LI],int ha,int li);