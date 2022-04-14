int testachar (char a)
{
    if(a > 64 && a < 91)
        return 1;
    else if(a > 96 && a < 123)
        return 2;
    else if(a > 47 && a < 58)
        return 3;
    else
        return 0;
}


