#include<stdio.h>
#include<string.h>
int main1()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    int i;
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    printf("Length of %s is %d",str,i);
    printf("\n");
    return 0;
}
int main2()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    char a;
    printf("Enter a character\n");
    scanf("%c",&a);
    int k=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==a)
        k+=1;
    }
    printf("number of occurance of %c in %s is %d",a,str,k);
}
int main3()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    char vow[]="aeiouAEIOU";
    int k=0;
    for(int i=0;vow[i];i++)
    {
        for(int j=0;str[j];j++)
        {
            printf("\n%c == %c ",str[j],vow[i]);
            if(vow[i]==str[j])
            {
                k=k+1;
                break;
            }

        }
    }
    printf("number of vowels in %s is %d",str,k);

}
int main4()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    char a=' ';
    int k=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==a)
        k+=1;
    }
    printf("%d",k);
}
int main5()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
    {
        if(str[i]>=97 && str[i]<=122)
        str[i]-=32;
    }
    printf("%s",str);
}
int main6()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90)
        str[i]+=32;
    }
    printf("%s",str);
}
int main7()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    int a=strlen(str);
    for(int i=0,j=a-1;i<a/2;i++,j--)
    {
        char a=str[i];
        str[i]=str[j];
        str[j]=a;
    }
    printf("%s",str);
}
int main8()
{
    char str[50];
    printf("Enter a string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    int a=0,d=0,s=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]>=97 && str[i]<=122)
        a+=1;
        else if(str[i]>=65 && str[i]<=90)
        a+=1;
        else if(str[i]>='0' && str[i]<='9')
        d+=1;
        else
        s+=1;
    }
    printf("\ntotal number of alphabets is %d, digits is %d and special character is %d",a,d,s);
}
int main9()
{
    char str[50];
    printf("Enter a string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    int a=strlen(str);
    char arr[a-1];
    for(int i=0;i<a;i++)
    {
        arr[i]=str[i];
    }
    for(int i=0;i<a;i++)
    printf("%c",arr[i]);
}
int main()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    char a;
    printf("Enter a character\n");
    scanf("%c",&a);
    int k=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==a)
       {
         k=i;
         break;
       }
    }
    printf("first occurance of %c is at index %d",a,k);
}