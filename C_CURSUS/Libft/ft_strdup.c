 #include<stdio.h>
 #include<stdlib.h>
 
 int	ft_strlen( const char *str)
 {
	int i;

	i = 0;
	while(*str++)
		i++;
	return (i);
 }
 
 char *ft_strdup(const char *s)
 {
	int s_l;
	char *dup;
	int i; 

	i = 0;
	s_l = ft_strlen(s);
	if (!(dup = (char*)malloc(sizeof(char)* s_l + 1)))
		return (NULL);
	while(i <= s_l)
	{
		dup[i] = s[i];
		i++;
	}

	return (dup);
 }

 int main ()
 {
	char str[]="holacaracola";
	
	printf("%s", ft_strdup(str));
	return (0);
 }