#include <stdio.h>
#include <math.h>
int main()
{   //функция для вычисления дискриминанта
    double discrim(double a, double b, double c)
    {
        double d;
        d = b*b - 4*a*c;
        return d;
    }
int n;
double p, q, r, d;

printf("double vars must be in input:\n");
n = scanf("%lf, %lf, %lf", &p, &q, &r);
if (n !=3)// лексема != означает не равно, противоположно - == - оператор сравнений
    {
    printf("Error: wrong input!\n");
    return 1;
/*комментарии по коду: */
    }
if(p==0)
    {
    printf("Error: not a quadric quetion!\n");
    return 2;
/*фишка второго ретурна в том, что мы можем конкретно отследить, на каком этпе просиходит ошибка и ее отладить намного
 * легче, такие дела*/
    }
d = discrim(p,q,r);
if(d<0)
{
printf("No roots!\n");
return 0;
d = sqrt(d);
}
} 
