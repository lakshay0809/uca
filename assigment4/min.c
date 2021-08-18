/* 
 * MinStack LeetCode Problem
 * @lakshay khanna (1910991116)
 * assignment:stack and queues
 */
#define SIZE 30000

typedef struct {
	int top;
	int arr[SIZE];
	int min;

} MinStack;



MinStack* minStackCreate() {
	MinStack* stack=(MinStack *)malloc(sizeof(MinStack));

	stack->top=-1;

	stack->min=INT_MAX;
	return stack;
}

void minStackPush(MinStack* obj, int val) {
	obj->arr[++obj->top]=val;
	if(obj->min>val)
	{
		obj->min=val;
	}

}

void minStackPop(MinStack* obj) {

	int e=obj->arr[obj->top--];
	if(e==obj->min)
	{
		obj->min=INT_MAX;
		for(int i=0;i<=obj->top;i++)
		{
			if(obj->arr[i]<obj->min)
			{
				obj->min=obj->arr[i];
			}
		}
	}

}

int minStackTop(MinStack* obj) {
	return obj->arr[obj->top];

}

int minStackGetMin(MinStack* obj) {
	return obj->min;
}

void minStackFree(MinStack* obj) {
	free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);

 * minStackPop(obj);

 * int param_3 = minStackTop(obj);

 * int param_4 = minStackGetMin(obj);

 * minStackFree(obj);
 */