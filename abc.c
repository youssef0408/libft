#include "libft.h"

static int count_words(char const *s, char c)
{
    int count = 0;
    while (*s)
    {
        if (*s == c)
            count++;
        s++;
    }
    return (count + 1);
}

char *ft_cut_str(const char *str, int *start, char c)
{
    int i = 0;
    int word_len = *start - i;
    while (str[*start + i] && str[*start + i] != c)
        i++;
    *start += i;
    char *new = malloc((i + 1) * sizeof(char));
    if (!new)
        return (NULL);
    i = 0;
    while (i < *start - word_len)
    {
        new[i] = str[word_len + i];
        i++;
    }
    new[i] = '\0';
    return (new);
}

char **ft_split(char const *s, char c)
{
    char **tab;
    int start = 0;
    int i = 0;
    if (!s)
        return (NULL);
    int num_words = count_words(s, c);
    tab = malloc((num_words + 1) * sizeof(char *));
    if (!tab)
        return (NULL);
    while (i < num_words - 1)
    {
        while (s[start] == c)
            start++;
        tab[i] = ft_cut_str(s, &start, c);
        if (!tab[i])
            return (NULL);
        i++;
    }
    tab[i] = NULL;
    return (tab);
}

int main(void)
{
    char *s = "salut comment vas-tu ?";
    char c = 't';
    char **words = ft_split(s, c);
    if (!words)
        return (1);
    int i = 0;
    while (words[i])
    {
        printf("%s\n", words[i]);
        i++;
    }
    return (0);
}
