#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#define HAS 11
#define LIS 11
#define HA  9
#define LI  9
#define NEW 10
void init(char ch[HAS][LIS], int has, int lis,char c);
void print(char ch[HAS][LIS], int ha, int li);
void put(char ch[HAS][LIS], int ha, int li);
int play_remove(char de[HAS][LIS], char show[HAS][LIS], int ha, int li);
void change(char show[HAS][LIS], char de[HAS][LIS], int x, int y);
int judge(int x, int y);
int check(char show[HAS][LIS], int ha, int li);

