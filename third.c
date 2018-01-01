#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2, *fptr3, *fptr4, *fptr5;
    int g,p,a,y,k,i;

    fptr3=fopen("/nfs-A/C","r");
    if(fptr3 == NULL){
	exit(0);	
	}

    fscanf(fptr3,"%d %d",&g,&p);
     fclose(fptr3);     

    // Open one file for reading
    fptr1 = fopen("/home/raggarwal/Desktop/Alice/privA", "r");
    if (fptr1 == NULL)
    {
        exit(0);
    }

     fscanf(fptr1,"%d",&a);
     fclose(fptr1);
   
    // Open another file for writing
   
    
    fptr4=fopen("/nfs-A/A","r");
    fscanf(fptr4,"%d",&y);  


    fclose(fptr4);

	
    fptr5=fopen("/home/raggarwal/Desktop/Alice/keyFin","w");
    k = 1;
    i = a;
    while(i--){
    	k = (y*k)%p;
    }
    k = k%p;
    fprintf( fptr5,"%d",k);

    fclose(fptr5);


    return 0;
}

