#include<stdio.h>
#include<stdlib.h>

int getlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}

char* getInD(char str[])
{
    int i=0,j=1;
    char c='\0';
    str = (char*)malloc(sizeof(char));
    while(c != '\n')
    {
        
        str = (char*)realloc(str, j*sizeof(char));
        c = getc(stdin);
        if(c=='\n')
        {
            break;
        }
        str[i]=c;
        i++;
        j++;
    }
    str[i]='\0';
   
    return str;
}

void* memcpy1(void *dest, void *src, int n)
{
    //converting the void pointers to char pointers.
    char* cdest = (char*)dest;
    char* csrc = (char*)src;
    for(int i=0;i<n;i++)
    {
        *(cdest+i)=*(csrc+i);
    }
    return dest;
} 

void* memmove1(char dest[], char src[], int n)
{
    char *buf;
    buf = (char*)malloc(getlen(src)*sizeof(char));
    int i=0;
    while(src[i]!='\0')
    {
        buf[i]=src[i];
        i++;
    }
    for(int i=0;i<n;i++)
    {
        *(dest+i)=*(buf+i);
    }

    return dest;
}

char* strcat1(char str1[], char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    str1[i]=' ';
    i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
   
    return str1;  

}

char* strchr1(char str1[],char c)
{
    while(*str1!='\0')
    {
        if(*str1==c)
        {
            return str1;
        }
        str1++;
    }
    
}

void strcpy1(char str2[],char str1[])
{
    int i=0;
    for( i=0;i<getlen(str1);i++)
    {
        str2[i] = str1[i];
    }
    str2[i]='\0';
}

char* strncpy1(char dest[], char source[], int n)
{
    dest = realloc(dest,n*sizeof(char));
    int s = getlen(source);
  //  printf("The size is %d",s);
    if(n<=s)
    {
        int i=0;
        for( i=0;i<n;i++)
        {
            
            dest[i]=source[i];
        }
       dest[i]='\0';
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i<s)
            {
               
                dest[i]=source[i];
            }
            else{
               
                dest[i]='\0';
            }
        }   
    }
    return dest;
}

void strrev1(char str1[])
{
    char temp;
    int len = getlen(str1);
    for(int i=0;i<=len/2;i++)
    {
        temp = str1[len-1-i];
        str1[len-1-i]=str1[i];
        str1[i]=temp;
    }
}

char* strtok1(char str1[], char delm)
{
    
    char* res;
    int size = getlen(str1);
    int temp=0;
   if(size<=0)
   {
    return str1;
   }
    for(int i=0;i<size;i++){
        if(temp==0 && str1[i]==delm)
        {
            
            continue;
        }
        else if(temp==1 && str1[i]==delm)
        {
            res[i]='\0';
            str1 = str1+i+1;
            break;
        }
        else{
            if(temp==0)
            {
                res=str1+i;
                temp=1;
            }
            
        
            //res = str1+i;
            continue;
            
        }
        
        
    }
    return res;

}











