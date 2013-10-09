/*
 * =====================================================================================
 *
 *       Filename:  Fun_N.c
 *
 *    Description:  
 *        实现函数计算1到n的和
 *        不能出现乘除操作，位操作,if-else, for, while, switch ,? : 三目操作符	
 *
 *        Version:  1.0
 *        Created:  2013年09月05日 15时17分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhu Junjie (zjj), zhujunjie@hikvision.com.cn
 *        Company:  Hikvision
 *
 * =====================================================================================
 */
#include<stdio.h>


//本质思想就是采用递归的方案，将 n = 0的情况通过与运算作为递归结束
int sum1(int n, int *pSum)
{
	n && sum1(n-1, pSum);
	return *pSum += n;
}

//普通递归方案
int sum2(int n)
{
	return (n == 1) ? 1 : (n + sum2(n - 1)); 
}


int main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("<usage> Please input %s number\n", argv[0]);
	}

	int number = atoi(argv[1]);
	int iSum1 = 0;
	int iSum2 = 0;

	printf("The sum1 of 1 to %d is %d \n", number, sum1(number, &iSum1));

	printf("The sum2 of 1 to %d is %d \n", number, sum2(number));

	return 1;
}


