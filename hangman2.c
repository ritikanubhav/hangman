#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("CLS");
    int r,i,n,j,p,count=0,point=0,l,u;
    char a[20],s,b[10],c[10];
    printf("enter a string \n");
    scanf("%s",a);
    system("CLS");
    n=strlen(a);
    l=(n/2)-1;
    u=(n/2)+1;
    r=(rand()%(u-l+1))+l;
    for(i=0;i<r;i++)
    {
        b[r] = ({a[i];});
        printf(" %c ",b[r]);
    }
    for(i=0;i<n-r;i++)
    {
        printf("_  ");
    }
    for(i=r;i<n;i++)
    {
        c[n-r]=({a[i];});
        printf("%c",c[1]);
    }
    printf("\n");
    for(i=0;i<n-r;i++)
        {
            printf("Enter guess: \n");
            count=0;
            scanf(" %c",&s);
            for(j=0;j<n-r;j++)
            {
                if(s==c[j])
                {
                    count++;
                }
            }
            if(count>0)
            {
                point++;
                printf("Correct guess\n");
            }
            else
            {
                printf("Incorrect guess\n");

            }
        }          
    printf("Your score: %d",point);
    return 0;   
}
    
    
    
