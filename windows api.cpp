#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <conio.h>
int main( int argc, TCHAR *argv[] )
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );
//
//    if( argc != 2 )
//    {
//        printf("Usage: %s [cmdline]\n", argv[0]);
//        getch();
//        return 0;
//    }

    // Start the child process. 
    if( !CreateProcess( NULL,   // No module name (use command line)
        "fact.exe",        // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory 
        &si,            // Pointer to STARTUPINFO structure
        &pi )           // Pointer to PROCESS_INFORMATION structure
    ) 
   {
        printf( "CreateProcess failed (%d).\n", GetLastError() );
     	getch();
	    return 0;
    }

    // Wait until child process exits.
    WaitForSingleObject( pi.hProcess, INFINITE );
getch();
    // Close process and thread handles. 
    CloseHandle( pi.hProcess );
    CloseHandle( pi.hThread );
    getch();
}
