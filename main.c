/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 23:05:38 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/28 15:14:32 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

void	ft_isalpha_test(void);
void	ft_isdigit_test(void);
void	ft_isalnum_test(void);
void	ft_isascii_test(void);
void	ft_isprint_test(void);
void	ft_strlen_test(void);
void	ft_toupper_test(void);
void	ft_tolower_test(void);
void	ft_strlcpy_test(void);
void	ft_strlcat_test(void);
void	ft_strncmp_test(void);
void	ft_strchr_test(void);
void	ft_strrchr_test(void);
void	ft_memset_test(void);
void	ft_bzero_test(void);
void	ft_memcpy_test(void);
void	ft_memmove_test(void);
void	ft_memchr_test(void);

int	main(void)
{
	printf("=== ft_isalpha_test: ===\n");
	ft_isalpha_test();

	printf("\n=== ft_isdigit_test: ===\n");
	ft_isdigit_test();

	printf("\n=== ft_isalnum_test: ===\n");
	ft_isalnum_test();

	printf("\n=== ft_isascii_test: ===\n");
	ft_isascii_test();

	printf("\n=== ft_isprint_test: ===\n");
	ft_isprint_test();

	printf("\n=== ft_strlen_test: ===\n");
	ft_strlen_test();

	printf("\n=== ft_toupper_test: ===\n");
	ft_toupper_test();

	printf("\n=== ft_tolower_test: ===\n");
	ft_tolower_test();

	printf("\n=== ft_strlcpy_test: ===\n");
	ft_strlcpy_test();

	printf("\n=== ft_strlcat_test: ===\n");
	ft_strlcat_test();

	printf("\n=== ft_strncmp_test: ===\n");
	ft_strncmp_test();

	printf("\n=== ft_strchr_test: ===\n");
	ft_strchr_test();

	printf("\n=== ft_strrchr_test: ===\n");
	ft_strrchr_test();

	printf("\n=== ft_memset_test: ===\n");
	ft_memset_test();

	printf("\n=== ft_bzero_test: ===\n");
	ft_bzero_test();

	printf("\n=== ft_memcpy_test: ===\n");
	ft_memcpy_test();

	printf("\n=== ft_memmove_test: ===\n");
	ft_memmove_test();

	printf("\n=== ft_memchr_test: ===\n");
	ft_memchr_test();
	return (0);
}

void	ft_isalpha_test(void)
{
	int	var1 = 'A';
	int	var2 = '2';
	int	var3 = '\t';
	int	var4 = ' ';

	if(ft_isalpha(var1) && isalpha(var1))
		printf("var1 = |%c| Alphabet\n", var1);
	else
		printf("var1 = |%c| Not\n", var1);

	if(ft_isalpha(var2) && isalpha(var2))
		printf("var2 = |%c| Alphabet\n", var2);
	else
		printf("var2 = |%c| Not\n", var2);

	if(ft_isalpha(var3) && isalpha(var3))
		printf("var3 = |%c| Alphabet\n", var3);
	else
		printf("var3 = |%c| Not\n", var3 );

	if(ft_isalpha(var4) && isalpha(var4))
		printf("var4 = |%c| Alphabet\n", var4);
	else
		printf("var4 = |%c| Not\n", var4 );
}

void	ft_isdigit_test(void)
{
	int	var1 = '0';
	int	var2 = 0;
	int	var3 = 49;
	int	var4 = ' ';

	if(ft_isdigit(var1) && isdigit(var1))
		printf("var1 = |%c| Digit\n", var1);
	else
		printf("var1 = |%c| Not\n", var1);

	if(ft_isdigit(var2) && isdigit(var2))
		printf("var2 = |%c| Digit\n", var2);
	else
		printf("var2 = |%c| Not\n", var2);

	if(ft_isdigit(var3) && isdigit(var3))
		printf("var3 = |%c| Digit\n", var3);
	else
		printf("var3 = |%c| Not\n", var3);

	if(ft_isdigit(var4) && isdigit(var4))
		printf("var4 = |%c| Digit\n", var4);
	else
		printf("var4 = |%c| Not\n", var4);
}

void	ft_isalnum_test(void)
{
	int	var1 = '0';
	int	var2 = 0;
	int	var3 = 97;
	int	var4 = ' ';

	if(ft_isalnum(var1) && isalnum(var1))
		printf("var1 = |%c| Alphabet or Digit\n", var1);
	else
		printf("var1 = |%c| Not\n", var1);

	if(ft_isalnum(var2) && isalnum(var2))
		printf("var2 = |%c| Alphabet or Digit\n", var2);
	else
		printf("var2 = |%c| Not\n", var2);

	if(ft_isalnum(var3) && isalnum(var3))
		printf("var3 = |%c| Alphabet or Digit\n", var3);
	else
		printf("var3 = |%c| Not\n", var3);

	if(ft_isalnum(var4) && isalnum(var4))
		printf("var4 = |%c| Alphabet or Digit\n", var4);
	else
		printf("var4 = |%c| Not\n", var4);
}

