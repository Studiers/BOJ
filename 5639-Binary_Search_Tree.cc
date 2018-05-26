#include <iostream>
#include <string>

typedef struct _Tree {
	struct _Tree *left = nullptr, *right = nullptr;
	int value;
} Tree;

void insert_node(Tree*& root, int value) {
	if (root == nullptr) {
		root = new Tree;
		root->value = value;
		return;
	}

	if (root->value > value) {
		insert_node(root->left, value);
	}
	else {
		insert_node(root->right, value);
	}
}

void front_search(Tree* root) {
	if (root == nullptr)
		return;

	std::cout << root->value << '\n';

	front_search(root->left);
	front_search(root->right);
}

void midldle_search(Tree* root) {
	if (root == nullptr)
		return;

	midldle_search(root->left);

	std::cout << root->value << '\n';

	midldle_search(root->right);
}

void back_search(Tree* root) {
	if (root == nullptr)
		return;

	back_search(root->left);
	back_search(root->right);

	std::cout << root->value << '\n';
}

int main(void) {
	Tree* root = nullptr;	

	std::string value;

	while (true) {
		std::getline(std::cin, value);
		
		if (value == "") {
			break;
		}

		insert_node(root, std::stoi(value));
	}

	back_search(root);
	return 0;
}