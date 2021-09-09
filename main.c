/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 23:05:38 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/09 20:37:38 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
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
void	ft_memcmp_test(void);
void	ft_strnstr_test(void);
void	ft_atoi_test(void);
void	ft_calloc_test(void);
void	ft_strdup_test(void);
void	ft_substr_test(void);
void	ft_strjoin_test(void);
void	ft_strtrim_test(void);
void	ft_split_test(void);
void	ft_itoa_test(void);

void	ft_lstnew_test(void);
void	ft_lstadd_back_test(void);
void	ft_lstsize_test(void);
void	ft_lstlast_test(void);


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

	printf("\n=== ft_memcmp_test: ===\n");
	ft_memcmp_test();

	printf("\n=== ft_strnstr_test: ===\n");
	ft_strnstr_test();

	printf("\n=== ft_atoi_test: ===\n");
	ft_atoi_test();

	printf("\n=== ft_calloc_test: ===\n");
	ft_calloc_test();

	printf("\n=== ft_strdup_test: ===\n");
	ft_strdup_test();

	printf("\n=== ft_substr_test: ===\n");
	ft_substr_test();

	printf("\n=== ft_strjoin_test: ===\n");
	ft_strjoin_test();

	printf("\n=== ft_strtrim_test: ===\n");
	ft_strtrim_test();

	printf("\n=== ft_split_test: ===\n");
	ft_split_test();

	printf("\n=== ft_itoa_test: ===\n");
	ft_itoa_test();

	printf("\n=== ft_lstnew_test: ===\n");
	ft_lstnew_test();

	printf("\n=== ft_lstadd_back_test: ===\n");
	ft_lstadd_back_test();

	printf("\n=== ft_lstsize_test: ===\n");
	ft_lstsize_test();

	printf("\n=== ft_lstlast_test: ===\n");
	ft_lstlast_test();
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
	char	src[] = "coucou";
	char	dest[10] = "AAAAAAAAA";
	char	mydest[10] = "AAAAAAAAAA";

	strlcpy(dest, src, 2);
	printf("ORIGINAL: %c |%lu|\n", dest[2], strlen(dest));
	ft_strlcpy(mydest, src, 2);
	printf("MY FUNCTION: %c |%lu|\n", mydest[2], strlen(mydest));
}

void	ft_strlcat_test(void)
{
	char src[5];
    char dst[4] = "345";
	char src2[5];
    char dst2[4] = "345";

    char bufferSize = 3;
    char concatenatedString;
    char concatenatedStringOriginal;

    concatenatedString = ft_strlcat(dst, src, bufferSize);
    concatenatedStringOriginal = strlcat(dst2, src2, bufferSize);

    printf("MY FUNC: String |%s| Length |%lu| Returned: |%d|\n", dst, ft_strlen(dst), concatenatedString);
    printf("ORIGINAL: String |%s| Length |%lu| Returned: |%d|\n", dst2, strlen(dst2), concatenatedStringOriginal);

}

void	ft_strncmp_test(void)
{
	char str1[15] = "ABCD\0\0F";
	char str2[15] = "ABCD\0EF";
	int ret;

	ret = ft_strncmp(str1, str2, 6);

	if(ret < 0)
		printf("str1 is less than str2 |%d|\n", ret);
	else if(ret > 0)
		printf("str2 is less than str1 |%d|\n", ret);
	else
		printf("str1 is equal to str2 |%d|\n", ret);
}

void	ft_strchr_test(void)
{
	char *string = "Let's catch them all!";
	int	word = '0';
	char *result_original = strchr(string, word);
	char *result_myfunc = ft_strchr(string, word);

	printf("Where's the first occurence of '%c'? |%s|\n", word, result_original);
	printf("Where's the first occurence of '%c'? |%s|\n", word, result_myfunc);
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
	returned_original = memchr(arr1, 'C', 2);
	returned_myfunc = ft_memchr(arr1, 'C', 2);
	printf("ORIGINAL: |%s|\n", returned_original);
	printf("MY FUNC: |%s|\n", returned_myfunc);
}

void	ft_memcmp_test(void)
{
	char str1[6] = {1, 0, 0, 0, 0, 0};
	char str2[6] = {1, 1, 1, 1, 1, 1};
	//int ret;

	//ret = memcmp(str1, str2, 4);

	printf("str1 - str2 |%d|\n", memcmp(str1, str2, sizeof(int)*3));

}