void	ft_isascii_test(void)
{
	int	var1 = 127;
	int	var2 = 0;
	int	var3 = 97;
	int	var4 = 200;

	if(ft_isascii(var1) && isascii(var1))
		printf("var1 = |%c| Is ascii\n", var1);
	else
		printf("var1 = |%c| Not\n", var1);

	if(ft_isascii(var2) && isascii(var2))
		printf("var2 = |%c| Is ascii\n", var2);
	else
		printf("var2 = |%c| Not\n", var2);

	if(ft_isascii(var3) && isascii(var3))
		printf("var3 = |%c| Is ascii\n", var3);
	else
		printf("var3 = |%c| Not\n", var3);

	if(ft_isascii(var4) && isascii(var4))
		printf("var4 = |%c| Is ascii\n", var4);
	else
		printf("var4 = |%c| Not\n", var4);
}

void	ft_isprint_test(void)
{
	int	var1 = 50;
	int	var2 = 0;
	int	var3 = 126;
	int	var4 = 200;

	if(ft_isprint(var1) && isprint(var1))
		printf("var1 = |%c| Printable\n", var1);
	else
		printf("var1 = |%c| Not\n", var1);

	if(ft_isprint(var2) && isprint(var2))
		printf("var2 = |%c| Printable\n", var2);
	else
		printf("var2 = |%c| Not\n", var2);

	if(ft_isprint(var3) && isprint(var3))
		printf("var3 = |%c| Printable\n", var3);
	else
		printf("var3 = |%c| Not\n", var3);

	if(ft_isprint(var4) && isprint(var4))
		printf("var4 = |%c| Printable\n", var4);
	else
		printf("var4 = |%c| Not\n", var4);
}

void	ft_strlen_test(void)
{
	char *string = "This is the \t string";

	printf("ORIGINAL: 'This is the \t string' |%lu|\n", strlen(string));
	printf("MY FUNCTION: 'This is the \t string' |%lu|\n", ft_strlen(string));
}

void	ft_toupper_test(void)
{
	int	var1 = 'a';
	int	var2 = 49;
	int	var3 = 'G';
	int	var4 = 115;

	printf("ORIGINAL: var1 = |%c|\n", toupper(var1));
	printf("MY FUNCTION: var1 = |%c|\n", ft_toupper(var1));

	printf("ORIGINAL: var2 = |%c|\n", toupper(var2));
	printf("MY FUNCTION: var2 = |%c|\n", ft_toupper(var2));

	printf("ORIGINAL: var3 = |%c|\n", toupper(var3));
	printf("MY FUNCTION: var3 = |%c|\n", ft_toupper(var3));

	printf("ORIGINAL: var4 = |%c|\n", toupper(var4));
	printf("MY FUNCTION: var4 = |%c|\n", ft_toupper(var4));
}

void	ft_tolower_test(void)
{
	int	var1 = 'a';
	int	var2 = 49;
	int	var3 = 'G';
	int	var4 = 69;

	printf("ORIGINAL: var1 = |%c|\n", tolower(var1));
	printf("MY FUNCTION: var1 = |%c|\n", ft_tolower(var1));

	printf("ORIGINAL: var2 = |%c|\n", tolower(var2));
	printf("MY FUNCTION: var2 = |%c|\n", ft_tolower(var2));

	printf("ORIGINAL: var3 = |%c|\n", tolower(var3));
	printf("MY FUNCTION: var3 = |%c|\n", ft_tolower(var3));

	printf("ORIGINAL: var4 = |%c|\n", tolower(var4));
	printf("MY FUNCTION: var4 = |%c|\n", ft_tolower(var4));
}

void	ft_strlcpy_test(void)
{
	const char	*string = "123456789";
	char	original_copied[10];
	char	myfunc_copied[10];

	strlcpy(original_copied, string, 11);
	printf("ORIGINAL: %s |%lu|\n", original_copied, strlen(original_copied));
	ft_strlcpy(myfunc_copied, string, 11);
	printf("MY FUNCTION: %s |%lu|\n", myfunc_copied, strlen(myfunc_copied));
}

void	ft_strlcat_test(void)
{
	char src[5] = "01";
    char dst[10];

    char bufferSize = 3;
    char concatenatedString;
    char concatenatedStringOriginal;

    concatenatedString = ft_strlcat(dst, src, bufferSize);
    concatenatedStringOriginal = strlcat(dst, src, bufferSize);

    printf("MY FUNC: String |%s| Length |%lu| Returned: |%d|\n", dst, ft_strlen(dst), concatenatedString);
    printf("ORIGINAL: String |%s| Length |%lu| Returned: |%d|\n", dst, strlen(dst), concatenatedStringOriginal);

}

void	ft_strncmp_test(void)
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "ABCdEF");
	strcpy(str2, "ABCDEF");

	ret = strncmp(str1, str2, 4);

	if(ret < 0)
		printf("str1 is less than str2 |%d|", ret);
	else if(ret > 0)
		printf("str2 is less than str1 |%d|", ret);
	else
		printf("str1 is equal to str2 |%d|", ret);
}

