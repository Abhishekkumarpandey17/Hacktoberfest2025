/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int len=0;
        Node *tmp=head;
        while(tmp!=NULL){
            len++;
            tmp=tmp->next;
        }
        int newK=len-k;
        if(newK<0)return -1;
        tmp=head;
        while(newK>=1 && tmp!=NULL){
            tmp=tmp->next;
            newK--;
        }
        return tmp->data;
    }
};
