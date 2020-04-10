#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank";
    int n;
    double t;
    char str[100];
    char str2[100];
    scanf("%d",&n);
    int x=n+i;
    printf("%d\n",x);
scanf("%lf",&t);
double y=d+t;

printf("%0.1lf\n",y);
scanf("%s", str);
puts("ok");
puts(str);
int l,j,k;
for (l = 0; s[l] != '\0'; ++l);
for (j = 0; str[j] != '\0'; ++j);
    for (k = 0,l=0; s[l] != '\0'; ++l, ++k) {
        str2[k] = s[l]; }
        str2[k] = ' ';
    for (k = l+1,j=0; str[j] != '\0'; ++j, ++k) {
        str2[k] = str[j]; }
    str2[k] = '\0';
    puts(str2);
    return 0;
}
