/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:10:18 by jumoreno          #+#    #+#             */
/*   Updated: 2022/09/17 21:13:43 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s;

	*s = "Hello world!";
	printf("%d", ft_strlen(s));
	return (0);
}