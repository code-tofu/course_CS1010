/*
Lecture 1 Example 1
Determine if a given word is a palindrome
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h> //to use bool

int main()
{
char userWord[64];
bool isPalindrome = true;
int wordLength = 0,i = 0;

//assume max user word is maximum of 64 characters long

// read in word to evaluate
    printf("Please insert word to test if palindrome:");
    scanf("%s",userWord);
    wordLength = strlen(userWord);
    printf("%d\n",wordLength);
    //printf("You have entered %s",userWord); //debug check.

for ( i = 0; i < (wordLength/2 + 1); i++)
{
    printf("Comparing %d %d \t",i,(wordLength-i));
    printf("Comparing %c %c \n",userWord[i],userWord[wordLength-1-i]);
    if (userWord[i] != userWord[wordLength-1-i])
        {
            printf("False\n"); //debug check
            printf("%s is not a Palindrome",userWord);
            isPalindrome = false;
            break;
        }
    printf("True \n");//debug check 
}


if (isPalindrome == true)
{
    printf("%s is a Palindrome\n",userWord);
}

    return 0;
}

/* NOTES:
Note that length of string vs zero index i.e. if string length is 10, indexes run from 0 to 9

Note that you only need to compare half the string

*/

/*

Wrong Logic:
    while (isPalindrome == true)
    {
        if (userWord[i] == userWord[wordLength-1-i])
        {
            printf("Comparing %d %d \t",i,(wordLength-i));
            printf("Comparing %c %c \t",userWord[i],userWord[wordLength-1-i]);
            printf("True \n");
            i++;
        }
        else
        {
            printf("%s is not a Palindrome",userWord);
            isPalindrome = false;
            break;
        }
    }
*/