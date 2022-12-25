#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int binary_search(int ptr[], int first, int last,int target)
{
	if (first > last)
		return -1;

	int middle = (last + first) / 2;
	if (ptr[middle] == target)
		return middle;
	else if (ptr[middle] < target)
		binary_search(ptr, middle + 1, last, target);
	else
		binary_search(ptr, first, middle - 1, target);
}

int main()
{
	int list[] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };
	int size = sizeof(list) / sizeof(list[0]);
	
	int target;
	int index;
	scanf("%d", &target);

	index = binary_search(list, 0, size - 1, target);
	if (index == -1)
		printf("배열에 없습니다.\n");
	else
		printf("배열의 %d 인덱스에 있습니다.", index);
	return 0;
}