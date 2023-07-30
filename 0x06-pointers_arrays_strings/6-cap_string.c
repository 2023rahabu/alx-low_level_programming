#include "main.h"
/**
* cap_string - function that capitalize all words of a string
* @str: parameter
* Return: 0 success
*/
char *cap_string(char *str)
{
int i;
int capitalize_next;

i = 0;
capitalize_next = 1;
/*flag to indicate if the next character should be capitalize*/
if ((str[i] >= 97 && str[i] <= 122))
{
str[i] -= 32;
}
while (str[i] != '\0')
{
/*capitalize next character if flag set and it's lower case*/
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' ||
str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"'
|| str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
else
{
/*capitalize next character if flag set and it's lower case*/
if (capitalize_next && str[i] >= 97 && str[i] <= 122)
{
str[i] -= 32;
capitalize_next = 0; /*reset flag after capitalizing*/
}
else
{
capitalize_next = 0; /*reset flag if it;s capital already*/
}
}
i++;/* move to next char iteration*/
}
return (str); /*return modified strin*/
}
