//	Question: Write a program that reverses the word in a sentence:
//	
//	Enter a sentence: you can cage a swallow can't you?
//	Reversal of sentence: you can't swallow a cage can you?
//	
//	The loo will stop at a period '.', question mark '?', or exclamation '!'

#include<stdio.h>

#define N 200	// Define N equal to 200 to limit the characters to 200

int main(void)
{
	char ch[N];
	char terminate;	// The program will stop getting more characters whenever '.', '.', '!' is typed
	int len;
	int i;
	int j;
	int k;
	
	//	Part 1. Storing the sentence into ARRAY

	printf("Enter a sentence: ");
	for (i = 0; i < N; i++)
	{
		ch[i] = getchar();
		if (ch[i] == '?' || ch[i] == '.' || ch[i] == '!' || ch[i] == '\n')
		{
			len = i;
			terminate = ch[i];
			break;
		}
	}

	//	Part 2. Using LOOP to print the reversal of sentence

	printf("Reversal of sentence: ");
	for (j = len - 1; j >= -1; j--)
	{
		if (j < 0 || ch[j] == ' ')
		{
			for (k = j + 1; k < len; k++)
			{
				printf("%c", ch[k]);;
			}
			
			if (j>=0)
			{
				printf("%c", ch[j]);;
				len = j;
			}
		}

	}

	//	Part 3. Printing the terminating character '.', '?', '!'

	printf("%c\n", terminate);
	
	getchar();getchar();
	return 0;
}