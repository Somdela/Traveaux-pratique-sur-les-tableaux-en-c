
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 50
void lire (int A[],int d)
{	int i;	
	for(i=0; i<d ; i++)
	{	printf(" entrer L'element A[%d]\t",i);
		scanf("%d",&A[i]);
	}}
void afficher(int A[],int d)
	{int i;	
	for(i=0; i<d ; i++)
	{
		printf("%d\t",A[i]);
	}}
void trier (int A[], int d)
{	int i,j,pos,x;
	for(i=0 ;i<=d-1;i++)
	{	pos=i;
		for(j=i+1;j<d;j++)
		{
			if (A[j]<A[pos])
			pos=j;}
	if(pos!=i)	
     {
     	x=A[i];
     	A[i]=A[pos];
     	A[pos]=x;
	 }}}
int recherche(int A[],int d,int elt)
  {	int start=0, end=d-1, stop=0, middle, pos =-1;
		while(start<=end && stop==0)
  		{
  			middle= (start+end)/2;
		 	 if(elt==A[middle]) stop=1;
		 	 else if(elt<A[middle]) end=middle-1;
		  	else start =middle +1;}
	return (stop);}
void main()
  {	int A[max], d, rech, result;
  	printf("\nEntrer la dimension du tableau \t");
  	scanf("%d",&d);
  	lire(A,d);
  	printf("Avant tri\n\n");
  	afficher(A,d);
  	trier (A,d);
  	printf("\nApres tri\n\n");
  	afficher(A,d);
  	printf("\nEntrer l'element a rechercher\n");
  	scanf("%d", &rech);
  	result= recherche (A,d,rech);
  	if(result==1)
  	printf("L'Element rechercher existe dans le tableau\n");
  	else printf("l'Element n'esxite pas dans le trableau\n");
	}

