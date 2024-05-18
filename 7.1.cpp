#include "Header.h"
void swapm(Node* head) {
	Node* minPos = nullptr;
	Node* maxNeg = nullptr;

	Node* current = head;

	while (current != nullptr) {
		if (current->data > 0 && (minPos == nullptr || current->data < minPos->data)) {
			minPos = current;
		}
		else if (current->data < 0 && (maxNeg == nullptr || current->data > maxNeg->data)) {
			maxNeg = current;
		}
		current = current->next;
	}

	if (minPos != nullptr && maxNeg != nullptr) {
		int temp = minPos->data;
		minPos->data = maxNeg->data;
		maxNeg->data = temp;
	}
}






