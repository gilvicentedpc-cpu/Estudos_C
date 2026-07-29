unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int dest_len = 0;
  unsigned int src_len = 0;
  unsigned int j;


  while (dest[dest_len] != '\0' && dest_len < size)
    dest_len++;

  while (src[src_len] != '\0')
    src_len++;

  if (size <= dest_len)
    return (size + src_len);

  j = 0;
  while (src[j] != '\0' && dest_len + j < size - 1)
  {
    dest[dest_len + j] = src[j];
    j++;
  }
  dest[dest_len + j] = '\0';
  return (dest_len + src_len);
}

int main(void)
{
  char			dest[15] = "42 ";
  char			*src = "Sao Paulo";
  unsigned int	ret;

  ret = ft_strlcat(dest, src, 15);

  return (ret );
}
