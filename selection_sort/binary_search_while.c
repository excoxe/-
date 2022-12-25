#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary_search_while(int ptr[],int size,int target)
{
	int first = 0;
	int last = size - 1;
	int middle;

	while (first <= last)
	{
		middle = (first + last) / 2;
		if (ptr[middle] == target)
			return middle;
		else if (ptr[middle] < target)
			first = middle + 1;
		else
			last = middle - 1;
	}
	return -1;
}

int main()
{
	int list[] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };
	int size = sizeof(list) / sizeof(list[0]);
	int target;
	int index;

	scanf("%d", &target);

	index = binary_search_while(list,size,target);

	if (index == -1)
		printf("배열에 없습니다.\n");
	else
		printf("배열의 %d 인덱스에 있습니다.", index);
	return 0;
}