//  https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1/#

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
    long long n1=0,n2=0, N=1000000007;
    Node* t1=l1,*t2=l2;
  
    while(t1!=NULL){
        n1=((n1)*10)%N+t1->data;
        t1=t1->next;
    }
    
    while(t2!=NULL){
        n2=((n2)*10)%N+t2->data;
        t2=t2->next;
    }
    
    return (n1%N*n2%N)%N;
}