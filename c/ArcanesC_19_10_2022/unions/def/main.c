/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercore <mmercore@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:26:29 by mmercore          #+#    #+#             */
/*   Updated: 2022/10/19 17:33:09 by mmercore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_a {
    float   x;
    int     w;
    float   z;
    int     y;
}               t_a;

typedef struct s_b {
    int     x;
    int     y;
    int     z;
    float     w;
}               t_b;


typedef union s_c {
        t_a a;
        t_b b;
}           t_c;

void    main()
{
    t_c mystere;
    mystere.a = (t_a){1.0, 2, 3.0, 4};
    // L'union permet d'acceder implicitement à des emplacements dans la mémoire
    // De structures différentes mais similaires
    printf("Le deuxième element est %d\n", mystere.a.y);
    printf("Le deuxième element est %d\n", mystere.b.y);
    printf("Le deuxième element est %d\n", mystere.a.y);


}