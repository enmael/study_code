#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5


int data[MaxCount]; // -99로 밀 예정
int count = 0;
int* arr = new int[MaxCount];

void Clear();   //자료를 지워주는 함수
int Count();	//비어 있는지 아닌지 알려주는 함수
bool IsEmpty(); //비어 있는지 아닌지 알려주는 함수
bool Push(int _data);
void Graph();


int Pop();


