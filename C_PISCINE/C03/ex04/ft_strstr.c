#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i  = 0;
  if (to_find[0] == '\0')
		return (str);
  while(*str != '\0')
  {
    j = 0;
    while(str[i + j] == to_find[j] && str[i + j != '\0'])
    {
      if(to_find[j + 1] == '\0')
        return(&str[i]);
      j++;
    }
    i++;
  }
}
int main ()
{
  char str[]= "HOLACARACOLA";
  char to_find[]= "CARACOLA";
  printf("%s\n", ft_strstr(str, to_find));

  return(0);
}