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


//����������
typedef struct SListNode
{
	SLTDateType n;
	struct SListNode* next;
}SLTNode;



//��ӡ
void SLTPrint(SLTNode*phead);


//����ռ�
SLTNode* SLTBuyNode(SLTDateType x);


//ͷ��
void SLTPushFront(SLTNode**pphead,SLTDateType x );


//β��
void SLTPushBack(SLTNode** pphead,SLTDateType x);

//ͷɾ
void SLTPopFront(SLTNode** pphead);

//βɾ
void SLTPopBack(SLTNode** pphead);

//����
SLTNode* SLTFind(SLTNode* phead, char x[NAME_MAX]);

//ָ��λ��֮ǰ����ָ������
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDateType x);

//�ض�λ��֮�����ָ������
void SLTInsertBack(SLTNode**pphead,SLTNode* pos, SLTDateType x);

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);

//��������
void SLTDestroy(SLTNode** pphead);