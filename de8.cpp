#include<stdio.h>
#include<math.h>
#include<string.h>
//bai 1
int main(){
	//1.1
	int i,n,a[n];
	printf("Nhap n: "); scanf("%d", &n);
	printf("Nhap day so:\n");
	for(i=1;i<=n;i++){
		printf("Nhap a%d: ",i);
		scanf("%d", &a[i]);
	}	
	printf("Day so vua nhap la:\n");
	for(i=1;i<=n;i++){
		printf("%d\t", a[i]);
	}
}

//bai 2
typedef struct oto{
	char bien[10];
	int soCho;
	float soKm;
}oto;

int main()
{
	int n; 
	printf("Nhap so luong o to: ");
	scanf("%d", &n);
	int i;
	oto a[100];
	for(i=0; i<n; i++){
		printf("Nhap thong tin oto thu %d: ", i+1);
		printf("Nhap lan luot bien kiem soat, so cho ngoi, so km: ");
		scanf("%s", &a[i].bien);
		scanf("%d%f", &a[i].soCho, &a[i].soKm);
	}
	printf("Danh sach oto vua nhap la: \n");
	for(i=0; i<n; i++)
	{
		printf("%10s %d %.2f\n", a[i].bien, a[i].soCho, a[i].soKm);
	}
	int s=0, dem=0;
	for(i=0; i<n; i++){
		if(a[i].bien[0]=='2' && a[i].bien[1]=='9') {
			s+=a[i].soCho;
			dem++;
		}
	}
	if(dem==0) printf("\nKhong co oto co bien bat dau bang 29");
	else printf("TBC so cho ngoi cua cac oto... : %.2f", (float)s/dem);
}
