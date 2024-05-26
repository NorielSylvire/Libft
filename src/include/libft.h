/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:44:21 by fhongu            #+#    #+#             */
/*   Updated: 2024/05/26 12:52:40 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# ifndef HASMAP_DEFAULT_SIZE
#  define HASHMAP_DEFAULT_SIZE 20
# endif
# ifndef HASHMAP_MAX_LOAD
#  define HASHMAP_MAX_LOAD 0.75f
# endif
# ifndef HASHMAP_RESIZE_FACTOR
#  define HASHMAP_RESIZE_FACTOR 2
# endif

typedef unsigned short	t_ushort;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_key_value
{
	void	*value;
	void	*key;
}	t_key_value;

typedef struct s_hashmap
{
	void	(*del)(void *);
	t_list	**map;
	int		size;
	int		count;

}	t_hashmap;

/** @brief Return the uppercase version of char c.
 * 
 * It takes a character c as parameter and if it's a lowecase letter,
 * it turns it into an uppercase letter and returns it. If it isn't an
 * uppercase letter, it returns it unchanged.
 *
 * @param c the char to be made into uppercase
 * @return The uppercase character
 */
int			ft_toupper(int c);
/** @brief Return the lowercase version of char c.
 * 
 * It takes a character c as parameter and if it's an uppercase letter,
 * it turns it into a lowercase letter and returns it. If it isn't a
 * lowercase letter, it returns it unchanged.
 *
 * @param c the char to be made into lowercase
 * @return The lowercase character
 */
int			ft_tolower(int c);
/** @brief Returns 1 if c is an uppercase letter.
 * 
 * It takes a char as a parameter and if it's an uppercase letter, returns
 * true, otherwise it returns false.
 *
 * @param c the char that will be analyzed
 * @return True or false
 */
int			ft_isupper(int c);
/** @brief Returns 1 if c is an alphabetic character.
 * 
 * It takes a char as a parameter and if it's an alphabetic char, meaning
 * a letter, regardless of if it's upper or lowercase, returns true,
 * otherwise it returns false.
 *
 * @param c the char that will be analyzed
 * @return True or false
 */
int			ft_isalpha(int c);
/** @brief Returns 1 if c is a digit (0-9).
 * 
 * It takes a char as a parameter and if it's a digit, returns
 * true, otherwise it returns false.
 *
 * @param c the char that will be analyzed
 * @return True or false
 */
int			ft_isdigit(int c);
/** @brief Returns 1 if c is an alphanumeric character.
 * 
 * It takes a char as a parameter and if it's an alphanumeric char, meaning
 * it's either a letter or a number, but not  a symbol such as $, or another
 * special character, returns true, otherwise it returns false.
 *
 * @param c the char that will be analyzed
 * @return True or false
 */
int			ft_isalnum(int c);
/** @brief Returns 1 if c is part of the ASCII table.
 * 
 * It takes a char as a parameter and if it's part of the American Standard
 * Code for Information Interchange (ASCII), that is, between 0 and 127,
 * returns true, otherwise it returns false.
 *
 * @param c the char that will be analyzed
 * @return True or false
 */
int			ft_isascii(int c);
/** @brief Returns 1 if c is a spacing character.
 * 
 * It takes a character c as parameter and if it's a spacing character (space,
 * tab, newline...), it returns true, otherwise it returns false.
 *
 * @param c the char to be analyzed
 * @return True or false
 */
int			ft_isspace(int c);
/** @brief Returns 1 if c is a printable character.
 * 
 * It takes a character c as parameter and if it's a printable character,
 * that is, a letter, a digit, or a symbol, it returns true,
 * otherwise it returns false.
 *
 * @param c the char to be analyzed
 * @return True or false
 */
int			ft_isprint(int c);
/** @brief Returns 1 if c is a lowercase letter.
 * 
 * It takes a character c as parameter and if it's a lowercase letter,
 * it returns true, otherwise it returns false.
 *
 * @param c the char to be analyzed
 * @return True or false
 */
int			ft_islower(int c);
/** @brief Returns a pointer to the first occurrence of a character.
 * 
 * It takes a string s and a char c as a parameter and searches for the
 * first occurrence of the char c. If it is found it returns a pointer to
 * that character. If it isn't found, it returns a NULL pointer.
 *
 * @param s the string that will be searched
 * @param c the char that will be searched for
 * @return A pointer to the first occurrence of c, or NULL
 */
