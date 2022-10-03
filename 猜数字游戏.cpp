/*
猜数字游戏是令系统随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，并提示大了(“Toobig)，还是小了(“Toosmall)，相等表示猜到了。如果猜到，则结束程序。程序还要求统计猜的次数如果1次猜出该数，提示“Bingo!”;如果3次以内猜到该数，则提示“LuckyYou!”;如果超过3次但是在N(>3)次以内(包括第次)猜到该数，则提示“Good Guess!”;如果超过N次都没有猜到，则提示“GameOver”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“GameOver”，并结束程序。
输入格式:
输入第一行中给出2个不超过100的正整数，分别是系统产生的随机数、以及猜测的最大次数N。随后每行给出一个用户的输入，直到出现负数为止。
输出格式:
在一行中输出每次猜测相应的结果，直到输出猜对的结果或“GameOver”则结束。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number,n;/*int number(n)只是定义了一个变量n*/
	int input;/*int输入*/
	int finished=0;/*逻辑非，就是true变false，false变true*/
	int count=0;/*定义一个int型变量count，并且赋初值为0*/
	scanf("%d %d",&number,&n);/*%d是格式说明，说明输入的是一个十进制数，&是取址运算符，&num1表示从键盘输入的值赋值给num1这个变量*/
	do
	{
		scanf("%d",&input);
		count++;/*cnt在C语言中的意思是C语言中当需要在程序中计数时为了语义清晰会使用cnt变量名*/
		if(input<0)
		{
			printf("Game over\n");
			finished=1;
		}
		else if (input>number)
		{
			printf("too big\n");
		}
		else if(input<number)
		{
			printf("too small\n");
		}
		else
		{
			if(count==1)
			{
				printf("Bingo!\n");
			}
			else if(count<=3)
			{
				printf("Lucky you!\n");
			}
			else
			{
				printf("Good guess!\n");
			}
			finished=1;/*finished其实代表的不止0还有可能是其他数。一把情况下，0在c语言中代表的含义比较多容易产生歧义，而且如果都用0代替的话一方面我们不知道0具体代表什么含义，另一方面就是返回0还有可能是null，系统辨别不了！*/
		}
		if(count==n)/*==”是判断符号，c等于N时，c=='N'语句执行完后为1,所以总的来说就是c等于'N'或者'n'时，括号中的语句为真，那么执行if下的指令语句*/
		{
			if(!finished)
			{
				printf("Game over\n");
				finished=1;
			}
		}
	}
	while(!finished);
	return 0;
}



