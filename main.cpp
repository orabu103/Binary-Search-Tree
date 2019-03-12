#include "BST.h"
int main()
{
	try {
	BST tree;
	tree.insert(3);
	tree.insert(5);
	tree.insert(-1);

	tree.print();
	cout << "The size is: " << tree.size() << endl;
	cout << tree.root() << endl;
	}
	catch (string & s) { cout << s << endl; }

}
