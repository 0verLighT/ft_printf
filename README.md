# ft_printf | 42

Flags 
- "-" : ajoute x speace apres le mot print si le mot est superieur au x pas de speace 
```c++
#include <stdio.h>
int main(void)
{
    printf("%-10%sWorld", "Hello");
    printf("%-4%sWorld", "Hello");
    return (0);
}
```
```
output : 
->Hello     World
->HelloWorld 
```
- "0" : ajoute des "0" dans les function de chiffre %d, %i, %x, %X etc... mais pas dans les %s ou ici il ne ferra que des speaces de n - s donc si s fait 2 et que le flag etais de "%05s" il y aura donc 3 speace
```c++
#include <stdio.h>
int main(void)
{
    printf("%05d", 42);
    printf("%05s", "42");
    return (0);
}
```
```
output : 
->00042
->   42
```
- "." : Syntaxe [largeur].[precision] pour les flottant marche aussi pour les %d, %i, ...
```c++
#include <stdio.h>
int main(void)
{
    printf("%10.5d", 42);
    printf("%10.5d", -42);
    printf("%2f", 3.1415922653);
    printf("%.4s", "Hello");
    printf("%5.4d", "Hello");
    printf(".0d", 0);
    printf("%.0d", 42);
    printf("%.0d", 3.7);
    printf("%#.0f", 42.0);
}
```
```
output : 
->     00042
->    -00042
->3.141592
->Hell
->4202539
->.0d
->42
->751227552
->42.
```
- "#" : utilise dans %x, $X, %f, %g, %o, %a ici juste des exemples
```c++
#include <stdio.h>
int main(void)
{
    printf("%#x\n", 255);
    printf("%#X\n", 255);
    printf("%#f\n", 42.0);
    printf("%#g\n", 42.0);
    printf("%#.0f\n", 42.0);
}
```
```
output : 
->0xff
->0XFF
->42.000000
->42.0000
->42.
```
- " " : ajouter des speace avant les postif (change rien pour les negatif)
```c++
#include <stdio.h>
int main(void) {
    printf("% d\n", 42); 
    printf("% d\n", -42);
    printf("% f\n", 3.14);
    printf("%+ d\n", 42);
    return (0);
}

```
```
output : 
-> 42
->-42
-> 3.140000
->+42
```
- "+" : force l' affichage du signe 
```c++
#include <stdio.h>
int main(void) {
    printf("%+d\n", 42);
    printf("%+d\n", -42);
    printf("%+f\n", 3.14);
    printf("%+d\n", 0);
    return (0);
}
```
```
output : 
->+42
->-42
->+3.140000
->+0
```
