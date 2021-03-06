/*
** my_strncmp.c for my_strncmp in /home/arbona/CPool/CPool_Day06
** 
** Made by Thomas Arbona
** Login   <arbona@epitech.net>
** 
** Started on  Mon Oct 10 10:23:27 2016 Thomas Arbona
** Last update Tue Oct 11 14:39:43 2016 Thomas Arbona
*/

int	my_strlen(char *str);

int	my_strncmp(char *s1, char *s2, int n)
{
  int	iterator;

  iterator = 0;
  while ((n < 0 || iterator < n)
	 && s1[iterator] != '\0'
	 && s2[iterator] != '\0')
    {
      if (s1[iterator] != s2[iterator])
	return (s1[iterator] - s2[iterator]);
      iterator += 1;
    }
  if (iterator != n)
    return (s1[iterator] - s2[iterator]);
  return (0);
}
