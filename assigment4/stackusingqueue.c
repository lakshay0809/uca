/* 
 * stack using queue
 * @lakshay khanna (1910991116)
 * assignment:stack and queues
 */ 

#define SIZE 10000


typedef struct {
	int arr[SIZE];
	int front,rear;

} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
	MyStack* stack=(MyStack *)malloc(sizeof(MyStack));
	stack->front=-1;
	stack->rear=-1;
	return stack;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
	if(obj->front==-1)
	{
		obj->front++;
	}
	obj->rear++;
	obj->arr[obj->rear]=x;

}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
	if(obj->rear==-1)
	{
		return 0;
	}
	return obj->arr[obj->rear--];

}

/** Get the top element. */
int myStackTop(MyStack* obj) {
	return obj->arr[obj->rear];
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	return obj->rear==-1;

}

void myStackFree(MyStack* obj) {
	free(obj);

}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
 */