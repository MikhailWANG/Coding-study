//Decimal to Hexadecimal Converter//
#include<stdio.h>
#include<stdlib.h>
    int main(){
    int num,tem,i=0;
    char hex[101];
    scanf("%d",&num);
    while(num > 0){
        int reminder = num % 6;
        hex[i++] = reminder+'0';
        num = num /6;
    }
    for(int j = i-1;j>=0;j--){
        printf("%c",hex[j]);
    }// We can use the loop to traverse the elements in array//

    system("pause");
    return 0;

}
