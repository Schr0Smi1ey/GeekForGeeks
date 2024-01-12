class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        vector<int> v;
        while(node1 != NULL){
            v.push_back(node1->data);
            node1 = node1->next;
        }
        while(node2 != NULL){
            v.push_back(node2->data);
            node2 = node2->next;
        }
        if(v.size() == 0){
            return NULL;
        }
        sort(v.rbegin(),v.rend());
        Node *head = new Node(),*tail = new Node();
        for(int i = 0;i < v.size();i++){
            
            Node *temp = new Node();
            temp->data = v[i];temp->next = NULL;
            if(i){
                tail->next = temp;
                tail = temp;
            }
            else{
                head = temp;
                tail = temp;
            }
        }
        return head;
    }  
};