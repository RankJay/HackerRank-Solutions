
    Difference(vector<int> elements) 
    {
        this->elements = elements;
    }

    void computeDifference() 
    {
        int maximum = 0;

        for (int i = 0; i < this->elements.size(); i++) 
        {
            for (int j = 0; j < this->elements.size(); j++) 
            {
                int absolute = abs(elements[i] - elements[j]);
                if (absolute > maximum) maximum = absolute;
            }
        }

        maximumDifference = maximum;
    }
	// Add your code here

