/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:51:47 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/29 11:45:12 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

typedef struct t_bool t_bool;
struct t_bool
{
	int	;
	int	FALSE;
};
# define TRUE		1
# define FALSE		0
# define SUCCESS	1
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN(nbr)	((nbr % 2 == 0) ? TRUE : FALSE)

#endif
