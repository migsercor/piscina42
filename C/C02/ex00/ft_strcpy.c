/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:21:09 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/19 08:53:34 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}

/*int    main(void)
{
    char    dest[20]="";
    char    src[20]="Hola Marvin";

    printf("Cadena 1 %s y cadena 2 %s\n", dest, src);
    ft_strcpy(dest, src);
    printf("Cadena 1 %s y cadena 2 %s\n", dest, src);
}*/
