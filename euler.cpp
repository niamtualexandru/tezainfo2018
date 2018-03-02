#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int st[100];
int k,nd;
int a[10][10],viz[10],n,m;
int df_r(int nod)
{int k;
 cout<<nod<<" ";
 viz[nod]=1;
 for(k=1;k<=n;k++)
  if(a[nod][k]&&!viz[k])
     df_r(k);
}
int e_valid()
{int x,y;
if(k==1)
   if(st[k]!=nd)
       return 0;

if(k>1)
   {x=st[k];
    y=st[k-1];
    if(a[x][y]==0)
    return 0;
    }
for(int i=1;i<=k-2;i++)
    if((st[i]==x && st[i+1]==y) ||  (st[i]==y && st[i+1]==x))
          return 0;

if(k==m)
   if(a[st[m]][st[1]]==0)
          return 0;


return 1;}

int tipar()
{for(int i=1;i<=m;i++)
    cout<<st[i]<<"  ";
 cout<<st[1];
 cout<<endl;

}
int back()
{ k=1;
 while(k>0)
    {if(st[k]<n)
         {st[k]++;
          if(e_valid())
              if(k==m)
                 tipar();
              else{k++;
                   st[k]=0;
                   }
            }
    else
        k--;}
}

int main()
{
    int clrscr();int x,y;
fstream f;
f.open("input.txt.txt",ios::in);
if(f)
   cout<<"ok";
else
   cout<<"error";
f>>n>>m;
for(int i=1;i<=m;i++)
  {f>>x>>y;
     a[x][y]=a[y][x]=1;

     }



cout<<"matricea adiacenta "<<endl;

for(int  i=1;i<=n;i++)

 {for(int j=1;j<=m;j++)

  cout<<a[i][j]<<" ";

  cout<<endl;

  }

 cout<<"nd=";
 cin>>nd;
 df_r(nd);
 int s=0;
 for(int i=1;i<=n;i++)
     s+=viz[i];
if(s!=n)
    cout<<"graful nu e conex ";
 else
    {int gasit=0;
     cout<<endl<<"graful e conex!"<<endl;
     for(int i=1;i<=n;i++)
        {s=0;
         for (int j=1;j<=n;j++)
                 s+=a[i][j];
         if(s%2!=0)
              gasit=1;}
         if(gasit)
             cout<<"am noduri fara grade pare";
         else
            cout<<"toate nodurile au gradele pare deci graful e eulerian";
             }
         back();
         getch();

  }
