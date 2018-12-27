#include<bits/stdc++.h>
using namespace std;

class Msg {
	public:
		int id;

		Msg(int msg_id) {
			id = msg_id;
		}

		Msg(int msg_id,) {
			id = msg_id;
		}


class Node {
	private:
		int _id;
		vector<Node> _freinds;
		vector<string> _msgs;

		void _sendMsg(Node n, string msg){
			n.takeMsg(msg);
		}

		bool _inMsgs(string msg) {
			for(string m : _msgs) {
				if (m == msg)
					return true;
			}
			return false;
		}


	public:

		Node(int id) {
			_id = id;
		}

		Node(int id, Node firstFreind) {
			_id = id;
			_freinds.push_back(firstFreind);
		}

		int getId() {
			return _id;
		}


		void takeMsg(string msg) {
			cout << "node " << _id << " takes " << msg << endl;

			//if first time recieving msg, send to all freinds
			if (!_inMsgs(msg))
				for(Node freind: _freinds)
						_sendMsg(freind, msg);
		}

		void explore() {
			for(auto freind : _freinds) {
				_sendMsg(freind, "test");
				//TODO: ask freind for freind list

			}
		}
};


int main(int argc, char *argv[]) {

	vector<Node> nodes;

	Node n(0);
	nodes.push_back(n);
	for(int i = 1; i < 10; ++i) {
		Node n(i, nodes.back());
		nodes.push_back(n);
	}
	nodes[0] = Node(0, nodes.back());



	for(Node node : nodes)
		node.explore();


	return 0;
}

