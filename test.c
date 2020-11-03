//
// Created by galads on 03.11.2020.
//
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
//	printf("hey1\n");
    size_t i;
	size_t j;
	size_t r;
	size_t k;

	i = 0;
	k = 0;
	j = ft_strlen(src);
	while (dst[i] != '\0')
	      i++;
	if (dstsize >= -1u)
		return (j + i);
	r = (j + i);
	if (dstsize <= i)
		return (j + dstsize);
	dstsize -= i + 1;
	
	printf("+++++++++++++++++++++++++++++++++++++\n");
	printf("test print dst -> %d, dstsize = %ld, i = %ld\n", dst[i], dstsize, i);
	printf("test print src -> %s\n", src);

	printf("+++++++++++++++++++++++++++++++++++++\n");
	while ((dstsize) != 0 /*&& dstsize <= (ft_strlen(dst) + ft_strlen(src))*/)
	{
		dst[i] = src[k];
		i++;
		k++;
		dstsize--;
	}
	dst[i] = '\0';
	return (r);
}

int main()
{
    size_t *r1;
    char *r2;

    printf("============================test1=======================\n");
    char  s1[8] = "12";
    char  s2[8] = "abcde";

    char  s3[8] = "12";
    char  s4[8] = "abcde";

    char *orig[4];
    char *test[4];
	size_t var = 4;

    *orig = "abcd";
    *test = "abcd";

    printf("orig print return -> %lu\n",strlcat(s1, s2, var));

    printf("orig print buff dest -> %s\n", s1);
   // printf("orig print buff dest -> %s\n", strlcat())

	printf("test print return -> %lu\n",ft_strlcat(s3, s4, var));

    printf("test print buff dest -> %s\n", s3);


    printf("============================test2=======================\n");

    printf("strlcat -> %ld", (size_t)(ft_strlen("1234") + ft_strlen("abcd")));
}
// gcc test.c -lbsd
