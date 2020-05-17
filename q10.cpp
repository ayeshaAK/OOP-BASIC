class Array
{
    int *arr ;
    int len ;

    public:

    Array()
    { 
        arr = new int[0];
        len = 0;
    }
    Array(int size)
    {
	    len = size;
	    arr = new int[len];
    }
    Array(int *arr,int size)
    {
	    len = size;
	    this -> arr = new int[size];
	    for(int i=0;i<size;i++)
	    { 
            this -> arr[i] = arr[i];
        }
    }
    int length()
    { 
        return len;
    }
    int getAt(int i)
    { 
        return arr[i];
    }
    void setAt(int i,int val)
    { 
        arr[i] = val;
    }
    Array subArr(int pos,int siz)
    {
	    Array subA(siz);
	    if ((pos+siz)<=len)
	    {
		    for(int i=0;i<siz;i++)
		    { 
                subA.arr[i] = this->arr[pos+i];
            }
	    }
	return subA;
    }
    Array subArr(int pos)
    {
	    Array subA(len-pos-1);
	    for(int i=0;i<len-pos-1;i++)
	    {
            subA.arr[i] = arr[pos+i];
        }
	    return subA;
    }
    int* subArrPointer(int pos,int siz)
    {
	    Array subA(siz);
	    if((pos+siz)<=len)
	    {
		    for(int i=0;i<siz;i++)
		    { 
                subA.arr[i] = this->arr[pos+i];
            }
	    }
	    return subA.arr;
    }
    int* subArrPointer(int pos)
    {
	    Array subA(len-pos);
	    for(int i=0;i<len-pos;i++)
	    {
            subA.arr[i] = arr[pos+i];
        }
	    return subA.arr;
    }
    void push_back(int a)
    {
	    int *newA = new int[len+1];
	    for(int i=0;i<len;i++)
	    {
            newA[i] = arr[i];
        }
	    newA[len] = a;
	    delete []arr;
	    arr = newA;
	    len += 1;
    }
    int pop_back()
    {
	    int *newA = new int[len];
	    for(int i=0;i<len;i++)
	    {
            newA[i] = arr[i];
        }
	    int temp = arr[len-1];
	    delete []arr;
	    arr = newA;
	    len -= 1;
	    return temp;
    }
    int insert(int idx,int val)
    {
	    if(idx>0 && idx <= len)
	    {
		    int *newA = new int[len+1];
		    for(int i=0;i<len+1;i++)
		    {
			    if(i<idx)
				    {
                        newA[i] = arr[i];
                    }
			    else if(i==idx)
				{
                    newA[i] = val;
                }
			    else
				{
                    newA[i] = arr[i-1];
                }
		    }
		    delete []arr;
		    arr = newA;
		    len += 1;
		    return 1;
	    }
	    else
	    return -1;
    }
    int erase(int idx,int val)
    {
	    if(arr[idx]==val)
	    {
		    if(idx>0 && idx <= len)
		    {
			    int *newA = new int[len-1];
			    for(int i=0;i<len-1;i++)
			    {
				    if(i<idx)
					    {
                            newA[i] = arr[i];
                        }
				    else
					    {
                            newA[i] = arr[i+1];
                        }
			    }
			    arr = newA;
			    len -= 1;
			    return 1;
		    }
	    }
	    else
		return -1;		
    }
    int size()
    {
	    int sum = 0;
	    for(int i=0;i<len;i++)
	    { 
            sum += 4;
        }
	    return sum;
    }
    void clear()
    {
	    len = 0;
	    int n = 0;
	    arr = &n;
    }
    int value(int idx)
    { 
        return arr[idx];
    }
    void assign(int idx,int val)
    {
        arr[idx] = val;
    }
    void display()
    {
	    for(int i=0;i<len;i++)
	    {
            cout<<arr[i];
        }
	    cout<<endl;
    }
    void reverse()
    {
	    for(int i=0;i<len/2;i++)
	    {
		    int temp = arr[i];
		    arr[i] = arr[len-i-1];
		    arr[len-i-1] = temp;
	    } 
    }
    int sort()
    {
	    for(int i=0;i<len;i++)
 	    {
 		    for(int j=i;j<len;j++)
 		    {
 			    if(arr[i]>arr[j])
 			    {
				    int temp = arr[i];
				    arr[i] = arr[j];
				    arr[j] = temp;
	 		    }
		    }
	    }
    }
    Array find(int a)
    {
	    int count = 0;
	    for(int i=0;i<len;i++)
	    {
		    if(arr[i]==a)
			{
                count+=1;
            }
	    }
	    cout<<count<<endl;
	    int *found = new int[count];
	    int j=0;
	    for(int i=0;i<len;i++)
	    {
		    if(arr[i]==a)
		    {
			    found[j]=i;
			    j+=1;
		    }
	    }
	    Array foundArr(found,count);
	    {
            return foundArr;
        }
    }
    bool isEmpty()
    {
	    if(len==0)
		{
            return true;
        }
	    return false;
    }
    ~Array()
    {
        //delete []arr;
    }
} ;