

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length,width,height;
};

typedef struct box box;

int get_volume(box b) 
{
    int v;
    int length,width,height;
    v=(length*width)*height;
    return v;
	/**
	* Return the volume of the box
	*/
}

int is_lower_than_max_height(box b) 
{
    int p=0,Max=41;
    int length,width,height;
    if(height<41)
    {
       p=1;
    }
    return p;
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}

