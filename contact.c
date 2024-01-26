
#include"contact.h"

//打印联系人
void ContactPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("姓名：%s\n", phead->n.name);
		printf("性别：%s\n", phead->n.gende);
		printf("年龄：%d\n", phead->n.age);
		printf("电话：%s\n", phead->n.tel);
		printf("住址：%s\n", phead->n.address);
		phead = phead->next;
	}
}



//增加联系人
void ContactAdd(SLTNode** pphead)
{
	Persion contact;
	printf("请输入名字：\n");
	scanf("%s", contact.name);
	printf("请输入性别：\n");
	scanf("%s", contact.gende);
	printf("请输入年龄：\n");
	scanf("%d", &contact.age);
	printf("请输入电话：\n");
	scanf("%s", contact.tel);
	printf("请输入地址：\n");
	scanf("%s", contact.address);
	
	SLTPushBack(pphead,contact);
}

//删除联系人
void ContactDestroy(SLTNode** pphead)
{
	printf("请输入要删除的联系人姓名\n");
	char name[NAME_MAX];
	scanf("%s", name);
	if ((SLTFind(*pphead, name)) != NULL)
	{
		SLTErase(pphead,SLTFind(*pphead, name));
		printf("删除成功\n");
	}
	else
	{
		printf("没找到\n");
	}

	

}

//查找联系人
SLTNode* ContactFind(SLTNode* phead)
{
	printf("请输入要查找的联系人姓名\n");
	char name[NAME_MAX];
	scanf("%s", name);
	
	return SLTFind(phead, name);

}

//更改联系人
void ContactChange(SLTNode** pphead )
{
	printf("请输入要删除的联系人姓名\n");
	char name[NAME_MAX];
	scanf("%s", name);
	if ((SLTFind(*pphead, name)) != NULL)
	{
		SLTNode* pur = SLTFind(*pphead, name);
		printf("输入更改后的姓名：\n");
		scanf("%s", pur->n.name);
		printf("输入要更改性别：\n");
		scanf("%s", pur->n.gende);
		printf("请输入要更改的年龄：\n");
		scanf("%d", &pur->n.age);
		printf("输入要更改电话：\n");
		scanf("%s", pur->n.tel);
		printf("输入要更改住址：\n");
		scanf("%s", pur->n.address);
		printf("更改成功\n");
	}
	else
	{
		printf("没找到\n");
	}
}