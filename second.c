#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2, *fptr3, *fptr4, *fptr5;
    int g,p,x,b,y,k,i;

    fptr3=fopen("/nfs-A/C","r");
    if(fptr3 == NULL){
	exit(0);	
	}

    fscanf(fptr3,"%d %d",&g,&p);
     fclose(fptr3);     

    // Open one file for reading
    fptr1 = fopen("/home/rishabh2/Desktop/Bob/privB", "r");
    if (fptr1 == NULL)
    {
        exit(0);
    }

     fscanf(fptr1,"%d",&b);
     fclose(fptr1);
   
    // Open another file for writing
    fptr2 = fopen("/nfs-A/A", "w");
    if (fptr2 == NULL)
    {
        exit(0);
    }

    // Read contents from file
      	k = 1;
	i = b;
	while(i--){
    		k = (g*k)%p;
	}
	k = k%p;
	 fprintf( fptr2,"%d ",k);
       
    
    fclose(fptr2);
    
    fptr4=fopen("/nfs-B/B","r");
    fscanf(fptr4,"%d",&x);  


    fclose(fptr4);

	
    fptr5=fopen("/home/rishabh2/Desktop/Bob/keyFin","w");
    k = 1;
    i = b;
    while(i--){
    	k = (x*k)%p;
    }
    k = k%p;
    fprintf( fptr5,"%d",k);

    fclose(fptr5);


    return 0;
}

