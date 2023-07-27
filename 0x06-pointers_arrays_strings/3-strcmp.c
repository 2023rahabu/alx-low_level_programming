#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: left string
 * @s2: right string
 * Return: 0 if string match 1 s1 greater than s2 -1 s1 less than s2
 */
int _strcmp(char *s1, char *s2)
{
    int i,j;

    j=0;
    i=0;

      if (s1[i] < s2[j])
      {
        return (-15);
      }
      else if (s1[i] > s2[j])
      {
        return (15);
      }
      else
        return (0);
}
