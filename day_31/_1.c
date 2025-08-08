#include <stdio.h>
int main()
{
    int a = 10;

    printf("*p = %p\n",&a);
    //整型a的地址是00000000005FFECC 00000000005FFECd 00000000005FFECe 00000000005FFECf，打印最小地址  打印地址占位符是p
    printf("*p + 1 = %p\n",&a+1);  
    
    return 0;



}