/**
 * *str_concat - Entry point
 *
 * @s1: char string
 *
 * @s2: char string
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
char *s3;

if (s1 == NULL || s2 == NULL)
return (NULL);

s3 = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

if (s3 == NULL)
return (NULL);

strcpy(s3, s1);
strcat(s3, s2);

return (s3);
}
