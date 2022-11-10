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
void print(char ch[HA][LI], int ha, int li);
void put(char ch[HA][LI], int ha, int li);
void play_remove(char de[HA][LI], char show[HA][LI], int ha, int li);