/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercore <mmercore@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:26:29 by mmercore          #+#    #+#             */
/*   Updated: 2022/10/19 14:57:46 by mmercore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_strangefloatvec {
    float   x;
    float   y;
    float   z;
    float   w;
}               t_strangefloatvec;

// Attention à bien compiler avec clang, ou bien utiliser la notation
// Équivalente GCC.
typedef float float4 __attribute__((ext_vector_type(4)));

// Tous les types possibles: char, uchar, short, ushort, int, uint, long, ulong, float.

void    main()
{
    float4 vec = (float4){1.0, 2.0, 3.0, 4.0};
    printf("Notre vecteur = %f %f %f %f\n", vec.x, vec.y, vec.z, vec.w);

    t_strangefloatvec vec2 = {1.0, 2.0, 3.0, 4.0};
    printf("Notre vecteur zarb = %f %f %f %f\n", vec2.x, vec2.y, vec2.z, vec2.w);
}