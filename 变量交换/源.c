#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������������������
 void change(int * pa,int * pb)
 {
	 *pa = *pa ^ *pb;
	 *pb = *pb ^*pa;
	 *pa = *pa  ^*pb;
 }
//�������������Ӽ���
 /*void change(int * pa,int * pb)
 {
	 *pa = *pa + *pb;
	 *pb = *pa - *pb;
	 *pa = *pa - *pb;
 } */
//��������������
//void change(int* pa, int* pb)
//{
//	int te = 0;//����������ʱ����
//	te = *pa;//��a������ֵ������te��
//	*pa = *pb;//��b��ֵ����a��
//	*pb = te;//��te�д����a��ֵ����b��
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d,%d", &a, &b);
	change(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}