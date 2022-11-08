#define _CRT_SECURE_NO_WARNINGS 1
#define H_max 3
#define L_max 3
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void play();
void clear(char board[H_max][L_max], int H, int L);
void printboard(char board[H_max][L_max], int H, int L);
void printmenu();
void computerplay(char board[H_max][L_max], int H, int L);
void search(char board[H_max][L_max], int* X, int* Y, int H, int L, char ch, char ch2);
void putBoard(char board[H_max][L_max], char ch, int x, int y);
char isWin(char board[H_max][L_max], int H, int L);
int isFulled(char board[H_max][L_max], int H, int L);