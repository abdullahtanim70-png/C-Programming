#include<stdio.h>
int main(){
    double N,a=100.00;
    int Z,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x;
    scanf("%lf",&N);
    Z=N*a;
    b=Z/(100*100); //100$
    c=Z%(100*100);
    d=c/(50*100); // 50$
    e=c%(50*100);
    f=e/(20*100); //20$
    g=e%(20*100);
    h=g/(10*100);//10$
    i=g%(10*100);
    j=i/(5*100);//5$
    k=i%(5*100);
    l=k/(2*100);//2$
    m=k%(2*100);
    n=m/(1*100);//1 $
    o=m%(1*100);
    p=o/(0.50*100.00);//0.50 $
    q=o - (p*0.50*100.00);
    r=q/(0.25*100.00);//0.25$
    s=q - (r*0.25*100.00);
    t=s/(0.10*100.00);//0.10$
    u=s - (t*0.10*100.00);
    v=u/(0.05*100.00);//0.05$
    w=u - (v*0.05*100.00);
    x=w/(0.01 *100.00);//0.01


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",b);
    printf("%d nota(s) de R$ 50.00\n",d);
    printf("%d nota(s) de R$ 20.00\n",f);
    printf("%d nota(s) de R$ 10.00\n",h);
    printf("%d nota(s) de R$ 5.00\n",j);
    printf("%d nota(s) de R$ 2.00\n",l);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n);
    printf("%d moeda(s) de R$ 0.50\n",p);
    printf("%d moeda(s) de R$ 0.25\n",r);
    printf("%d moeda(s) de R$ 0.10\n",t);
    printf("%d moeda(s) de R$ 0.05\n",v);
    printf("%d moeda(s) de R$ 0.01\n",x);

    return 0;
}
