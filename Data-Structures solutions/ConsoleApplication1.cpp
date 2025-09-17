#include <iostream>

#include "clsDblLinkedList.h";
#include "clsMyQueue.h";
#include "clsMyStack.h";
#include "clsDynamicArray.h";

#include "clsMyQueueArr.h";
#include "clsMyStackArr.h";
#include "clsMyString.h";
#include "clsQueueLine.h";
using namespace std;


int main()
{



	/////Insert to head


	//clsDblLinkedList <int> MydblLinkedList;

	//if (MydblLinkedList.isEmpty())
	//{
	//	cout << "\nYes, Linked List is empty\n";
	//}
	//else
	//{
	//	cout << "\nno, Linked List isn't empty\n";

	//}
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;

	//MydblLinkedList.InsertAtBegenning(5);
	//MydblLinkedList.InsertAtBegenning(4);
	//MydblLinkedList.InsertAtBegenning(3);
	//MydblLinkedList.InsertAtBegenning(2);
	//MydblLinkedList.InsertAtBegenning(1);
	//MydblLinkedList.PrintList();
	//MydblLinkedList.UpdateItem(2, 500);
	//MydblLinkedList.InsertAfter(4, 6);
	//MydblLinkedList.PrintList();

	//clsDblLinkedList<int>::Node* N;

	//N=MydblLinkedList.GetNode(0);


	//cout << "\n\n\n\nValue : " << N->value << "\n\n\n\n";
	//cout << "\n\n\n\nValue Of item 2 : " << MydblLinkedList.GetItem(2) << "\n\n\n\n";
	//

	//MydblLinkedList.PrintList();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;
	//MydblLinkedList.Reverse();
	//MydblLinkedList.PrintList();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;
	//MydblLinkedList.Clear();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;


	//MydblLinkedList.InsertAtBegenning(5);
	//MydblLinkedList.InsertAtBegenning(4);
	//MydblLinkedList.InsertAtBegenning(3);
	//MydblLinkedList.InsertAtBegenning(2);
	//MydblLinkedList.InsertAtBegenning(1);
	//if (MydblLinkedList.isEmpty())
	//{
	//	cout << "\nYes, Linked List is empty\n";
	//}
	//else
	//{
	//	cout << "\nno, Linked List isn't empty\n";

	//}

	//MydblLinkedList.PrintList();

	//cout << "\nSize: " << MydblLinkedList.Size() << endl;

	//MydblLinkedList.PrintListDetails();

	////Find Node:

	//clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(3);
	//if (N1 != NULL)
	//{
	//	cout << "\nNode Found :-)\n";
	//}
	//else
	//{
	//	cout << "\nNode not Found :-(\n";

	//}

	//////Insert After:
	//MydblLinkedList.InsertAfter(N1, 500);

	//MydblLinkedList.PrintList();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;

	//MydblLinkedList.InsertAtEnd(50);

	//MydblLinkedList.PrintList();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;


	////Delete Node:
	//clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(50);
	//clsDblLinkedList<int>::Node* N3 = MydblLinkedList.Find(5);

	//MydblLinkedList.DeleteNode(N2);
	//MydblLinkedList.DeleteNode(N3);

	//MydblLinkedList.PrintList();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;

	//MydblLinkedList.DeleteFirstNode();

	//MydblLinkedList.DeleteLastNode();
	//MydblLinkedList.DeleteLastNode();

	//MydblLinkedList.PrintList();
	//cout << "\nSize: " << MydblLinkedList.Size() << endl;

	//clsDblLinkedList <float> MydblLinkedList1;


	//MydblLinkedList1.InsertAtBegenning(5.5);
	//MydblLinkedList1.InsertAtBegenning(4.5);
	//MydblLinkedList1.InsertAtBegenning(3.5);
	//MydblLinkedList1.InsertAtBegenning(2.5);
	//MydblLinkedList1.InsertAtBegenning(1.5);


	//MydblLinkedList1.PrintList();
	//cout << "\nSize: " << MydblLinkedList1.Size() << endl;

	//MydblLinkedList1.PrintListDetails();

	/*clsMyQueue<int>MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	MyQueue.Print();
	cout << MyQueue.front() << endl;
	cout << MyQueue.back() << endl;
	cout << MyQueue.Size() << endl;

	MyQueue.pop();
	MyQueue.pop();
	MyQueue.pop();
	MyQueue.pop();
	MyQueue.pop();

	cout << "\nQueue after pop: \n";
	MyQueue.Print();

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);


	cout<<"\nItem(2): "<<MyQueue.GetItem(2) << endl;

	MyQueue.Reverse();

	cout << "\nQueue after Reversing: \n";

	MyQueue.Print();

	MyQueue.UpdateItem(3, 500);
	cout << "\nQueue after Updating Item(3): \n";

	MyQueue.Print();

	MyQueue.InsertAfter(3, 600);
	cout << "\nQueue after Insert 600 after Item(3): \n";

	MyQueue.Print();

	MyQueue.InsertAtFront(100);
	MyQueue.Print();

	MyQueue.InsertAtBack(1000);
	MyQueue.Print();


	MyQueue.Clear();
	cout << "\nafter clear : ";
	MyQueue.Print();


	cout << "\n\n-----------------------------------------------------\n\n";
	clsMyStack<int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	MyStack.Print();
	cout << MyStack.top() << endl;
	cout << MyStack.bottom() << endl;
	cout << MyStack.Size() << endl;

	MyStack.pop();
	MyStack.pop();
	MyStack.pop();
	MyStack.pop();
	MyStack.pop();

	cout << "\nQueue after pop: \n";
	MyStack.Print();

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);


	cout << "\nItem(2): " << MyStack.GetItem(2) << endl;

	MyStack.Reverse();

	cout << "\nQueue after Reversing: \n";

	MyStack.Print();

	MyStack.UpdateItem(3, 500);
	cout << "\nQueue after Updating Item(3): \n";

	MyStack.Print();

	MyStack.InsertAfter(3, 600);
	cout << "\nQueue after Insert 600 after Item(3): \n";

	MyStack.Print();

	MyStack.InsertAtFront(100);
	MyStack.Print();

	MyStack.InsertAtBack(1000);
	MyStack.Print();


	MyStack.Clear();
	cout << "\nafter clear : ";
	MyStack.Print();*/

	/*clsDynamicArray<float> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10.5);
	MyDynamicArray.SetItem(1, 11.5);
	MyDynamicArray.SetItem(2, 12.5);
	MyDynamicArray.SetItem(3, 13.5);
	MyDynamicArray.SetItem(4, 14.5);

	cout << MyDynamicArray.isEmpty() << endl;
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.Print();

	MyDynamicArray.Resize(7);
	MyDynamicArray.Print();

	MyDynamicArray.Resize(2);
	MyDynamicArray.Print();

	cout << MyDynamicArray.GetItem(2) << endl;
	MyDynamicArray.Reverse();
	MyDynamicArray.Print();

	MyDynamicArray.Clear();
	MyDynamicArray.Print();

	MyDynamicArray.DeleteItem(2);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.DeleteItem(3);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.DeleteFirstItem();
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.DeleteLastItem();
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	short Index = MyDynamicArray.Find(13.5);

	if (Index == -1)
	{
		cout << "\nItem not found\n";
	}
	else
	{
		cout << "\nItem 13.5 found at Index " << Index << endl;
	}

	MyDynamicArray.DeleteItem(13.5f);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.InsertAt(4, 13);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.InsertAtBeggining(15);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.InsertAtEnd(9);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.InsertBefore(3, 15);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;

	MyDynamicArray.InsertAfter(3, 16);
	MyDynamicArray.Print();
	cout << MyDynamicArray.Size() << endl;*/


	/*clsMyQueueArr<int>MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	MyQueue.Print();
	cout << MyQueue.front() << endl;
	cout << MyQueue.back() << endl;
	cout << MyQueue.Size() << endl;

	MyQueue.pop();
	MyQueue.pop();
	MyQueue.pop();
	MyQueue.pop();
	MyQueue.pop();

	cout << "\nQueue after pop: \n";
	MyQueue.Print();

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);


	cout << "\nItem(2): " << MyQueue.GetItem(2) << endl;

	MyQueue.Reverse();

	cout << "\nQueue after Reversing: \n";

	MyQueue.Print();

	MyQueue.UpdateItem(3, 500);
	cout << "\nQueue after Updating Item(3): \n";

	MyQueue.Print();

	MyQueue.InsertAfter(3, 600);
	cout << "\nQueue after Insert 600 after Item(3): \n";

	MyQueue.Print();

	MyQueue.InsertAtFront(100);
	MyQueue.Print();

	MyQueue.InsertAtBack(1000);
	MyQueue.Print();


	MyQueue.Clear();
	cout << "\nafter clear : ";
	MyQueue.Print();*/


	/*clsMyStackArr<int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	MyStack.Print();
	cout << MyStack.top() << endl;
	cout << MyStack.bottom() << endl;
	cout << MyStack.Size() << endl;

	MyStack.pop();
	MyStack.pop();
	MyStack.pop();
	MyStack.pop();
	MyStack.pop();

	cout << "\nQueue after pop: \n";
	MyStack.Print();

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);


	cout << "\nItem(2): " << MyStack.GetItem(2) << endl;

	MyStack.Reverse();

	cout << "\nQueue after Reversing: \n";

	MyStack.Print();

	MyStack.UpdateItem(3, 500);
	cout << "\nQueue after Updating Item(3): \n";

	MyStack.Print();

	MyStack.InsertAfter(3, 600);
	cout << "\nQueue after Insert 600 after Item(3): \n";

	MyStack.Print();

	MyStack.InsertAtFront(100);
	MyStack.Print();

	MyStack.InsertAtBack(1000);
	MyStack.Print();


	MyStack.Clear();
	cout << "\nafter clear : ";
	MyStack.Print();*/

	/*clsMyString S1;
	cout << "\nS1 = " << S1.Value;
	S1.Value = "ALA'A1";
	cout << "\nS1 = " << S1.Value;
	S1.Value = "ALA'A2";
	cout << "\nS1 = " << S1.Value;
	S1.Value = "ALA'A3";
	cout << "\nS1 = " << S1.Value;

	cout << "\n------Undo------\n";
	S1.Undo();
	cout << "\nS1 after undo: "<<S1.Value;
	S1.Undo();
	cout << "\nS1 after undo: " << S1.Value;
	S1.Undo();
	cout << "\nS1 after undo: " << S1.Value;

	cout << "\n------Redo------\n";
	S1.Redo();
	cout << "\nS1 after Redo: " << S1.Value;
	S1.Redo();
	cout << "\nS1 after Redo: " << S1.Value;
	S1.Redo();
	cout << "\nS1 after Redo: " << S1.Value;*/

	/*clsQueueLine PayBillsLine("A0", 10);

	PayBillsLine.IssueTicket();
	PayBillsLine.IssueTicket();
	PayBillsLine.IssueTicket();
	PayBillsLine.IssueTicket();
	PayBillsLine.IssueTicket();

	PayBillsLine.PrintInfo();
	PayBillsLine.PrintTicketsLineLTR();

	PayBillsLine.PrintTicketsLineRTL();
	PayBillsLine.PrintAllTickets();

	PayBillsLine.ServeNextClient();
	PayBillsLine.PrintInfo();

	PayBillsLine.ServeNextClient();
	PayBillsLine.ServeNextClient();
	PayBillsLine.PrintInfo();*/
	
stack<int>MyStack;

MyStack.push(10);
cout << MyStack.top();
	system("pause>0");

	return 0;

}
