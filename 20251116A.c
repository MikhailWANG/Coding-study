//Enter two numbers a and b,and print "helloworld" max{a,b} times.//
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
	}//We can use the for loop to print something many times.//
	system("pause") ;
	return 0 ;
	

}
