void	my_putchar(char c)
{
  write(1, &c, 1);
}





int     main(void)
{
  char print;

  print = 'a';
  my_putchar(print);
  my_putchar('\n');
  return(0);
}
