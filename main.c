#include<stdio.h>
#include<math.h>
int main()
{
	float rl, rg, m, d=1.00, fl, fg, frg, pl, pg, kl, kg, x;
	printf("Enter flow rate(m3/s):");
	scanf("%f",&m);
	rl=(m*1000.00*d)/0.001;
	rg=(m*1.23*d)/0.072;
	if(rl<2000.00)
	{
		fl=16.00/rl;
	}
	else
	{
		fl=0.079/(pow(rl,0.25));
	}
	if(rg<2000.00)
	{
		fl=16.00/rg;
	}
	else
	{
		fl=0.079/(pow(rg,0.25));
	}
	frg=(m*9.81)/(sqrt(1.23*998.00*d*9.8));
	kl=frg*sqrt(rl);
	kg=frg*sqrt(rg);
	pl=(2*fl*m*pow(kl,2))/(1000.00*d);
	pg=(2*fg*m*pow(kg,2))/(1.23*d);
	printf("%f\n%f\n",pl,pg);
	x=sqrt(pl/pg);
	printf("X=%f\n",x);
	return 0;
}
