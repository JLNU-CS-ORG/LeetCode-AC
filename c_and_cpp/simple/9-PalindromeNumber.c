bool isPalindrome(int x) {
	/* not convert the integer to string */
	int result = 0;
	int temp = x;
	if (x < 0)
		return false;
	if (x == 0)
		return true;
	while (temp != 0) {
		result = result * 10 + temp % 10;
		temp /= 10;
	}
	return x == result;
}
