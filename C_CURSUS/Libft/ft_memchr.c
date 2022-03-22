#include<stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
  size_t  i;

  if (!str)
    return (NULL);
  i = 0;
  while(i < n)
  {
    if (*(unsigned char*)(str + i) == (unsigned char)c);
      return ((void*)(str + i));
    i++;
  }
  return (NULL);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char c = 'w';
  

   printf("%p\n", ft_memchr(str, c, 2));
   

   return(0);
}