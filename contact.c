
#include"contact.h"

//��ӡ��ϵ��
void ContactPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("������%s\n", phead->n.name);
		printf("�Ա�%s\n", phead->n.gende);
		printf("���䣺%d\n", phead->n.age);
		printf("�绰��%s\n", phead->n.tel);
		printf("סַ��%s\n", phead->n.address);
		phead = phead->next;
	}
}



//������ϵ��
void ContactAdd(SLTNode** pphead)
{
	Persion contact;
	printf("���������֣�\n");
	scanf("%s", contact.name);
	printf("�������Ա�\n");
	scanf("%s", contact.gende);
	printf("���������䣺\n");
	scanf("%d", &contact.age);
	printf("������绰��\n");
	scanf("%s", contact.tel);
	printf("�������ַ��\n");
	scanf("%s", contact.address);
	
	SLTPushBack(pphead,contact);
}

//ɾ����ϵ��
void ContactDestroy(SLTNode** pphead)
{
	printf("������Ҫɾ������ϵ������\n");
	char name[NAME_MAX];
	scanf("%s", name);
	if ((SLTFind(*pphead, name)) != NULL)
	{
		SLTErase(pphead,SLTFind(*pphead, name));
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}

	

}

//������ϵ��
SLTNode* ContactFind(SLTNode* phead)
{
	printf("������Ҫ���ҵ���ϵ������\n");
	char name[NAME_MAX];
	scanf("%s", name);
	
	return SLTFind(phead, name);

}

//������ϵ��
void ContactChange(SLTNode** pphead )
{
	printf("������Ҫɾ������ϵ������\n");
	char name[NAME_MAX];
	scanf("%s", name);
	if ((SLTFind(*pphead, name)) != NULL)
	{
		SLTNode* pur = SLTFind(*pphead, name);
		printf("������ĺ��������\n");
		scanf("%s", pur->n.name);
		printf("����Ҫ�����Ա�\n");
		scanf("%s", pur->n.gende);
		printf("������Ҫ���ĵ����䣺\n");
		scanf("%d", &pur->n.age);
		printf("����Ҫ���ĵ绰��\n");
		scanf("%s", pur->n.tel);
		printf("����Ҫ����סַ��\n");
		scanf("%s", pur->n.address);
		printf("���ĳɹ�\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
}