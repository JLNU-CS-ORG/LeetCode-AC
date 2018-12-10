#define MAXSIZE	 10000

/* Temproray stack of implemented, just for easy */

struct stack {
	char str[MAXSIZE];
	int top;
};
typedef struct stack *stk;
stk init_stk()
{
	int i;
	stk temp = malloc(sizeof(*temp));
	for (i = 0; i < MAXSIZE; i++)
		temp->str[i] = 0;
	temp->top = 0;
	return temp;
}
void push(stk sk, char s)
{
	sk->str[sk->top] = s;
	sk->top++;
}
char pop(stk sk)
{
	if (sk->top == 0) {
		return -1;	
	}
	sk->top--;
	return sk->str[sk->top];
}
bool isValid(char* s)
{
	stk sk = init_stk();
	char temp;
	if (*s == '\0')
		return true;
	if (*(s + 1) == '\0')
		return false;
	while (*s != '\0') {
		if (*s == '{' || *s == '[' 
			|| *s == '(') {
			push(sk, *s);
		} else {
			temp = pop(sk);
			switch (*s) {
			case '}':
				if (temp != '{')
					return false;
				break;
			case ')':
				if (temp != '(')
					return false;
				break;
			case ']':
				if (temp != '[')
					return false;
				 break;
			default:
				 return false;
			}
		}
		s++;
	}
	if (sk->top == 0)
		return true;
	return false;
}
