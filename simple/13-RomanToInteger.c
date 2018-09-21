int romanToInt(char* s) {
	int result = 0;
	while (*s != '\0') {
		if (*s == 'I' && *(s + 1) == 'V') {
			result += 4;
			s += 2;
			continue;
		}
		if (*s == 'I' && *(s + 1) == 'X') {
			result += 9;
			s += 2;
			continue;
		}
		if (*s == 'X' && *(s + 1) == 'L') {
			result += 40;
			s += 2;
			continue;
		}
		if (*s == 'X' && *(s + 1) == 'C') {
			result += 90;
			s += 2;
			continue;
		}
		if (*s == 'C' && *(s + 1) == 'D') {
			result += 400;
			s += 2;
			continue;
		}
		if (*s == 'C' && *(s + 1) == 'M') {
			result += 900;
			s += 2;
			continue;
		}
		switch(*s) {
			case 'I':
				result += 1;
				break;
			case 'V':
				result += 5;
				break;
			case 'X':
				result += 10;
				break;
			case 'L':
				result += 50;
				break;
			case 'C':
				result += 100;
				break;
			case 'D':
				result += 500;
				break;
			case 'M':
				result += 1000;
				break;
		}
		s++;
	}
	return result;
}