char		*ft_strchr(const char *s, int c);
/** @brief Returns a pointer to the last occurrence of a character.
 * 
 * It takes a string s and a char c as a parameter and searches for the
 * last occurrence of the char c. If it is found it returns a pointer to
 * that character. If it isn't found, it returns a NULL pointer.
 *
 * @param s the string that will be searched
 * @param c the char that will be searched for
 * @return A pointer to the last occurrence of c, or NULL
 */
char		*ft_strrchr(const char *s, int c);
/** @brief Returns the number of characters in the string s.
 * 
 * It takes a string s as a parameter and counts the number of characters
 * thatt string has, then returns it as a size_t (unsigned long).
 *
 * @param s the string whose length will be measured
 * @return The length of the string
 */
size_t		ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
void		ft_free(void **ptr);
char		*ft_strdup(const char *s1);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_preppend(const char *str, const char *pre, int fr_s, int fr_p);
char		*ft_append(const char *str, const char *apd, int fr_s, int fr_a);
char		*ft_strinsert(const char *str, const char *ins, size_t pos);
char		**ft_split(const char *s, char c);
char		*ft_itoa(int n);
char		*ft_ltoa(long n);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		*ft_striteri(char *s, void (*f)(unsigned int, char*));
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(const char *s, int fd);
/** @brief Prints a substring to the designated fd.
 *
 * Prints a subset of a string to the provided file descriptor.
 * The substring contains all characters from the start position to the
 * end position, both included.
 *
 * @param str the string from which to print the substring
 * @param start the index of the first char of the substring
 * @param end the index of the last char of the substring
 * @param fd the file destriptor to print to
 * @return The number of characters that where printed to the fd
 */
int			ft_putsubstr_fd(const char *str, size_t start, size_t end, int fd);
int			ft_putendl_fd(const char *s, int fd);
int			ft_putnbr_fd(int n, int fd);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_front(t_list **lst, t_list *new_lmn);
void		ft_lstadd_back(t_list **lst, t_list *new_lmn);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_hashmap	*ft_hmap_new(void (*del)(void *));
void		ft_hmap_free(t_hashmap *hmap);
t_hashmap	*ft_hmap_resize(t_hashmap *hmap);
void		ft_hmap_add(t_hashmap *hmap, void *key, void *value, size_t len);
void		ft_hmap_delete(t_hashmap *hmap, void *key, size_t len);
t_ushort	ft_hash(unsigned char *key, size_t nbytes);
void		*ft_hmap_get(t_hashmap *hmap, void *key, size_t len);
void		ft_hmap_edit(t_hashmap *hmap, void *key, void *value, size_t len);
/** @brief Creates an int representation of a trgb color.
 * Takes four int components of a trgb color that must be between 0 and 255.
 * Anything greater will break the function.
 * 
 * @param t the transparency component of the trgb color
 * @param r the red component of the trgb color
 * @param g the green component of the trgb color
 * @param b the blue component of the trgb color
 * @return an int representation of the trgb color
 */
int			ft_trgb(int t, int r, int g, int b);
/** @brief Returns the t component of the trgb color.
 * Takes an int representation of a trgb color as parameter.
 * Retuns that color's transparency component.
 * 
 * @param trgb and int representation of the trgb color
 * @return the color's transparency component
 */
int			ft_get_t(int trgb);
/** @brief Returns the r component of the trgb color.
 * Takes an int representation of a trgb color as parameter.
 * Retuns that color's red component.
 * 
 * @param trgb and int representation of the trgb color
 * @return the color's red component
 */
int			ft_get_r(int trgb);
/** @brief Returns the g component of the trgb color.
 * Takes an int representation of a trgb color as parameter.
 * Retuns that color's green component.
 * 
 * @param trgb and int representation of the trgb color
 * @return the color's green component
 */
int			ft_get_g(int trgb);
/** @brief Returns the b component of the trgb color.
 * Takes an int representation of a trgb color as parameter.
 * Retuns that color's bñue component.
 * 
 * @param trgb and int representation of the trgb color
 * @return the color's blue component
 */
int			ft_get_b(int trgb);
/** @brief Returns the milliseconds of the current time of the day.
 * Takes the current time of the day, converts its seconds and microseconds
 * into milliseconds, adds them together and returns them.
 *
 * @return the milliseconds of the current time of the day
 */
int			ft_millis(void);

#endif
