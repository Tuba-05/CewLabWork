#include<stdio.h>

// 4. Write a program in C to convert a decimal number to a binary number using functions.

int decimal_to_binary(int num)
{
  int dec = num,bin=0,rem=0,place=1;
  while(dec)
    {
        rem=dec%2;
        dec=dec/2;
        bin=bin + (rem*place);
        place=place*10;
    }
    return bin;
}
int main()
{
    printf("DECIMAL TO BINARY CONVERTER\n");
    int num;
    printf("Enter a DECIMAL number: ");
    scanf("%d",&num);
    printf("BINARY equivalent of %d is : %d", num, decimal_to_binary(num));
    return 0;
}
