#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,i,j;
	float xp,x[20],y[20];
	printf("Enter number of data: ");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++){
		printf("Enter x[%d] and y[%d]",i,i);
		scanf("%f%f",&x[i],&y[i]);
	}
	printf("Enter Interpolating point Xp: ");
	scanf("%f",&xp);
	float yp = 0;
	for(i=0;i<=n-1;i++){
		float p =1;
			for(j=0;j<=n-1;j++){
				if(i != j){
					p = p*((xp-x[j])/(x[i]-x[j]));
				}
			}
			yp= yp+(p*y[i]);	
	}
	printf("%f",yp);
return 0;
}