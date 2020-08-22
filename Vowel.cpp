#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Enter the string to count vowel : ");
    char inp[200];
    gets_s(inp, 200);
    char vowel[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

    for (int i = 0; inp[i] != '\0'; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (inp[i] == vowel[j])
            {
                counter++;
            }
        }
    }
    if (counter >= 2) {
        printf("There're %d vowels", counter);
    }
    else { printf("There's %d vowel", counter); }
    
    return 0;
}