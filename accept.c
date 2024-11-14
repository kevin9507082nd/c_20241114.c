
#include <stdio.h>

int GCD3(int a,int b,int c)
{
    while(a!=0&&b!=0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a>0){
        while(a!=0&&c!=0){
            if(a>c){
                a=a%c;
            }else{
                c=c%a;
            }
        }
        if(a==0){
            return c;
        }
        else{
            return a;
        }
    }else{
        while(b!=0&&c!=0){
            if(b>c){
                b=b%c;
            }else{
                c=c%b;
            }
        }
        if(b>0){
            return b;
        }
        else{
            return c;
        }
    }
}


int main(void)
{
    int x,y,z;
    while(scanf("%d %d %d",&x,&y,&z)!=EOF){
        printf("%d\n",GCD3(x,y,z));
    }
}

