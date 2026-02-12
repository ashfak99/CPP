#include<bits/stdc++.h>
#include<BuildBTArray>
#include<BuildBTLinkedList>
using namespace std;

void ArrayRepresentation()
{
    BinaryTreeArray arrayTree;

    cout<<"\n\tEnter in Array Representation Tree\n";

    bool flag=true;
    while(flag)
    {
        int choice;
        cout<<"\n1.Build Binary Tree\n2.Pre-Order Traverse\n3.In-Order Traverse\n4.Post-Order Traverse\n5.Insert Node\n6.Delete Node\n7.Pre-Order Iterative Traverse\n8.Exit Array Tree\nPlease Choose anyone option : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            arrayTree.StartBuilding();
            cout<<"\nTree Created Successfully\n";
            break;
    
        case 2:
            arrayTree.preOrder();
            break;

        case 3:
            arrayTree.inOrder();
            break;

        case 4:
            arrayTree.postOrder();
            break;

        case 5:
            arrayTree.InsertElementInBinaryTree();
            break;
    
        case 6:
            arrayTree.DeleteElementInBinaryTree();
            break;

        case 7:
            arrayTree.preOrderIterative();
            break;

        case 8:
            flag=false;
            return;
    
        default:
            cout<<"\n\n\n\t!!!!!Wrong Choice!!!!!\n\n\n";
            break;
        }
    }
}

void LinkedListRepresentation()
{   
    BuildBTLinkedList llTree;

    cout<<"\n\tEnter in Linkedlist Representation Tree\n";

    bool flag=true;
    while(flag)
    {
        int choice;

        cout<<"\n\n1.Build Binary Tree\n2.Pre-Order Traverse\n3.In-Order Traverse\n4.Post-Order Traverse\n5.Insert Node\n6. Delete Node\n7.Exit Linkedlist Tree\nPlease Choose anyone option : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            llTree.buildTree();
            cout<<"\nTree Created Successfully\n";
            break;
    
        case 2:
            llTree.preOrderTraversal();
            break;

     case 3:
            llTree.inOrderTraversal();
            break;

        case 4:
            llTree.postOrderTraversal();
            break;

        case 5:
            llTree.insertBinaryTreeElement();
            break;

        case 6:
            llTree.deleteBinaryTreeElement();
            break;
        
        case 7:
            flag=false;
            break;
        default:
            cout<<"\n\n\n\t!!!!!WRONG CHOICE!!!!!\n\n\n";
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    while (true)
    {
        int choice;
        cout<<"\n\n1.Array Representation\n2.LinkedList Representation\n3.Exit\nChoose which one method use to create binary tree : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            ArrayRepresentation();
            break;
        
        case 2:
            LinkedListRepresentation();
            break;

        case 3:
            exit(0);
            break;

        default:
            cout<<"\n\n\n\t!!!!!WRONG CHOICE!!!!!\n\n\n";
            break;
        }

    }
    return 0;
}
