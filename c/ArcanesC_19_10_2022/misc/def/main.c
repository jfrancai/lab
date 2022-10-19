/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercore <mmercore@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:26:29 by mmercore          #+#    #+#             */
/*   Updated: 2022/10/19 17:33:06 by mmercore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Liste de tips et tricks cool que vous saviez pas

void    aurevoir()
{
    printf("La conf est terminée !!\n");
}

void    main()
{
    // 1. On peut mettre un exposant sur des valeurs hexa (l'exposant est en binaire)
    printf("Hexa %d et puis avec exposant %f\n", 0xF, 0xFp-1);

    char *s = "Hello world !";
    int  i = 2;
    printf("Ces deux notations sont egales %c et %c\n", s[i], i[s]);
    // 2. Pourquoi ? Elles évaluent toutes les deux à *(s + i) et *(i + s).
    // Detruisez mentalement vos correcteurs !!!!

    //3.  i --> 0 evalue à i-- > 0 ptdr !!! Qu'est ce qu'on s'amuse
    while(i --> 0)
    {
        printf("Une fois\n");
    }

    // FIN. Pour débuguer n'hesitez pas à utiliser la fonctions de stdlib
    // atexit()
    printf("Epic trolling ", *NULL);
    atexit(aurevoir);

}