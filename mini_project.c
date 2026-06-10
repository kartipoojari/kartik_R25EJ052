#include <stdio.h>

#define ROWS 20
#define COLS 40

char canvas[ROWS][COLS];

void initCanvas()
{
    int i,j;
    for(i=0;i<ROWS;i++)
        for(j=0;j<COLS;j++)
            canvas[i][j]='_';
}

void displayCanvas()
{
    int i,j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
            printf("%c",canvas[i][j]);
        printf("\n");
    }
}

void drawRectangle(int x,int y,int w,int h)
{
    int i,j;
    for(i=x;i<x+h;i++)
        for(j=y;j<y+w;j++)
            if(i<ROWS && j<COLS)
                canvas[i][j]='*';
}

void drawLine(int x1,int y1,int x2,int y2)
{
    int i;
    if(x1==x2)
    {
        for(i=y1;i<=y2;i++)
            canvas[x1][i]='*';
    }
    else if(y1==y2)
    {
        for(i=x1;i<=x2;i++)
            canvas[i][y1]='*';
    }
}

void drawTriangle(int x,int y,int size)
{
    int i,j;

    for(i=0;i<size;i++)
    {
        canvas[x+i][y]='*';
        canvas[x+size-1][y+i]='*';
        canvas[x+i][y+i]='*';
    }
}

void drawCircle(int cx,int cy,int r)
{
    int i,j;

    for(i=0;i<ROWS;i++)
        for(j=0;j<COLS;j++)
            if((i-cx)*(i-cx)+(j-cy)*(j-cy)<=r*r)
                canvas[i][j]='*';
}

void deleteObject(int x,int y,int w,int h)
{
    int i,j;

    for(i=x;i<x+h;i++)
        for(j=y;j<y+w;j++)
            if(i<ROWS && j<COLS)
                canvas[i][j]='_';
}

int main()
{
    int choice;
    initCanvas();

    do
    {
        printf("\n1.Rectangle");
        printf("\n2.Line");
        printf("\n3.Triangle");
        printf("\n4.Circle");
        printf("\n5.Delete");
        printf("\n6.Display");
        printf("\n7.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                int x,y,w,h;
                printf("Enter x y width height: ");
                scanf("%d%d%d%d",&x,&y,&w,&h);
                drawRectangle(x,y,w,h);
                break;
            }

            case 2:
            {
                int x1,y1,x2,y2;
                printf("Enter x1 y1 x2 y2: ");
                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                drawLine(x1,y1,x2,y2);
                break;
            }

            case 3:
            {
                int x,y,s;
                printf("Enter x y size: ");
                scanf("%d%d%d",&x,&y,&s);
                drawTriangle(x,y,s);
                break;
            }

            case 4:
            {
                int x,y,r;
                printf("Enter centerX centerY radius: ");
                scanf("%d%d%d",&x,&y,&r);
                drawCircle(x,y,r);
                break;
            }

            case 5:
            {
                int x,y,w,h;
                printf("Enter x y width height to erase: ");
                scanf("%d%d%d%d",&x,&y,&w,&h);
                deleteObject(x,y,w,h);
                break;
            }

            case 6:
                displayCanvas();
                break;
        }

    }while(choice!=7);

    return 0;
}
