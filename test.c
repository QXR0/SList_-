#include"contact.h"


int main()
{
	
	SLTNode* phead =NULL;
	int input = 0;
	do
	{
		printf("***1.������ϵ��  2.ɾ����ϵ��***\n");
		printf("***3.������ϵ��  4.������ϵ��***\n");
		printf("***5.��ӡ��ϵ��  0.�˳�      ***\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ContactAdd(&phead);
			break;
		case 2:
			ContactDestroy(&phead);
			break;
		case 3:
			if (ContactFind(phead) == NULL)
			{
				printf("û�ҵ�\n");
			}
			else
				printf("�ҵ���\n");
			break;
		case 4:
			ContactChange(&phead);
			break;
		case 5:
			ContactPrint(phead);
			break;
		}
	} while (input);
	return 0;
}

