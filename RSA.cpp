#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;


int main()
{
    int p=2,q=2,p_lim,q_lim,i,n,m,e,d,E,D,c,o;
    int k=(n,e);
   //string msg;
   int x;
   char msg[1000];

   cout<<"Enter two distinct upper limits for the two primes p,q:"<<endl;
   cin>>p_lim>>q_lim;
   cout<<"upper limit for p: "<<p_lim<<endl;
   cout<<"upper limit for q: "<<q_lim<<endl;

   for(int i=p_lim; i>2; i--){
        bool isprime=true;
    for(int j=2; j<i-1; j++){
   if(i%j==0){
       isprime=false;
   }
   }
   if(isprime)
   {
       p=i;
       break;
   }
   }
     for(int i=q_lim; i>2; i--){
            bool isprime=true;
       for(int j=2; j<i-1; j++){
        if(i%j==0){
         isprime=false;
    }
       }
       if(isprime){
        q=i;
        break;
       }
     }

  cout<<"p="<<p<<endl;
  cout<<"q="<<q<<endl;
  cout<<"n="<<p*q<<endl;
  m=(p-1)*(q-1);
  cout<<"m="<<m<<endl;
for(i=2;i<e;i++){
        if(m%i!=0 ){
           __gcd(m,e)==i;
           e=i;
        }
}
   cout<<"e="<<e<<endl;

   for(int k=0;k<10;k++){
     d=(m*k+1)/e;
    if((d*e)%m==1){
        cout<<"d="<<d<<endl;
    break;}
   }

 cout<<"Enter original Message: ";
 cin>>msg;

 for(i=0;i<msg.size(); i++)
    i =fmod(pow(m,e),n);
 cout<<"cipher msg" <<msg;
 /*
 for(i=0;i<msg[i]!='\0';i++){
        i=msg[i];
    //i=fmod(pow(m,e),n);
 }*/
 //cout<<"cipher message:"<<fmod(pow(m,e),n);

/*
 for(i=0;i<5000;i++){
    if((p-1)%i!=0 && (q-1)%i!=0)
        E=i;          //public key//
 }
 for(i=0;i<5000;i++){
    if((D*E)%((p-1)*(q-1))==1)
        D=i;   //private key//
 }
cout<<"D="<<D<<endl;
cout<<"E="<<E;


/*
c=o*E%n;
cout<<"Cipher message:"<<c;
/*
c=2*2%e;

for(i=0;i<o;i++){
c=(pow(o,e));
r=c%n;
r=i;
}
 //c=(pow(o,e))%n;//
*/
/*
 switch(x){
 case 1:
     for(i=0; (i<1000 && msg[i]!='\0') ; i++)
    msg[i]= msg[i]+2;

 cout<<"Cipher Message:"<<msg<<endl;
    break;
 }
*/


    return 0;


     }

