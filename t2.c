#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	// int i = pow(2,5);
	char a[50];
	scanf("%s",a);
	printf("%d",strlen(a));
	return 0;
}


// x[0]=x[0]+1
// x is $s1



// try:
// ll $t0,($s1)
// addi $t0,$t0,1
// sc $t0,($s1)
// beq $t0,$0,try