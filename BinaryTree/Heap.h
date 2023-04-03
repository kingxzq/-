#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void Swap(HPDataType* px, HPDataType* py);
void HeapInit(HP* hp);
void HeapDestroy(HP* hp);
void HeapPush(HP* hp, HPDataType x);
void HeapPop(HP* hp);
void HeapPrint(HP* hp);
bool HeadEmpty(HP* hp);
int HeapSize(HP* hp);