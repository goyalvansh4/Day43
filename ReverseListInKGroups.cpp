class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };



Node* kReverse(Node* head, int k) {
    // base case
    if(head==NULL){
        return NULL;
    }
   //step1
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    
    while(curr != NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    //step2
    if(next != NULL){
        head->next=kReverse(next,k);
    }
    return prev;
}
