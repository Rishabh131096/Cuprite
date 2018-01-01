#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2, *fptr3;
    int g,p,x,a,k,i;

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
    fptr2 = fopen("/nfs-B/B", "w");
    if (fptr2 == NULL)
    {
        exit(0);
    }

    // Read contents from file
      	k = 1;
	i = a;
	while(i--){
    		k = (g*k)%p;
	}
	k = k%p;
	 fprintf( fptr2,"%d ",k);
       
    
    fclose(fptr2);
    return 0;
}

