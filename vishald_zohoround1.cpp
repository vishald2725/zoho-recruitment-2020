#include <iostream>
#include <cstring>


using namespace std;

int main()
{

int l,n;
char chr[30];
cout<<"Enter string ";
cin>>chr;

l=strlen(chr);
const int r=l;
const int c=l;

char s[r][c]={" "};
int m = l/2;
int i,j,k=0;

for( i=0;i<l;i++)
{m = l/2;
    for( j=0;j<l-i-1;j++)
s[i][j]=' ';
 s[i][j]=chr[m];
 
for(k=0;k<=i;k++)
{ if(m+k>=l)
   m=-(l/2)-1;
    s[i][j+k]=chr[m+k];

}

}

for( i=0;i<l;i++)
{for( j=0;j<l;j++)
cout<<s[i][j];
cout<<"\n";}
     

    return 0;
}
