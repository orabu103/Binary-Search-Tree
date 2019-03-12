#include "BST.h"
int main()
{
	try {
	BST tree;
	tree.insert(3);
	tree.insert(5);
	tree.insert(7);

	cout << tree.contains(3) << endl;
	tree.print();
	cout << tree.size() << endl;
	}
	catch (string & s) { cout << s << endl; }

}
