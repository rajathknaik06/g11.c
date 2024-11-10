/*Alice and Bob are communicating by sending numbers to each other. Alice sends Bob a number, but before sending it, she performs a bitwise AND operation with the number 7.



So, write a program that performs bitwise AND between 7 and the number given by Alice and prints the result.

Input format :
The input consists of an integer n, representing the number given by Alice.

Output format :
The output prints the resulting integer derived after the bitwise AND operation.*/


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int result = n & 7;
    printf("%d\n",result);    //2
    
    return 0;
}
