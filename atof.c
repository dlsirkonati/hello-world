


#include<stdio.h>
float my_atof(char * f)
{
	int n=1,i=0,j,num;
	float flo=0.0,num1=0.0;
	if(f[0]=='-')
	   i=1;
	else
		i=0;
	for(num=0;f[i]!='.';i++)
		num=num*10+f[i]-48;
	for(i=i+1;f[i];i++)
	{
		num1=num1*10+f[i]-48;
		n=n*10;
	}
//	num1=num1%n;
	num1=num1/n;
	flo=num+num1;
	if(f[0]=='-')
		return -flo;
	else
	return flo;
	
}
int main(int argc, char ** argv)
{
	float num;
	if (argc!=2)
	{
		printf("usage:a.out string\n");
		return 0;
	}
	printf("the string entered is: %s\n",argv[1]);
	num=my_atof(argv[1]);
	printf("the float is:%f\n",num);
	return 0;
}
		
