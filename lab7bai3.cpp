#include <stdio.h>
int main ()
{
	int a[5],i;
	printf ("------Nhap Mang------\n");
	for (i=0; i<5; i++)
	{
	   printf ("\nNhap so thu %d: ", i+1);
	   scanf ("%d", &a[i]);
	}
	printf("mang vua nhap la (cac so am se dc thay the bang so 0): \n");
	for (i=0; i<5 ;i++)
	{
	   if (a[i]<0)
	   {
	   	  printf ("0\t", a[i]);
	   }else 
	   {
	   	  printf ("%d\t", a[i]);
	   }
	}
	
	return 0;
}
