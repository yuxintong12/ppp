#pragma once
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define HA 11
#define LL 11
#define HAS 9
#define LLS 9
#define LI 10
void pr();
void game();
void st(char arr[HA][LL], int ha, int ll, char fu);
void pp(char arr[HA][LL], int has, int lls);
void put(char arr[HA][LL], int has, int lls, int li);
void search(char pl[HA][LL], int has, int lls, char sh[HA][LL]);
char you(int x, int y, char arr[HA][LL]);
