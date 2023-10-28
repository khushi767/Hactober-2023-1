
class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) {
            return nullptr;
        }
        
        Node* dummy = new Node();
        dummy->next = head;
        Node* current = dummy;
        stack<Node*> stack;

        while (current) {
            if (current->child) {
                if (current->next) {
                    stack.push(current->next);
                }
                current->next = current->child;
                current->child->prev = current;
                current->child = nullptr;
            }

            if (!current->next && !stack.empty()) {
                current->next = stack.top();
                current->next->prev = current;
                stack.pop();
            }

            current = current->next;
        }

        head = dummy->next;
        if (head) {
            head->prev = nullptr;
        }

        delete dummy;
        return head;
    }
};
