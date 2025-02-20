#include <stdio.h>

int main()
{
    int num = 255;
    int len = 0;
    float val = 1.234567;
    
    printf("Hello World");
    printf("Hello world\nHow are you?");
    printf("Hello \"World\", How are you?\n"); 
    printf ("Hey I got 84.20%% in my final exams\n");
    printf("num in octal format: %o\n", num);
    printf ("num in hexadecimal format(lowercase) : %x\n", num);
    printf ("num in hexadecimal format(uppercase) : %X\n", num);
    printf ("Hello world, how are you?\
    I love C programing language.\n");
    printf ("The file is store at c:\\files\\word_files\n");
    len = printf ("Hello\n");
    printf ("Length: %d\n", len);
    printf ("num (padded): %05d\n", num);
    printf ("str1=\"%20s\", str2=\"%-20s\"\n", "Hello", "World");
    printf("val = %.2f\n", val);
    printf("num = %i \n", num);
    printf("Address of num is: %p\n", &num);
           
    return 0;
}

