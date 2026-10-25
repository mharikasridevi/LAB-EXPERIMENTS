#include <stdio.h>
void main()
{
int A, B, C, D, E, F, G, J, i ,a,b,c,d;
printf("Enter A, B, C, D, E, F, G: ");
scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);
a = A + B*C + (D*E) + F*G;
printf("\na.A + B*C + (D*E) + F*G= %d", a);
b = A/B*C-B+A*D/3;
printf("\nb.A/B*C-B+A*D/3=%d", b);
c = A+++B---A;
printf("\nc.A+++B---A=%d", c);
d = J = (i++) + (++i);
printf("\nd.(i++) + (++i)=%d", d);
}