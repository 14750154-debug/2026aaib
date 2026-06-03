// week15-2b.cpp SOIT106_ADVANCE_011
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a = N/1000;
	int b = N/100 %10;
	int c = N/10 %10;
	int d = N%10;
	printf("%d\n",a*8+b*4+c*2+d*1);
}

// week15-2b.cpp SOIT106_ADVANCE_011
#include <stdio.h>
int main()
{
	char a,b,c,d;
	scanf("%c%c%c%c",&a,&b,&c,&d);
	int ans = 0;
	if (a=='1') ans+=8;
	if (b=='1') ans+=4;
	if (c=='1') ans+=2;
	if (d=='1') ans+=1;
	printf("%d\n",ans);
}
