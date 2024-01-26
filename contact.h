#include"SList.h"


//打印联系人
void ContactPrint(SLTNode*phead);

//增加联系人
void ContactAdd(SLTNode**pphead);

//删除联系人
void ContactDestroy(SLTNode** pphead);

//查找联系人
SLTNode* ContactFind(SLTNode*phead);

//更改联系人
void ContactChange(SLTNode** pphead);
