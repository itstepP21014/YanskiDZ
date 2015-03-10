int myStrlen(const char *somestring)
{
    int counter=0;
    while(*somestring++)
    {
        counter++;
    }
    return counter;
}

int myStrcmp(const char *a,const char *b)
{
    int result=0;
    while(result==0 && (*a || *b))
    {
        result=*a-*b;
        ++a;
        ++b;
    }
    if (!result)
    {
        result=*a-*b;
    }
    return result;
}
