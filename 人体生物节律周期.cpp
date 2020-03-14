#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

int main()
{ 
  int x=0,y,biryear,birmon,birday,year,mon,day,number1=0,number2=0,a=0,t=0,q=0,z=0;
 
	 printf("--------------------------------------\n");
     printf("|      人体生物节律周期查询          |\n");
     printf("|           1:开始查询               |\n");
     printf("|           2:退出程序               |\n");
     printf("--------------------------------------\n");
     scanf("%d",&y);

  
  if(y!=2)
   {
	  printf("请输入你的出生_年_月_日\n");
      scanf("%d %d %d",&biryear,&birmon,&birday);
      getchar();
      printf("请输入你的测试的日期_年_月_日\n");
      scanf("%d %d %d",&year,&mon,&day);
  
   
 
	if((biryear%4==0&&biryear%100!=0)||(biryear%400==0))
	{
		switch(birmon)
		{
		case 1 :number1=0;break;
		case 2 :number1=31;break;
		case 3 :number1=60;break;
		case 4 :number1=91;break;
		case 5 :number1=121;break;
		case 6 :number1=152;break;
		case 7 :number1=182;break;
		case 8 :number1=213;break;
		case 9 :number1=244;break;
		case 10:number1=274;break;
		case 11:number1=305;break;
		case 12:number1=335;break;
		}
		number1=number1+birday;
	}
	else
	{
		switch(birmon)
		{
		case 1 :number1=0;break;
		case 2 :number1=31;break;
		case 3 :number1=60;break;
		case 4 :number1=91;break;
		case 5 :number1=121;break;
		case 6 :number1=152;break;
		case 7 :number1=182;break;
		case 8 :number1=213;break;
		case 9 :number1=244;break;
		case 10:number1=274;break;
		case 11:number1=305;break;
		case 12:number1=335;break;
		}
		number1=number1+birday;
	}
		if((year%4==0&&year%100!=0)||(year%400==0))
	{
		switch(mon)
		{
		case 1 :number2=0;break;
		case 2 :number2=31;break;
		case 3 :number2=60;break;
		case 4 :number2=91;break;
		case 5 :number2=121;break;
		case 6 :number2=152;break;
		case 7 :number2=182;break;
		case 8 :number2=213;break;
		case 9 :number2=244;break;
		case 10:number2=274;break;
		case 11:number2=305;break;
		case 12:number2=335;break;
		}
		number2=number2+day;
	}
	else
	{
		switch(mon)
		{
		case 1 :number2=0;break;
		case 2 :number2=31;break;
		case 3 :number2=60;break;
		case 4 :number2=91;break;
		case 5 :number2=121;break;
		case 6 :number2=152;break;
		case 7 :number2=182;break;
		case 8 :number2=213;break;
		case 9 :number2=244;break;
		case 10:number2=274;break;
		case 11:number2=305;break;
		case 12:number2=335;break;
		}
		number2=number2+day;
	}
		for(biryear;biryear<=year;biryear++)
		{
			if((biryear%4==0&&biryear%100!=0)||(biryear%400==0))
		
				a=a+1;
		}
		x=((year-biryear)*365+a-number1+number2)*-1;
		
	  
	char t=0,q=0,z=0;
	t=x%23;
	q=x%28;
	z=x%33;
	//测试体力节律 
	if(t==0)
	{
	  printf("您处于体力节律的周期日,此时的体力容易下降,尽量减少体力活动\n");
	}
	else if(t>0&&t<12)
	{
		printf("您处于体力节律的高潮期的第%d天,普通群众可以在此期间好好健身，若是运动员则可加强这段时间的训练，以便达到更好的训练效果\n",t);	
	}
	else if(t==12)
	{
	    printf("您处于体力节律的临界日，减少相关危险活动，避免意外的发生\n");
	}
	else if(t>12)
	{
		printf("您处于体力节律的低潮期，此期间最好不要不从事相关危险活动，给自己的身体做一个放松\n");
	}
	//测试情绪节律 
	if(q==0)
	{
        printf("您处于情绪节律的周期日\n");
	}
	else if(q>0&&q<14)
	{
		printf("您处于情绪节律高潮期的第%d天，抓紧从事脑力活动，取得事半功倍的效果\n",q);
	}
	else if(q==14)
	{
		printf("您处于情绪节律的临界日\n");
	}
	else if(q>14)
	{
		printf("您处于情绪节律的低潮期，此阶段避免处理一些繁琐的事\n");
	}
	//测试智力节律 
	if(z==0)
	{
	    printf("您处于智力节律的周期日，适当减少脑力活动\n");
	}
	else if(z>0&&z<17)
	{
		printf("您处于智力节律的高潮期的第%d天，建议您这段时间加强对学习，脑力活动方面的安排\n",z);
	} 
	else if(z==17)
	{
		printf("您处于智力节律的临界日\n");
	}
	else if(z>17)
	{ 
	printf("您处于智力节律的低潮期,建议您在此期间做一些放松脑力的活动\n");
	}
	}
	else
		printf("请点击方框右上角的退出程序\n");
	
	system("pause");
}
