#include <stdio.h>
int main()
{
    int dias, kms;
    scanf("%d %d", &dias, &kms);
    if(kms>dias*100)
        printf("%d.00", ((dias*90)+((kms-(dias*100))*12)));
    else
        printf("%d.00", (dias*90));
    return 0;
}