#include <stdio.h>

int main()
{
   int m[100], n, cr[100], i, sub ;
   float total=0,result;
   
   printf("ENTER THE NUMBER OF SUBJECTS DO YOU HAVE? INCLUDING THE LAB \t");
   scanf("%d", &sub);
   for(i = 1; i <= sub; i++) {
        printf("enter the marks including the labs (eg: 99) \t");
        scanf("%d", &n);
        if(n >= 90) {
            m[i] = 10;
        } else if(n >= 80) {
            m[i] = 9;
        } else if(n >= 70) {
            m[i] = 8;
        } else if(n >= 60) {
            m[i] = 7;
        } else if(n >= 50) {
            m[i] = 6;
        } else if(n >= 40) {
            m[i] = 5;
        } else {
            m[i] = 0;
        }
        printf("ENTER THE CREDIT FOR THIS SUBJECT \t");
        scanf("%d", &cr[i]);
   }
    for(i=1 ;i<= sub;i++){
        
        total = total + cr[i]*m[i];
        
    }
    printf("%f",total);
    result = total/20;
    printf("THE CGPA IS %f", result);
//   for(i = 1; i <= sub; i++) {
//       printf("%d \t", m[i]);
//       printf("%d \t", cr[i]);
//   }
   return 0;
}
