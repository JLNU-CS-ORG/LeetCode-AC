struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *new_link = malloc(sizeof(struct ListNode));
	struct ListNode *current = malloc(sizeof(struct ListNode));
	new_link = current;
	int isCarry = 0;
	while (l1 || l2 || isCarry) {
		current->next = malloc(sizeof(struct ListNode));
		int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + isCarry;
		isCarry = sum / 10;
		current->next->val = sum % 10;
		current = current->next;
		l1 = l1 ? l1->next : l1;
		l2 = l2 ? l2->next : l2;
		current->next = NULL;
	}
	return new_link->next;
}

