#include"SList.h"

//打印
void SLTPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("->%d", phead->n);
		phead = phead->next;
	}
}


//申请空间
SLTNode* SLTBuyNode(SLTDateType x)
{
	SLTNode*phead=(SLTNode*)malloc(sizeof(SLTNode));
	assert(phead);
	phead->n = x;
	phead->next = NULL;
	return phead;

}


//头插
void SLTPushFront(SLTNode** pphead,SLTDateType x)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		*pphead = SLTBuyNode(x);
	}
	else
	{
		SLTNode* tmp = *pphead;
		*pphead = SLTBuyNode(x);
		(*pphead)->next = tmp;
	}
}

//尾插
void SLTPushBack(SLTNode** pphead,SLTDateType x)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		*pphead = SLTBuyNode(x);
	}
	else
	{
		SLTNode* pur = *pphead;
		while (pur->next)
		{
			pur = pur->next;
		}
		pur->next = SLTBuyNode(x);
	}

}


//头删
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		SLTNode* pur = *pphead;
		*pphead=NULL;
		free(pur);
	}
	else
	{
		SLTNode* pur;
		pur = *pphead;
		(*pphead) = (*pphead)->next;
		free(pur);
	}
}

void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);
	assert(pphead);
	SLTNode* pur = *pphead;
	while (pur->next->next)
	{
		pur=pur->next;
	}
	
	free(pur->next);
	pur->next= NULL;
}


//查找
SLTNode* SLTFind(SLTNode* phead,char name[NAME_MAX])
{
	assert(phead);
	assert(phead);
	SLTNode *pur = phead;
	while (pur)
	{
		if (strcmp(pur->n.name ,name)==0)
		{
			return pur;
		}
		else
			pur = pur->next;
	}
	return NULL;
}

//指定位置之前插入特定数据
void SLTInsertFront(SLTNode** pphead, SLTNode* pos, SLTDateType x)
{
	if ((*pphead) == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* pur = *pphead;
		while (pur->next != pos)
		{
			pur = pur->next;
		}
		SLTNode *newnode=SLTBuyNode(x);
		newnode->next = pur->next;
		pur->next = newnode;
	}
}

//指定位置之后插入指定数据
void SLTInsertBack(SLTNode **pphead,SLTNode* pos, SLTDateType x)
{
	if (pos->next == NULL)
	{
		SLTPushBack(pphead,x);
	}
	else
	{
		SLTNode* newnode = SLTBuyNode(x);
		newnode->next = pos->next;
		pos->next=newnode;
	}
}


//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else if (pos->next == NULL)
	{
		SLTPopBack(pphead);
	}
	else
	{
		SLTNode* pre = *pphead;
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		pre = pos->next;
		free(pos);
	}
}

//删除Pos之后的节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	pos->next = pos->next->next;
	free(pos->next);

}
void SLTDestroy(SLTNode** pphead)
{
	SLTNode* pur1 = (*pphead);
	SLTNode* pur2 = (*pphead)->next;
	*pphead = NULL;
	while (pur2)
	{   
		
		free(pur1);
		pur1 = pur2;
		pur2 = pur2->next;
	}
	free(pur1);
}