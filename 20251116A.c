#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b ;
	scanf("%d %d", &a, &b) ;
	if (a>=b) {
		for (int i=1; i<=a;i++){
			printf("HelloWorld\n") ;
		}
	}else {
		for (int i=1; i<=b;i++){
			printf("HelloWorld\n") ;
		}
	}
	system("pause") ;
	return 0 ;
	
}