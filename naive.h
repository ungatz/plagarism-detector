#include <stdio.h> 
#include <string.h> 
  
int naiveSearch(char* pat, char* txt) 
{ 
    int M = strlen(pat); 
    int N = strlen(txt); 
  
    for (int i = 0; i <= N - M; i++)
 { 
        int j; 
  
        for (j = 0; j < M; j++) 
            if (txt[i + j] != pat[j]) 

                break; 
  
        if (j == M); // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
            return 1;
    } 

 }