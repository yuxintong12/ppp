#include<stdio.h>
#define  N 14//定义朢�大的数组行列数，因为采取二维数组计算〄1�7
void print(int * line)
{
    int arr[N][N] = {0};
    int i= 0;
    int j =0;
    for(i = 1;i <= *line;i ++)
    {
        arr[i][1] = arr[i][i] = 1;
    }
    for(i = 3;i <= *line;i ++)
    {
        for(j = 2;j <= i - 1;j ++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for(i = 1;i <= *line;i ++)
    {
        for(j=1;j<=*line-i;j++)
        {
            printf("   "); 
        }
        
             /*这一行主要是在输出数之前打上空格占位，让输出的数更美规1�7*/
        for(j=1;j<=i;j++) 
        {
            printf("%6d",arr[i][j]);
        } /*j<=i的原因是不输出其它的数，只输出我们想要的敄1�7*/
        printf("\n");  
    }

}
int main()
{
    int judge =  0;
    int line = 0;
    do
    {
        printf("打几行？？？(1-13)\n");
        scanf("%d",&line);
        judge = line > 0&& line < 13;
        switch (judge)
        {
        case 1:
            /* code */
            printf("弢�始打卄1�7%d行的杨辉三角\n",line);
            print(&line);
            break;
        
        case 0:
            printf("输入非法:\n");
            break;
        }
    }while(!judge);
    

    return 0;
}