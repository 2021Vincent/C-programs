#include<stdio.h>
int fun(int a,int b,int c){
    return 0;
}
int main(void){
    int i=0,j=0;
    char str[20];//�w�q�@�ӳ̤j���׬�19�A�����O'\0'���r���}�C���x�s�r��
    printf("�п�J�@�Ӧr��G");
    fgets(str,7,stdin);//�q��J�ystdin�Y��J�w�İϤ�Ū��7�Ӧr����r���}�Cstr��
    printf("%s",str);

    return 0;
}
