/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercore <mmercore@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:26:29 by mmercore          #+#    #+#             */
/*   Updated: 2022/10/19 14:52:10 by mmercore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Attention à bien compiler avec clang, ou bien utiliser la notation
// Équivalente GCC.
typedef float float2 __attribute__((ext_vector_type(2)));
typedef float float3 __attribute__((ext_vector_type(3)));
typedef float float4 __attribute__((ext_vector_type(4)));
typedef float float6 __attribute__((ext_vector_type(6)));
typedef float float8 __attribute__((ext_vector_type(6)));
typedef float float16 __attribute__((ext_vector_type(16)));

// Tous les types possibles: char, uchar, short, ushort, int, uint, long, ulong, float.

void    main()
{
    float4 vec = (float4){1.0, 2.0, 3.0, 4.0};
    printf("Notre vecteur = %f %f %f %f\n", vec.x, vec.y, vec.z, vec.w);

    vec.xyzw = (float4){1.0, 2.0, 3.0, 4.0};
    vec.z = 1.0;
    vec.xy = (float2){3.0, 4.0};
    vec.wyz = (float3){3.0, 4.0, 5.0};
    printf("Notre vecteur = %f %f %f %f\n", vec.x, vec.y, vec.z, vec.w);
    
    float16 vec16 = (float16){1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0 ,13.0,14.0,15.0,16.0};
    // Pour accéder à des indices plus grands que w (4), il faut utiliser la notation en .sX.
    printf("Notre vecteur de 16 = %f %f %f %f ", vec16.s0, vec16.s1, vec16.s2, vec16.s3);
    printf("%f %f %f %f ", vec16.s4, vec16.s5, vec16.s6, vec16.s7);
    printf("%f %f %f %f ", vec16.s8, vec16.s9, vec16.sa, vec16.sb);
    // Dans la notation .sX les majuscules et minuscules ne comptent pas.
    printf(" %f %f %f %f \n", vec16.sC, vec16.sD, vec16.sE, vec16.sF);

    // Attention cette notation ne se mélange pas à la notation .xyzw même si elle suit les
    // Memes règles !!!!
    vec16.sabcdef = (float6){1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    // Autre notation: .lo et .hi (low et high) parties inferieures et superieures
    // .even et .odd pour les pairs et impairs, d'ailleurs elle se combinent, comme tout le reste. vec16.lo.even marche.
    vec16 = (float16){1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0 ,13.0,14.0,15.0,16.0};
    vec16.lo = vec16.hi;
    vec16.lo.even = vec16.hi.odd;
    printf("Notre vecteur de 16 = %f %f %f %f ", vec16.s0, vec16.s1, vec16.s2, vec16.s3);
    printf("%f %f %f %f ", vec16.s4, vec16.s5, vec16.s6, vec16.s7);
    printf("%f %f %f %f ", vec16.s8, vec16.s9, vec16.sa, vec16.sb);
    printf("%f %f %f %f \n", vec16.sC, vec16.sD, vec16.sE, vec16.sF);
}