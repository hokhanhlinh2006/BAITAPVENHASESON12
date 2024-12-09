#include<stdio.h>
void giaithua(n){
	long long int sum=1;
	int i;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	printf("%d",sum);
	

} 
int main(){
	int number;
	printf("moi ban nhap vao so can tinh giai thua\n");
	scanf("%d",&number);
	giaithua(number);

	
	return 0;
}
