#include"contact.h"


int main()
{
	
	SLTNode* phead =NULL;
	int input = 0;
	do
	{
		printf("***1.增加联系人  2.删除联系人***\n");
		printf("***3.查找联系人  4.更改联系人***\n");
		printf("***5.打印联系人  0.退出      ***\n");
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
				printf("没找到\n");
			}
			else
				printf("找到了\n");
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

