#include<stdio.h>
#include<string.h>
void main()
{
	
	int i,j,temp;
	char temp1[30];
	struct item
	{
		int item_code;
		char item_name[30];
	}a[7];
	printf("Enter the item code and item name");
	for(i=0;i<7;i++)
	{
		scanf("%d %s",&a[i].item_code,a    [i].item_name);
	}
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(a[i].item_code>a[j].item_code)
			{
				temp=a[i].item_code;
				a[i].item_code=a[j].item_code;
				a[j].item_code=temp;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(strcmp(a[i].item_name,a[j].item_name)<0)
			{
				strcpy(temp1,a[i].item_name);
				strcpy(a[i].item_name,a[j].item_name);
				strcpy(a[j].item_name,temp1);
			}
		}
	}
	printf("Item_Code \t\t\t Item_Name");
	for(i=0;i<7;i++)
	{
		printf("\n");
		printf("%d \t\t %s",a[i].item_code,a[i].item_name);
	}

}
