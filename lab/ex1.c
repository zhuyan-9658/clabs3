#include <string.h>
void reverse(char s[],int i,int len)
{
    reverse(s,0,strlen(s));
}
main()
{
    int c,j;
    j = len-(i+1);
    if(i<j){
        c = s[j];
        s[i]=s[j];
        s[j]=c;
        reverse(s,i++,len);

    }
}

 