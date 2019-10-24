#include <stdio.h>

const int max = 1000;

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu %d = ", i);
        scanf("%d", &a[i]);
    }
}

int main()
{
	int n,sum,dem=0;
	int ary[max];
	float N;
	sum = N = 0;
	
	printf ("Nhap so luong phan tu: ");
	do {
		scanf ("%d", &n);
		if (n <= 0 || n>max)
		{
			printf ("Nhap lai so luong phan tu: ");
		}
	}while (n<=0 || n>max);
	
	printf ("------Nhap Mang------\n");
	NhapMang(ary,n);
	
	for (int i = 0; i<n; i++)
	{   
	    if (ary[i]%2!=0 && i%2==0)
	    {
		    sum += ary[i];
		    dem++;
		}
	}
	
	N = (float)sum/dem;
	printf ("trung binh cong cua cac so le dung o vi tri chan trong mang la: %.2f \n", N);
	
	return 0;
}
