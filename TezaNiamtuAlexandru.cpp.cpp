#include <iostream>
#include <string.h>
using namespace std;
struct refe{
    int frecv;
    char sir;
    struct refe *stg,*drp;
} arbore;
refe *maker()
{
refe *root=new  refe;
root->frecv=4;
root->stg=new refe;
root->stg->frecv=2;
root->stg->sir='A';
root->drp=new refe;
root->drp->frecv=2;
root->drp->stg=new refe;
root->drp->stg->frecv=1;
root->drp->stg->sir='B';
root->drp->drp=new refe;
root->drp->drp->frecv=1;
root->drp->drp->stg=new refe;
root->drp->drp->stg->frecv=1;
root->drp->drp->stg->sir='D';
root->drp->drp->drp=new refe;
root->drp->drp->drp->frecv=0;
root->drp->drp->drp->stg=new refe;
root->drp->drp->drp->stg->frecv=0;
root->drp->drp->drp->stg->sir='C';
root->drp->drp->drp->drp=new refe;
root->drp->drp->drp->drp->frecv=0;
root->drp->drp->drp->drp->sir='E';
return root;
}
/*int RSD(arbore*somearb)
{
    if((*somearb)!=NULL)
    {
        cout<<somearb->frecv<<" ";
        RSD(somearb->stg);
        RSD(somearb->drp);
    }
}*/
struct mat{
    int frecventa;
    char text;
}matrice;
mat v[27];
int main()
{
    for(int i=0;i<27;i++)
    {
        v[i].frecventa=0;
    }
    int n;
    char text[256];
    cout<<"Introduceti textul:"<<endl;
    cin>>text;
    n=strlen(text);
    char testare_caracter[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<27;j++)
        {
            if(text[i]==testare_caracter[j])
            {
                v[j].frecventa++;
                v[j].text=testare_caracter[j];
                break;
            }
            else
            {
               v[j].frecventa=v[j].frecventa;
               v[j].text=testare_caracter[j];
            }
        }
    }
refe *root=new  refe;
cout<<root->frecv<<endl;
cout<<root->stg->frecv<<endl;
cout<<root->stg->sir<<endl;
cout<<root->drp->frecv<<endl;
cout<<root->drp->stg->frecv<<endl;
cout<<root->drp->stg->sir<<endl;
cout<<root->drp->drp->frecv<<endl;
cout<<root->drp->drp->stg->frecv<<endl;
cout<<root->drp->drp->stg->sir<<endl;
cout<<root->drp->drp->drp->frecv<<endl;
cout<<root->drp->drp->drp->stg->frecv<<endl;
cout<<root->drp->drp->drp->stg->sir<<endl;
cout<<root->drp->drp->drp->drp->frecv<<endl;
cout<<root->drp->drp->drp->drp->sir<<endl;


}
