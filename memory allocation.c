#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int *num = (int *)malloc(sizeof(int)*10);
    int i;
    for(i=0; i<10; i++)*(num+i) = i;
    for(i=0; i<10; i++)printf("%d,",*(num+i));


    p = num;

    p++; // p �ȷ|�ܡA���V�U�@�� 1

    printf("%d\n",p);

    printf("%d\n", (*p)++); // p �Ȥ��|�ܡA1��2

    for(i=0; i<10; i++)printf("%d,",*(num+i));
    printf("%d\n",p);

    printf("%d\n", ++(*p)); // p �Ȥ��|�ܡA2��3

    for(i=0; i<10; i++)printf("%d,",*(num+i));
    printf("%d\n",p);

    printf("%d\n", *(p++)); // p �ȷ|�ܡA���V�U�@�ӡA�A����

    for(i=0; i<10; i++)printf("%d,",*(num+i));
    printf("%d\n",p);

    printf("%d\n", *p++); //�n�� * �� ++���@�ӹB��l�u��

    for(i=0; i<10; i++)printf("%d,",*(num+i));
    printf("%d\n",p);
    free(num);
    return 0;
}
