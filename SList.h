#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#define NAME_MAX 20
#define GENDER_MAX 2
#define TEL_MAX 13
#define ADDRESS_MAX 100
struct Person
{
	char name[NAME_MAX];
	char gende[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char address[ADDRESS_MAX];
};
typedef struct Person Persion;
typedef Persion SLTDateType;


//创建单链表
typedef struct SListNode
{
	SLTDateType n;
	struct SListNode* next;
}SLTNode;



//打印
void SLTPrint(SLTNode*phead);


//申请空间
SLTNode* SLTBuyNode(SLTDateType x);


//头插
void SLTPushFront(SLTNode**pphead,SLTDateType x );


//尾插
void SLTPushBack(SLTNode** pphead,SLTDateType x);

//头删
void SLTPopFront(SLTNode** pphead);

//尾删
void SLTPopBack(SLTNode** pphead);

//查找
SLTNode* SLTFind(SLTNode* phead, char x[NAME_MAX]);

//指定位置之前插入指定数据
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDateType x);

//特定位置之后插入指定数据
void SLTInsertBack(SLTNode**pphead,SLTNode* pos, SLTDateType x);

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);

//销毁链表
void SLTDestroy(SLTNode** pphead);