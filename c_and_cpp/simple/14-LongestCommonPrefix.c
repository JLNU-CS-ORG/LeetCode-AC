char* longestCommonPrefix(char** strs, int strsSize)
{
	if (strsSize == 0)
		return "";
	const int size = strsSize;
	int str_size[size];
	int i, j;
	for (i = 0; i < strsSize; i++) {
		str_size[i] = strlen(strs[i]);
	}
	int min = str_size[0];
	for (i = 0; i < strsSize; i++) {
		if (str_size[i] > min)
			min = str_size[i];
	}
	char *result = malloc(min);
	for (j = 0; j < min; j++) {
		for (i = 0; i < strsSize; i++) {
			if (strs[0][j] != strs[i][j])
				break;
		}
		if (i == strsSize)
			result[j] = strs[0][j];
		else 
			break;
	}
	result[j] = '\0';
	return result;
}
