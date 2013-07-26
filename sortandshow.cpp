void sortandshow(mylist general_list)
{
  int i = 0;
	listnode *maxptr;  
	int k = 5; 
	string max_string;
	int max_count;  

	if(general_list.length() < 5)
	{
		k = general_list.length(); 
	}

	while(i < k)
	{
		maxptr = general_list.findmaxcount();
		max_string = maxptr->s;
		max_count = maxptr->count; 
		cout << i + 1 << ". " << max_string << " appears " << max_count << " times." << endl; 
		general_list.removemaxcount();
		i++; 
	} 
}

/**************************************************************************************/
sortandshow(charlist); 
sortandshow(idlist); 
sortandshow(numlist); 
/**************************************************************************************/
