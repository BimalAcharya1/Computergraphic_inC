#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd =DETECT, gm, error, x1, y1, x2, y2;
	int dx, dy, x, y;
	
	initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
	
	printf("Enter the coordinates of first point:(X1, Y1):");
	scanf("%d%d"&x1,&y1);
	
	printf("Enter the coordinates of second point:(X2, Y2):");
	scanf("%d%d"&x2,&y2);
	
	dx=x2-x1;
	dy=y2-y1;
	
	x=x1;
	y=y1;
	
	int p=2*dy-dx;
	
	while(x<x2){
		delay(10);
		putpixel(x,y,15);
		x++;
		
		if(p<0)
		  p=p+2*dy;
		else{
			y=y++;
		    p=p+2*dy-2*dx;
		}
		  
	}

    getch();
    closegraph();
}
