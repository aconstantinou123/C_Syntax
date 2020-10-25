// get var that is in another file. Extern is optional here
extern int privateData;

// void changeSystemClock(int);
void file1MyFunc1(void);

void file1MyFunc1(void)
{
    privateData += 900;
    // changeSystemClock(20);
}