void	ft_strnstr_test(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	/* 1 */ printf("1. MY FUNC: |%s|\n", ft_strnstr(haystack, needle, 0));
	/* 1 */ printf("1. ORIGINAL: |%s|\n\n", strnstr(haystack, needle, 0));
	/* 2 */ printf("2. MY FUNC: |%s|\n", ft_strnstr(haystack, needle, -1));
	/* 2 */ printf("2. ORIGINAL: |%s|\n\n", strnstr(haystack, needle, -1));
	/* 3 */ printf("3. MY FUNC: |%s|\n", ft_strnstr(haystack, "a", -1));
	/* 3 */ printf("3. ORIGINAL: |%s|\n\n", strnstr(haystack, "a", -1));
	/* 4 */ printf("4. MY FUNC: |%s|\n", ft_strnstr(haystack, "c", -1));
	/* 4 */ printf("4. ORIGINAL: |%s|\n\n", strnstr(haystack, "c", -1));
	/* 5 */ printf("5. MY FUNC: |%s|\n", ft_strnstr(empty, "", -1));
	/* 5 */ printf("5. ORIGINAL: |%s|\n\n", strnstr(empty, "", -1));
	/* 6 */ printf("6. MY FUNC: |%s|\n", ft_strnstr(empty, "", 0));
	/* 6 */ printf("6. ORIGINAL: |%s|\n\n", strnstr(empty, "", 0));
	/* 7 */ printf("7. MY FUNC: |%s|\n", ft_strnstr(empty, "coucou", -1));
	/* 7 */ printf("7. ORIGINAL: |%s|\n\n", strnstr(empty, "coucou", -1));
	/* 8 */ printf("8. MY FUNC: |%s|\n", ft_strnstr(haystack, "aaabc", 5));
	/* 8 */ printf("8. ORIGINAL: |%s|\n\n", strnstr(haystack, "aaabc", 5));
	/* 9 */ printf("9. MY FUNC: |%s|\n", ft_strnstr(empty, "12345", 5));
	/* 9 */ printf("9. ORIGINAL: |%s|\n\n", strnstr(empty, "12345", 5));
	/* 10 */ printf("10. MY FUNC: |%s|\n", ft_strnstr(haystack, "abcd", 9));
	/* 10 */ printf("10. ORIGINAL: |%s|\n\n", strnstr(haystack, "abcd", 9));
	/* 11 */ printf("11. MY FUNC: |%s|\n", ft_strnstr(haystack, "cd", 8));
	/* 11 */ printf("11. ORIGINAL: |%s|\n\n", strnstr(haystack, "cd", 8));
	/* 12 mbueno-g */ printf("12. MY FUNC: |%s|\n", ft_strnstr(haystack, "a", 1));
	/* 12 mbueno-g */ printf("12. ORIGINAL: |%s|\n\n", strnstr(haystack, "a", 1));
}

void	ft_atoi_test(void)
{
	int orig;
	int my;
    char *o;
    char *m;

    o = "\t -+--9885a";
    m = "\t -+--9885a";
    orig = atoi(o);
    my = ft_atoi(m);

    printf("ORIGINAL: %d\n", orig);
    printf("MY FUNC: %d\n", my);
}

void	ft_calloc_test(void)
{
	int *ptr;
	int  *ft_p;
	int i;
	int j;

	ft_p = (int *)ft_calloc(2, 2);

	ptr = (int *)calloc(2, 2);

	i = 0;
	while (i < 5)
	{
		printf("Endereço de p%i: %p | Valor de p%i: %i\n", i, (ptr + i), i, *(ptr + i));
		i++;
	}

	j = 0;
	while (j < 5)
	{
		printf("Endereço de ft_p%i: %p | Valor de ft_p%i: %i\n", j, (ft_p + j), j, *(ft_p + j));
		j++;
	}

}

void	ft_strdup_test(void)
{
	char	*string = "42 is the answer";

	printf("%s\n", ft_strdup(string));
}

void	ft_substr_test(void)
{
	char * s = ft_substr("tripouille", 0, 42000);

	printf("MY FUNC: |%s|\n", s);
}

void	ft_strjoin_test(void)
{
	char	*preffix = "code";
	char	*suffix = "lei";

	printf("%s\n", ft_strjoin(preffix, suffix));
}

void	ft_strtrim_test(void)
{
	char	*string = " AEE AEE";
	char	*set = " AE";
	printf("Trim: |%s|\n", ft_strtrim(string, set));
}

void	ft_split_test(void)
{
	char **array = ft_split("chinimala", ' ');
	printf("strings: %s | %s\n", array[0], array[1]);
}

void	ft_itoa_test(void)
{
	printf("Int min: %s\n", ft_itoa(-2147483648));
	printf("Int max: %s\n", ft_itoa(2147483647));
	printf("Zero: %s\n", ft_itoa(0));
	printf("Positive: %s\n", ft_itoa(1));
	printf("Negative : %s\n", ft_itoa(-1));
}

void	ft_lstnew_test(void)
{
	t_list *new;

	new = ft_lstnew("42");
	printf("%s\n", new->content);
}

void	ft_lstadd_back_test(void)
{
	t_list *meu = ft_lstnew("Meu");
	t_list *nome = ft_lstnew("nome");
	t_list *nao = ft_lstnew("não é");
	t_list *johnny = ft_lstnew("Johnny");

	ft_lstadd_back(&meu, nome);
	ft_lstadd_back(&meu, nao);
	ft_lstadd_back(&meu, johnny);

	while (meu)
	{
		printf("lista: %s\n", meu->content);
		meu = meu->next;
	}
}

void	ft_lstsize_test(void)
{
	t_list *meu = ft_lstnew("Meu");
	t_list *nome = ft_lstnew("nome");
	t_list *nao = ft_lstnew("não é");
	t_list *johnny = ft_lstnew("Johnny");

	ft_lstadd_back(&meu, nome);
	ft_lstadd_back(&meu, nao);
	ft_lstadd_back(&meu, johnny);

	printf("|%d| list elements\n", ft_lstsize(meu));
}

void	ft_lstlast_test(void)
{
	t_list *meu = ft_lstnew("Meu");
	t_list *nome = ft_lstnew("nome");
	t_list *nao = ft_lstnew("não é");
	t_list *johnny = ft_lstnew("Johnny");

	ft_lstadd_back(&meu, nome);
	ft_lstadd_back(&meu, nao);
	ft_lstadd_back(&meu, johnny);

	printf("|%s| last element\n", ft_lstlast(meu)->content);
}