void	ft_strchr_test(void)
{
	char *string = "Let's catch them all!";
	int	word = '0';
	char *result_original = strchr(string, word);
	char *result_myfunc = ft_strchr(string, word);

	printf("Where's the first occurence of 'c'? |%s|\n", result_original);
	printf("Where's the first occurence of 'c'? |%s|\n", result_myfunc);
}

void	ft_strrchr_test(void)
{
	char *string = "Let's catch them all!";
	int	word = '0';
	char *result_original = strchr(string, word);
	char *result_myfunc = ft_strchr(string, word);

	printf("Where's the first occurence of 'c'? |%s|\n", result_original);
	printf("Where's the first occurence of 'c'? |%s|\n", result_myfunc);
}

void	ft_memset_test(void)
{
	char	arr1[] = {'0', '1', '2'};
	char	arr2[] = {'0', '1', '2'};

	memset(arr1, 48, 3);
	ft_memset(arr2, 48, 3);
	printf("ORIGINAL: {%c, %c, %c}\n", arr1[0], arr1[1], arr1[2]);
	printf("MY FUNC: {%c, %c, %c}\n", arr2[0], arr2[1], arr2[2]);
}

void	ft_bzero_test(void)
{
	char	arr1[] = {'0', '1', '2'};
	char	arr2[] = {'0', '1', '2'};

	bzero(arr1, 2);
	ft_bzero(arr2, 2);
	printf("ORIGINAL: {%c, %c, %c}\n", arr1[0], arr1[1], arr1[2]);
	printf("MY FUNC: {%c, %c, %c}\n", arr2[0], arr2[1], arr2[2]);
}

void	ft_memcpy_test(void)
{
	char	arr1[] = {'A', 'B', 'C'};
	char	arr2[] = {'0', '1', '2'};
	char	str1[50] = "The cake is a lie! 42 is the answer";
	char	str2[50] = "The cake is a lie! 42 is the answer";

	memcpy(arr1, arr2, 2);
	printf("ORIGINAL: {%c, %c, %c}\n", arr1[0], arr1[1], arr1[2]);
	printf("ORIGINAL: {%c, %c, %c}\n", arr2[0], arr2[1], arr2[2]);
	ft_memcpy(arr1, arr2, 2);
	printf("MY FUNC: {%c, %c, %c}\n", arr1[0], arr1[1], arr1[2]);
	printf("MY FUNC: {%c, %c, %c}\n", arr2[0], arr2[1], arr2[2]);

    printf("String : |%s|\n", str1);
    printf("Source: |%s|\n", str1);
    printf("Dest: |%s|\n", str1 + 19);
    memcpy(str1 + 19, str1 + 4, 18);
    printf("ORIGINAL: |%s| Length: |%lu|\n", str1, strlen(str1));
	ft_memcpy(str2 + 19, str2 + 4, 18);
    printf("MY FUNC: |%s| Length: |%lu|\n", str2, strlen(str2));
}

void	ft_memmove_test(void)
{
	char	arr1[] = {'A', 'B', 'C'};
	char	arr2[] = {'0', '1', '2'};
	char	str1[50] = "The cake is a lie! 42 is the answer";
	char	str2[50] = "The cake is a lie! 42 is the answer";

	memmove(arr1, arr2, 2);
	printf("ORIGINAL: {%c, %c, %c}\n", arr1[0], arr1[1], arr1[2]);
	printf("ORIGINAL: {%c, %c, %c}\n", arr2[0], arr2[1], arr2[2]);
	ft_memmove(arr1, arr2, 2);
	printf("MY FUNC: {%c, %c, %c}\n", arr1[0], arr1[1], arr1[2]);
	printf("MY FUNC: {%c, %c, %c}\n", arr2[0], arr2[1], arr2[2]);

    printf("String : |%s|\n", str1);
    printf("Source: |%s|\n", str1);
    printf("Dest: |%s|\n", str1 + 19);
    memmove(str1 + 19, str1 + 4, 18);
    printf("ORIGINAL: |%s| Length: |%lu|\n", str1, strlen(str1));
	ft_memmove(str2 + 19, str2 + 4, 18);
    printf("MY FUNC: |%s| Length: |%lu|\n", str2, strlen(str2));
}

void	ft_memchr_test(void)
{
	char	arr1[] = {'A', 'B', 'C'};
	char	str1[50] = "The cake is a lie! 42 is the answer";
	char	*returned_original;
	char	*returned_myfunc;

	returned_original = memchr(str1, 'a', 10);
	returned_myfunc = ft_memchr(str1, 'a', 10);
	printf("ORIGINAL: |%s|\n", returned_original);
	printf("MY FUNC: |%s|\n", returned_myfunc);
	returned_original = memchr(arr1, 'a', 10);
	returned_myfunc = ft_memchr(arr1, 'a', 10);
	printf("ORIGINAL: |%s|\n", returned_original);
	printf("MY FUNC: |%s|\n", returned_myfunc);
}
