#include <iostream>
#include <queue>

using namespace std;

int main() {

	// Å¥ »ý¼º
	queue<int> q;


	// push
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);


	// pop
	q.pop();
	q.pop();
	q.pop();


	// front
	cout << "front element: " << q.front() << '\n';


	// back
	cout << "back element: " << q.back() << '\n';


	// size
	cout << "queue size: " << q.size() << '\n';

	// empty
	cout << "Is it empty?: " << (q.empty() ? "Yes" : "No") << '\n';

	if(!q.empty())



	return 0;

}