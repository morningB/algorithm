#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode { 	// ��� Ÿ��
	element data;
	struct ListNode *link;
} ListNode;


// �׽�Ʈ ���α׷�
int main(void)
{
	ListNode* head1 = NULL;
	ListNode* head2 = NULL;

	head1 = insert_first(head1, 10);
	head1 = insert_first(head1, 20);
	head1 = insert_first(head1, 30);
	print_list(head1);

	head2 = reverse(head1);
	print_list(head2);
	return 0;
}
