#include<stdio.h>
#define  N 14//瀹氫箟鏈€澶х殑鏁扮粍琛屽垪鏁帮紝鍥犱负閲囧彇浜岀淮鏁扮粍璁＄畻銆�
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
        
             /*杩欎竴琛屼富瑕佹槸鍦ㄨ緭鍑烘暟涔嬪墠鎵撲笂绌烘牸鍗犱綅锛岃杈撳嚭鐨勬暟鏇寸編瑙�*/
        for(j=1;j<=i;j++) 
        {
            printf("%6d",arr[i][j]);
        } /*j<=i鐨勫師鍥犳槸涓嶈緭鍑哄叾瀹冪殑鏁帮紝鍙緭鍑烘垜浠兂瑕佺殑鏁�*/
        printf("\n");  
    }

}
int main()
{
    int judge =  0;
    int line = 0;
    do
    {
        printf("鎵撳嚑琛岋紵锛燂紵(1-13)\n");
        scanf("%d",&line);
        judge = line > 0&& line < 13;
        switch (judge)
        {
        case 1:
            /* code */
            printf("寮€濮嬫墦鍗�%d琛岀殑鏉ㄨ緣涓夎\n",line);
            print(&line);
            break;
        
        case 0:
            printf("杈撳叆闈炴硶:\n");
            break;
        }
    }while(!judge);
    

    return 0;
}