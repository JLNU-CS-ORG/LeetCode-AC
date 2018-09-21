int ispalindromic(char *s, int left, int right) 
{
    int i;
    for (i = 0; i < ((right - left) + 1) / 2; i++) {
        if (s[i + left] != s[right - i])
            return false;
    }
    return true;
}
char* longestPalindrome(char* s) {
    int max   = 0;
    int start = 0;  /* window start point */
    int end   = 0;  /* end point of window */
    int len = strlen(s);
    int k = 0;
    char *result = malloc(sizeof(char) * 1001);
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (ispalindromic(s, i, j)) {
                /* is palindromic string */
                if ((j - i) > max) {
                    max = j - i;
                    end = j;
                    
                    start = i;
                }
            }
        }
    }
    for (i = start; i <= end; i++)
        result[i - start] = s[i];

    result[i - start] = '\0';
    return result;
}
