/*
 	Authors		:Felipe Corona
	Date		:January 13, 2015
	Description	:Lab 1
*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int power(int x, int y);

int power(int x, int y)
{
	if( y < 0)
	{
		return 0;
	}
	int result = 1;
	int i;
	for(i = 0; i < y; ++i)
	{
		result = result * x;
	}
	return result;
}

int strcat2(char*, char*);
char* numToStrOnes(int);
char* numToStrTens(int, int);
char* strAdder(char[], int);
void engNumToDec(char[]);
void decNumToEng(int);
void helper(char[]);
void helper(char temp[])
{
	char *subtoken;
	subtoken = strtok(temp, " ");
	while(subtoken != NULL)
	{
		printf("Subtoken: %s\n", (subtoken));
		subtoken = strtok(NULL, " ");
	}
}
void engNumToDec(char tempLine[])
{
	char *token;
	//char temp[100];
	token = strtok(tempLine, " ");
	int i = 0;
	while(token != NULL)
	{
		printf("Token:%s\n", token);
		token = strtok(NULL, ",");
		i++;
	}
		printf("Token outside of while: %s", token);
}
int strcat2(char* str1, char* str2)
{
	for(; *str1 != '\0'; str1++)
	{
	}
	while((*str1++ = *str2++)!='\0'){        
   	}
   	str2='\0';
   return 0;
}
char* strAdder(char tempname[], int input)
{
	char *temp;
	char *temp2;
	temp2 = numToStrOnes(input);
	temp = tempname;
	if(input > 0)
	{
		strcat2(temp, "-");
		strcat2(temp, temp2);
	}
	return temp;
}

	
char* numToStrOnes(int input)
{
	char *temp;
	switch(input)
	{
		case 0:
			break;
		case 1:
			temp = "One";
			break;
		case 2:
			temp = "Two";
			break;
		case 3:
			temp = "Three";
			break;
		case 4:
			temp = "Four";
			break;
		case 5:
			temp = "Five";
			break;
		case 6:
			temp = "Six";
			break;
		case 7:
			temp = "Seven";
			break;
		case 8:
			temp = "Eight";
			break;
		case 9:
			temp = "Nine";
			break;
		default:
			temp = "err";
	}
		return temp;
}

char* numToStrTens(int input, int input2)
{
	char *result;
	switch(input)
        {
                case 1:
                        switch(input2)
        		{
                		case 0:
					result = "Ten";
					break;
				case 1:
                        		result = "Eleven";
                        		break;
                		case 2:
                        		result = "Twelve";
                        		break;
                		case 3:
                        		result = "Thirteen";
                        		break;
                		case 4:
                        		result = "Fourteen";
                        		break;
                		case 5:
                        		result = "Fifteen";
                        		break;
                		case 6:
                        		result = "Sixteen";
                        		break;
                		case 7:
                        		result = "Seventeen";
                        		break;
                		case 8:
                        		result = "Eighteen";
                        		break;
                		case 9:
                        		result = "Nineteen";
                        		break;
                		default:
                        		result = "err";
					break;
        		}
                        break;
                case 2:
                        result = "Twenty";
                        break;
                case 3:
                        result = "Thirty";
                        break;
                case 4:
                        result = "Fourty";
                        break;
                case 5:
                        result = "Fifty";
                        break;
                case 6:
                        result = "Sixty";
                        break;
                case 7:
                        result = "Seventy";
                        break;
                case 8:
                        result = "Eighty";
                        break;
                case 9:
                        result = "Ninety";
                        break;
                default:
                        result = "err";
        }
	return result;

}
	
void decNumToEng(int num)
{
	int number;
	number = num;
	int a[100];

	int i = 0;
	int result = 1;
	while(result > 0)
	{
		result = (number % power(10, (i + 1))) / power(10, (i));
		if(result > 0)
		{	
			a[i] = result;
			i++;
		}
	}

	int k;
	for(k = i-1; k > 0; k--)
	{
                if(k > 1)
		{
			printf("%s ", numToStrOnes(a[k]));
		
		}
		if(k == 3)
		{
			printf("Thousand ");
		}
		else if(k == 2)
		{
			printf("Hundred ");
		}
		else if(k == 1)
		{
			printf("%s", numToStrTens(a[k], a[k-1]));
		}
		
	}
	if(a[1] > 1)
	{
		printf("-%s", numToStrOnes(a[0]));
	}
	printf("\n");
}
	
int main()
{
	decNumToEng(123);
	return 0;

}
	
