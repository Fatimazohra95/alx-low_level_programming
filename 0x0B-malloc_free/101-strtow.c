#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 *word_len - Locates the index marking the end of te first
 *@str: The string to be searched.
 *
 *Return: The index marking the end of the initial word
 */
int word_len(char *str)
{
int i = 0, len = 0;

while (*(str + i) && *(str + i) != ' ')
{
len++;
i++;
}
return (len);
}

/**
 *count_words - Counts the number of word
 *@str: The string
 *
 *Return: The number of words containaed string.
 */

int count_words(char *str)
{
int i = 0, w = 0, l = 0;

for (i = 0; i < l; i++)
l++;

for (i = 0; i < l; i++)
{
if (*(str + i) != ' ')
{
w++;
i += word_len(str + i);
}
}
return (w);
}

/**
 *strtow - splites a string .
 *@str: the strinf
 *
 *Return: if str = NULL , str = "", or the function fail .
 */
char **strtow(char *str)
{
char **strings;
int i = 0, W, w, L, l;

if (str == NULL || str[0] == '\0')
return (NULL);

W = count_words(str);
if (W == 0)
return (NULL);

strings = malloc(sizeof(char *) * (W + 1));
if (strings == NULL)
return (NULL);

for (w = 0; w < W; w++)
{
while (str[i] == ' ')
i++;

L = word_len(str + i);

strings[w] = malloc(sizeof(char) * (L + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);

free(strings);
return (NULL);
}

for (l = 0; l < L; l++)
strings[w][l] = str[i++];

strings[w][l] = '\0';
}
strings[w] = NULL;

return (strings);
}
