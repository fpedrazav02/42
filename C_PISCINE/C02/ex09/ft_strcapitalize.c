#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int is_alphanumeric(char c)
{
  if(c >= 'a' && c <= 'z'  || c >= 'A' && c<= 'Z' || c >= 0 && c<= 9)
    return(1);
  return(0);
}

int is_lowercase(char c)
{
   if(c >= 'a' && c <= 'z' )
    return(1);
  return(0);
}

int is_uppercase(char c)
{
   if(c >= 'A' && c <= 'Z' )
    return(1);
  return(0);
}
char *ft_strcapitalize(char *str)
{
  int i;

  i = 1;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] -= 32;
  while(str[i] != '\0')
  {
    if(is_uppercase(str[i]) && is_alphanumeric(str[i - 1]))
      str[i] += 32;
    else if((!(is_alphanumeric)(str[i - 1])) && is_lowercase(str[i])) 
      str[i] -= 32;  
    i++;
  }
  return(str);
}
int main ()
{
  char src[]="HOLA";
  char dest[20]="caracola 3a aS";
  ft_strcapitalize(dest);
  printf("%s\n", dest);
  return (0);
}