#include <stdio.h>

const int max = 1000;

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu %d = ", i+1);
        scanf("%d", &a[i]);
    }
}

int main()
{
	int n,dem=0, sum;
	int ary[max];
	float N;
	sum = N = 0;
	
	printf ("Nhap so luong phan tu cua mang: ");
	do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > max);
	
	printf("\n======NHAP MANG=====\n");
	NhapMang(ary, n);
	
	for (int i = 0; i < n;i++)
	{ 
	   if (ary[i]%2!=0)
	    {	   
		   sum = sum + ary[i];
		   dem++;
		}
	}
	
	N = (float)sum/dem;
	printf ("trung binh cong cac so le trong mang vua nhap la %.2f \n", N);
	
	return 0;
}
