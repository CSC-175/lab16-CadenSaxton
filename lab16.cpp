using namespace std;

int gcf(int a,int b)
{
int remainder;
    if(a > b)
    {
    remainder = a%b;
        if (remainder ==0)
            return b;
        else  return gcf(b,remainder);
    }
    else if (b > a)
    {
        remainder = b%a;
        if(remainder == 0)
            return a;
        else
            return gcf(a,remainder);
    }


    }

