/*     Implementation of atoi()
 *     ASCII to integer function*/
     #include<stdio.h>
     int my_atoi(char *p)
{
	int i=0,num=0;
	
	if (p[0]=='-')
		i=1;
	for(num=0;p[i];i++)//the critical section
	{
		if(p[i]>='0'&&p[i]<='9')
		{
		num=num*10+p[i]-48;// changing the ascii into integer
		}
		else 
			break;
	}
	if(p[0]=='-')
		return -num;// return if the no is negative
	else 
		return num;
}
int main(int argc,char **argv)//asking for command line input
{
	int num;
	if(argc!=2)//checking for the valid no. of inputes i.e 2 in this case
	{
		printf("usage:./a.out string\n");
		return 0;
	}
	printf("The string entered is: %s\n",argv[1]);
	num=my_atoi(argv[1]);
	printf("the number is: %d\n",num);

	return 0;
}





