#include <stdio.h>

int tower(int n, char t1, char t2, char t3);

int main() {
    int n;
    printf("有幾個盤子?");
    scanf("%d", &n);
    printf("\n--- 搬動過程如下 ---\n");
    tower(n, 'A', 'B', 'C');
    return 0;
}
int tower(int n, char t1, char t2, char t3) {  //(幾盤 起點 中繼點 終點)
    if (n == 1) {
        printf("將圓盤 1 從 %c 移到 %c\n", t1, t3); //不能寫A, B
        return 0; //跳出函式
    }
    tower(n - 1, t1, t3, t2); //將小盤從t1移到t2
    printf("將圓盤 %d 從 %c 移到 %c \n", n, t1, t3);  //將最大盤從t1移到t3
    tower(n - 1, t2, t1, t3);  //將小盤從t2移到t3
    return 0;
}   