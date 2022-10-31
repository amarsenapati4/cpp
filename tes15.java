import java.io.IOException;
import java.io.*;
class test15
{
public static void main(String args[]) throws IOException
{
int x=0;
int y=0;
for(int z=0;z<5;z++)
{
    if((++x>2)&&(++y>2))
    {
        x++;
    }
}
System.out.println(x+" "+y);
}
}