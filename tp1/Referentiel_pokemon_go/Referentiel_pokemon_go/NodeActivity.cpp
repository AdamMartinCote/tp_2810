#include "NodeActivity.h"



NodeActivity::NodeActivity()
{
}


NodeActivity::~NodeActivity()
{
}

void NodeActivity::setNodeToInactive(std::shared_ptr<AbstractNode> node)
{
	std::pair<std::shared_ptr<AbstractNode>, int> temp;
	temp.first = node;
	temp.second = node->getRespawnLength();
	nodes_.push_back(temp);
	node->setToInactive();
}

void NodeActivity::removePair(int index) {
	nodes_[index] = nodes_[nodes_.size() - 1];
	nodes_.pop_back();
}

void NodeActivity::activityController(int length) {
	for (int i = 0; i < nodes_.size(); i++) {
		nodes_[i].second -= length;
		while (nodes_[i].second <= 0) {
			nodes_[i].first->setToActive();
			removePair(i);
		}
	}
}