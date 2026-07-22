class Solution {
private:

//this is the leeetcoode 133 . clone graph
//simply done using hashmap . we save the  cloned node for each node to mark as visited .
    unordered_map<Node*, Node*> mp;

public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return nullptr;

        if (mp.count(node))
            return mp[node];

        Node* clone = new Node(node->val);
        mp[node] = clone;
        for (Node* neighbor : node->neighbors) {
            clone->neighbors.push_back(cloneGraph(neighbor));
        }

        return clone;
    }
};