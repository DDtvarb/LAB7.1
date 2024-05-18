#include "Header.h"
int main() {
	Node* head = new Node{ 3, nullptr };
	head->next = new Node{ 5, nullptr };
	head->next->next = new Node{ -9, nullptr };
	head->next->next->next = new Node{ -7, nullptr };
	head->next->next->next->next = new Node{ -2, nullptr };

	Node* curr = head;
	while (curr != nullptr) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
	swapm(head);

	Node* current = head;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}

	return 0;
}