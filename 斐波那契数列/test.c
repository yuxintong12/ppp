#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ�����
int my_strlen(char* string)
{
	char* str = string;
	while (*string++ != '\0');
	return (string - str - 1);//ָ��ļ��������Ԫ�ظ����ǰ���������ָ��ָ���Ԫ������������ֱ�Ӿͼ�������ǰ���\0������Ҫ��1
}
//�ݹ�汾
//int my_strlen(char* string)/*�����ǵݹ��ʵ�ַ����������ò�ͬ�ķ���ʵ��һ��
//							���磺ָ�������ѭ������������һ��Ҫ���ָ�봫������
//							��ַ�ԼӺ�+=1һ��
//							*/
//{
//	if (*string != '\0')
//	{
//		return 1 + my_strlen(string + 1);
//	}
//	else
//		return 0;
//}
//�ǵݹ�汾
//void reverse_string(char* string)
//{
//	char * left = string;
//	char* right = string + my_strlen(string)-1;//���һ��Ԫ�ص��±�������Ԫ�ظ�����һ
//	while (left < right)
//	{
//		char tem = 0;
//		tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//
//	}
//}
//�ݹ�汾
void reverse_string(char* string)//����˼�������������ֵ����˼������
{
	char* left = string;//��¼��λʱ������ߵĵ�ַ
	char* right = string + my_strlen(string) - 1;/*��¼��λʱ�ұߵĵ�ַ���߽���������γ���ÿ�ε�������
													���м俿£��Ч��*/
	char tmp = *left;//�ñ������汻���ǵ�ֵ
	*left = *right;//�����⽻����ֵ���и���
	*right = '\0';//Ϊ�ж�����my_strlen�Ľ�β���ź����ġ��ݡ��ĵ���rightҲ�ڲ��ϱ仯
				//����strlen���յ�Ҳ����ǰ�ƶ�ֱ��ĳ��ʱ������ߵ��غϻ����ǽ�������
	            //�ݹ�����������������
	if (my_strlen(string) > 1)/*
								1.�����ҽ����ʱ��my_strlen���յ���ƶ�������߿���ʹ��my_strlen
		                       ����ֵ�ͻ����-1
							   2.�������غϵ�ʱ��my_strlen�������յ��غϷ���ֵ�õ�1
							   */
		reverse_string(string + 1);//���ܴ�ָ��++���õ�++���Ƚ�ָ�봫���ټӼӣ�����Ҳ�����ú���++��ʹ����������Ӧ�����仯���Ծ�����д
	*right = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
