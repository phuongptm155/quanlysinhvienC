#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
#ifndef nhapnode_H
#define nhapnode_H
typedef struct Sinhvien{
		  int MSSV;
		  char Hoten[35];
		  int  nam;
		  int ngay;
		  int thang;
		  char Lop[10];
		  float diem;
		  
		  
		  }Sinhvien;
		  
typedef struct NODE{
		  Sinhvien data;
		  NODE *next;
		  NODE *parent;
		  }NODE, *pNODE;
typedef struct List{
		  NODE *dau;
		  NODE *cuoi;
		  }ListSV;
NODE *creatNode();
void creatList(ListSV *x);
void Nhap(NODE* x);
void themcuoi(List* x, NODE* t);
bool check(List* x, int t);
		  

#endif

