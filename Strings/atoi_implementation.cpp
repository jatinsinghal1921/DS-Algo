int atoi(string str)
{
    int i,x,n = str.length();
    long long sum = 0;
    for(i=n-1; i>=0; i--)
    {
        if(i==0 && str[i]=='-')
        {
            sum = -sum;
            break;
        }
        
        x = str[i]-'0';
        if(x<0 || x>9)
            return -1;
        sum += x*pow(10, n-1-i);
    }
    return sum;
}