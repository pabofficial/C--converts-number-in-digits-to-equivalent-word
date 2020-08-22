#include<stdio.h>
#include<stdlib.h>
int main()
{
    char o[9][10]= {"one","two","three","four","five","six","seven","eight","nine"};
    char t1[10][10]= {"ten","eleven","twelve","thirtenn","fourteen","fiftenn","sixteen","seventeen","eighteen","ninteen"};
    char t2[8][10]= {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    int num,m,i,k,j,temp;

    printf("enter the number");
    scanf("%d",&num);

// FOR 1 DIGIT NUMBER
    if((num>0) && (num<10))
    {
        for(i=1; i<10; i++)
        {
            if (i==num)
                printf("output of entered numer in words is= %s ",o[i-1]);
        }
    }

// FOR 2 DIGIT NUMBER

    if((num>=10) && (num<20))
    {
        for(i=0; i<10; i++)
        {
            j=i+10;
            if (j==num)
                printf("output of entered numer in words is= %s ",t1[i]);
        }
    }
    j=0;
    temp=num;
    if((num>=20) && (num<100))
    {
        j=temp/10;
        temp=temp-(j*10);
        for(i=1; i<10; i++)
        {
            if (i==j)
                printf("the entered number in words is= %s",t2[i-2]);
        }
        for(i=1; i<10; i++)
        {
            if (i==temp)
                printf(" %s ",o[i-1]);
        }
    }
    j=0;

// FOR 3 DIGIT NUMBER

    if((num>=100) &&(num<1000))
    {
        temp=num;
        j=temp/100;
        temp=temp-(j*100);
        for(i=1; i<10; i++)
        {
            if (i==j)
                printf("the entered number in words is= %s hundred",o[i-1]);
        }
        if(temp<10)
        {
            for(i=1; i<10; i++)
            {
                if (i==temp)
                    printf(" and %s ",o[i-1]);
            }
        }
        if((temp>=10) && (temp<20))
        {
            for(i=0; i<10; i++)
            {
                m=i+10;
                if (m==temp)
                    printf(" and %s ",t1[i]);
            }
        }
        if((temp>=20) && (temp<100))
        {
            m=temp/10;
            temp=temp-(m*10);
            for(i=1; i<10; i++)
            {
                if (i==m)
                    printf(" and %s",t2[i-2]);
            }
            for(i=1; i<10; i++)
            {
                if (i==temp)
                    printf(" %s ",o[i-1]);
            }
        }
    }
//FOR 4 DIGIT NUMBER
    if((num>=1000) && (num<=9999))
    {
        j=num/1000;
        num=num-(j*1000);
        for(i=1; i<10; i++)
        {
            if (i==j)
                printf("the entered number in words is= %s thousand",o[i-1]);
        }

        if(num<10)
        {
            for(i=1; i<10; i++)
            {
                if (i==num)
                    printf("and %s ",o[i-1]);
            }
        }
        if((num>=10) && (num<20))
        {
            for(i=0; i<10; i++)
            {
                j=i+10;
                if (j==num)
                    printf(" and %s ",t1[i]);
            }
        }
        if((num>=20) && (num<100))
        {
            j=num/10;
            num=num-(j*10);
            for(i=1; i<10; i++)
            {
                if (i==j)
                    printf(" and %s",t2[i-2]);
            }
            for(i=1; i<10; i++)
            {
                if (i==num)
                    printf(" %s ",o[i-1]);
            }
        }
        if((num>=100) &&(num<1000))
        {
            j=num/100;
            num=num-(j*100);
            for(i=1; i<10; i++)
            {
                if (i==j)
                    printf(" %s hundred",o[i-1]);
            }
            if(num<10)
            {
                for(i=1; i<10; i++)
                {
                    if (i==num)
                        printf(" and %s ",o[i-1]);
                }
            }
            if((num>=10) && (num<20))
            {
                for(i=0; i<10; i++)
                {
                    m=i+10;
                    if (m==num)
                        printf(" and %s ",t1[i]);
                }
            }
            if((num>=20) && (num<100))
            {
                j=num/10;
                num= num-(j*10);
                for(i=1; i<10; i++)
                {
                    if (i==j)
                        printf(" and %s",t2[i-2]);
                }
                for(i=1; i<10; i++)
                {
                    if (i==num)
                        printf(" %s ",o[i-1]);
                }
            }
        }
    }

}
