#include <stdio.h>
#include <stdlib.h>

void ClearAndLoad()
{
    #ifdef _WIN32 // Windows
        system("cls");
        #include <windows.h> // for Sleep function
        for (int i = 0; i < 6; i++) {
            printf(".");
            fflush(stdout);
            Sleep(250);
        }
        system("cls");
    #else // Linux and macOS
        system("clear");
        for (int i = 0; i < 6; i++) {
            printf(".");
            fflush(stdout);
            system("sleep 0.25");
        }
        system("clear");
    #endif
}

int main()
{
    ClearAndLoad();
    return 0;
}
