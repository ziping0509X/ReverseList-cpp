//剑指第15题
//输入一个链表，反转链表后，输出新链表的表头。

#include <iostream>
#include <stack>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL)
            return NULL;
        else{
            int count=0;
            ListNode* len;
            len=pHead;
            while (len!=NULL){
                count++;
                len=len->next;
            }

            ListNode* p1[count];
            for(int i=0;i<count;i++){
                p1[i]=pHead;
                pHead=pHead->next;

            }

            pHead=p1[count-1];
            for(int j=0;j<count-1;j++){
                pHead->next=p1[count-2-j];
                pHead=pHead->next;
            }
            pHead->next=NULL;
            pHead=p1[count-1];

            return p1[count-1];
        }

    }
};

class Solution1 {
public:
    ListNode* ReverseList(ListNode* pHead) {

    }
};

int main(void){
    ListNode a(1),b(2),c(3),*head,*p;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    Solution solution;
    p=solution.ReverseList(head);
    for(int i=0;i<3;i++){
        cout<<p->val<<endl;
        p=p->next;
    }

}
//调试成功！！这是目前使用时间最长的一个题，但是完全是按照自己的思路完成的，值得庆祝
