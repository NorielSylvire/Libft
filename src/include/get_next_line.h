/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:32:38 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 22:02:07 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/** @brief Returns the next line of an opened file.
 *
 * get_next_line is the main function of the GNL 42Madrid project. It reads
 * a file via a file descriptor and then returns a string with the first
 * line it reads. In an error is encountered, it returns NULL.
 *
 * @param fd the file descriptor to read from
 * @return The first line of the file pointed by fd
 */
char	*get_next_line(int fd);
/** @brief Creates a new string with the concatenation of s1 + s2.
 *
 * This is a modified version of my libft's strjoin. It returns a new
 * string consisting of all the content of s1 followed by the chars_read
 * first chars of s2. The return is then null-terminated.
 * Note: in this project, chars_read is the return value of read().
 *
 * @param s1 the first string that will be copied
 * @param s2 the secondd string that will be concatenated
 * @param chars_read the number of chars from s2 that will be concatenated
 * @return A new string consisting of s1 + s2
 */
char	*ft_ptr_strnjoin(char const *s1, char const *s2, int chars_read);

#endif
