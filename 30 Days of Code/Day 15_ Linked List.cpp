

      Node* insert(Node *head,int data)
      {
          Node * newNode = new Node(data);
          Node * tail = head;
          if ( !head ) { return newNode; }
          
          for (;tail->next; tail = tail->next);
          tail->next = newNode;
          
          return head;
      }

