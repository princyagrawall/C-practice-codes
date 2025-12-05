#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int n;
    int flag = 1;
 
    printf("Enter the word you want to check if it is a palindrome: ");
    scanf("%s", str);
 
    n = strlen(str);
 
    printf("\nTotal characters in %s is %i\n", str, n);
 
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
 
    if (flag)
    {
        printf("The given word %s is a Palindrome\n", str);
    }
    else
    {
        printf("The given word %s is not aPalindrome\n", str);
    }
    return 0;
}
 
 