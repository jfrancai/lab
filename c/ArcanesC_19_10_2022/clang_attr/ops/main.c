/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercore <mmercore@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:26:29 by mmercore          #+#    #+#             */
/*   Updated: 2022/10/19 17:32:12 by mmercore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef float float2 __attribute__((ext_vector_type(2)));
typedef float float3 __attribute__((ext_vector_type(3)));
typedef float float4 __attribute__((ext_vector_type(4)));
typedef float float6 __attribute__((ext_vector_type(6)));
typedef float float8 __attribute__((ext_vector_type(6)));
typedef float float16 __attribute__((ext_vector_type(16)));

typedef int int16 __attribute__((ext_vector_type(16)));


void    main()
{

    float16 vec16 = (float16){1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0 ,13.0,14.0,15.0,16.0};
    printf("Notre vecteur de 16 = %f %f %f %f ", vec16.s0, vec16.s1, vec16.s2, vec16.s3);
    printf("%f %f %f %f ", vec16.s4, vec16.s5, vec16.s6, vec16.s7);
    printf("%f %f %f %f ", vec16.s8, vec16.s9, vec16.sa, vec16.sb);
    printf(" %f %f %f %f \n", vec16.sC, vec16.sD, vec16.sE, vec16.sF);

    vec16 += 1;
    printf("Notre vecteur de 16 apres addition = %f %f %f %f ", vec16.s0, vec16.s1, vec16.s2, vec16.s3);
    printf("%f %f %f %f ", vec16.s4, vec16.s5, vec16.s6, vec16.s7);
    printf("%f %f %f %f ", vec16.s8, vec16.s9, vec16.sa, vec16.sb);
    printf(" %f %f %f %f \n", vec16.sC, vec16.sD, vec16.sE, vec16.sF);

    vec16 *= 2;
    printf("Notre vecteur de 16 apres mult = %f %f %f %f ", vec16.s0, vec16.s1, vec16.s2, vec16.s3);
    printf("%f %f %f %f ", vec16.s4, vec16.s5, vec16.s6, vec16.s7);
    printf("%f %f %f %f ", vec16.s8, vec16.s9, vec16.sa, vec16.sb);
    printf(" %f %f %f %f \n", vec16.sC, vec16.sD, vec16.sE, vec16.sF);

    vec16 += vec16;
    vec16 *= vec16;
    vec16 /= 2;
    printf("Notre vecteur de 16 apres bordel = %f %f %f %f ", vec16.s0, vec16.s1, vec16.s2, vec16.s3);
    printf("%f %f %f %f ", vec16.s4, vec16.s5, vec16.s6, vec16.s7);
    printf("%f %f %f %f ", vec16.s8, vec16.s9, vec16.sa, vec16.sb);
    printf(" %f %f %f %f \n", vec16.sC, vec16.sD, vec16.sE, vec16.sF);

    // Autres operations qui marchent
    // > >= <= <
    // Casts (Attention siweof(float) = sizeof(int) mais ce n'est pas pareil pour les vecteurs)
    // Ternaires (s'appliquent à chaque objet) qui fonctionnent seulement avec les vecteurs int et bool. Hyper pratique pour parser.

    // Pour aller plus loin
    // DOC
    // https://clang.llvm.org/docs/LanguageExtensions.html#vectors-and-extended-vectors
    // https://registry.khronos.org/OpenCL/specs/2.2/html/OpenCL_C.html#vector-components
    // Fabriquer son propre type matrice et les opérations correspondantes

    // Pour quel projet c'est cool ?
    // Tous les projets graphiques = cube3d, miniRT, etc...
    // Tous les projets mathematiques
}