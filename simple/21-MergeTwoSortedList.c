struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) 
{
	if (!l1 || !l2)
		return l1 == NULL ? l2 : l1;
	struct ListNode *new_list = malloc(sizeof(*new_list));
	struct ListNode *result_list = new_list;
	struct ListNode *ptr_l1 = l1;
	struct ListNode *ptr_l2 = l2;
	while (ptr_l1 && ptr_l2) {
		if (ptr_l1->val < ptr_l2->val) {
			new_list->val = ptr_l1->val;
			ptr_l1 = ptr_l1->next;
		} else {
			new_list->val = ptr_l2->val;
			ptr_l2 = ptr_l2->next;
		}
		if (ptr_l1 != NULL && ptr_l2 != NULL) {
			new_list->next = malloc(sizeof(*new_list));
			new_list = new_list->next;
		}
	}
	new_list->next = ptr_l1 == NULL ? ptr_l2 : ptr_l1;
	return result_list;
}
