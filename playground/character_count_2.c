//
// Created by cigna on 3/22/2021.
//

#include <stdio.h>
main()
{
    double nc;

   for (nc = 0; getchar() != EOF; ++nc)
   ;

   printf("%.0f\n", nc);
}