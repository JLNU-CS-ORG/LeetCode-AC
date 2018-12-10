int check_repeat(int begin, int end, char *s)
{
	int i, j;
	for (i = begin; i <= end; i++) {
		for (j = i + 1; j <= end; j++) {
			if (s[i] == s[j])
				return 1;
		}
	}
	return 0;
}
int lengthOfLongestSubstring(char* s) {
	int maxlen = 1;
	int i, j, k;
	int sleng = strlen(s);
	if (*(s + 1) == '\0')
		return 1;
	if (*s == '\0')
		return 0;
	for (i = 0; i < sleng; i++) {
		for (j = i + 1; j < sleng; j++) {
		   if (!check_repeat(i, j, s)) {
				maxlen = ((j - i) + 1) > maxlen ? ((j - i) + 1) : maxlen;
			}	
		}
	}
	
	return maxlen;
}
