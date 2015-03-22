#include <stdio.h>
#include <stdlib.h>

int main()
{
    int versh, rebra;
    int **ar=NULL;
    ar=(int**)malloc(versh*sizeof(int*));
    for (int i=0; i<versh;++i)
    {
        ar[i]=(int*)malloc(rebra*sizeof(int*));
    }
    FILE *file;
    file = fopen("graff.txt","r");
    if (file == NULL)
    {
        printf("Error!!!\a\n");
    }
    fscanf(file,"%d %d",&versh,&rebra);
    for(int i=0; i<versh; ++i)
    {
        for(int j=0; j<rebra; ++j)
        {
            fscanf(file,"%d",&ar[i]);
            printf("%d",ar[i]);
        }
    }
    fclose(file);
    for(int i=0;i<versh;++i)
    {
        free(ar[i]);
        ar[i]=NULL;
    }
    free(ar);
    ar=NULL;
    return 0;
}
