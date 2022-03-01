//create by Partha Das




#include <stdio.h>

int main() {
    int n,row,col;
    
    printf ("\n————————————————————————————————————————————\n");
    printf ("\t\t\t\t\t\t\t\tParttern type 8 ");
    printf ("\n————————————————————————————————————————————\n\n");
    
    scanf("%d",&n);
    
    //parttern =1 
    printf ("parttern = 1 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%d ",col);
               }
                 printf("\n");
        }
        printf ("\n*********************************************\n\n");
    
      //parttern =2 
    printf ("parttern = 2 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%d ",row);
               }
                 printf("\n");
        }
        printf ("\n*********************************************\n\n");
        
      //parttern =3 
    printf ("parttern = 3 >>>\n\n");
    for(row =1;row<=n;row++)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%d ",col%2);
               }
                 printf("\n");
        }
        printf ("\n*********************************************\n\n");
        
          //parttern =4 
    printf ("parttern = 4 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%d ",row%2);
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
      //parttern =5
    printf ("parttern = 5 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%c ",col+64);
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
      //parttern =6 
    printf ("parttern = 6 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%c ",row+64);
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
      //parttern =7
    printf ("parttern = 7 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%c ",col+96);
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
      //parttern =8
    printf ("parttern = 8 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("%c ",row+96);
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
      //parttern = 9
    printf ("parttern = 9 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("* ");
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
      //parttern =10
    printf ("parttern = 10 >>>\n\n");
    for(row =n;row>=1;row--)
        {
               for(col=1;col<=n-row;col++)
                {
                       printf("  ");
                }
        
               for(col=1;col<=2*row-1;col++)
               {
                       printf("$ ");
               }
                 printf("\n");
        }
    printf ("\n*********************************************\n\n");
    
    printf ("Create by Partha Das ");
}