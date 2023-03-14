#include<stdio.h>
void main()
{
	float x,y;
	char ch;
	printf("Enter the initisal amount\n");
	scanf("\n%f",&x);
	printf("\n     Enter  \n a   |  for credit \n b   |  for balance\n c   |  for debit\n");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'a':
			printf("Enter the credit amount\n");
			scanf("%f",&y);
			x=x+y;
			printf("New Amount=%f",x);
			break;
		case 'c':
			printf("Enter the debit amount\n");
			scanf("%f",&y);	
					if(x>=y)
					{
						x=x-y;
						printf("New amount=%f",x);
					}
					else
					{
						printf("Insufficient amount in your account");
					}
					break;
				case 'b':
					printf("Amount in your account=%f",x);
					break;
				default:
					printf("choose correct option for operation");
	}
	
}
