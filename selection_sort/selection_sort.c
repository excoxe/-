#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int list[] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5,900, 800,700,600,50 };
	int size = sizeof(list) / sizeof(list[0]);
	int min_index = 0;
	int temp;

	for (int i = 0; i < size-1; i++)//size-1 ������ ���ĵǾ �Ϸ�(������ �Ѱ��� �ڵ����� ���� ū ���� ������)
	{
		min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (list[min_index] > list[j])
			{
				//���� ���� ���� ���� ��ġ�� �ε����� ����ϰ� ��ȯ�� �������� 1���� �����Ѵ�.
				min_index = j;
			}
		}
		temp = list[min_index];
		list[min_index] = list[i];
		list[i] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
	return 0;
}