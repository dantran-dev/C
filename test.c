//create new node that hold sale value

void add_sale(char *p, sale s)
{
    //create new node that hold sale value

    char countryName = p;

    //create new node that hold sale value
    collection *sale;

    init_node(&sale, s);

    // loop throught the list of country to find the country name

    for (int i = 0; i < 44; i++)
    {
        // if found the name

        if (strcmp(get_name(craze[i]) == p)
        {
            // add sale to the end of the collection of country

            set_sale(craze[i]) = sale;

        }
        
    }
    

}


void display_sales(char *p)
{
    char country = p;

    for (int i = 0; i < 44; i++)
    {
        // if found the name

        if (strcmp(get_name(craze[i]) == p)
        {
            // print the matching countries

            printf("Country name: %s\n", get_name(craze[i]));
            printf("date %s - sold number %d\n", get_date(craze[i]), get_num_sold(craze[i]));

        }
        
    }
    

}


int count_range(int min, int max)
{
    int a = min;
    int b = max;
    int countryCounter = 0;

    for (int i = 0; i < 44; i++)
    {
        

        if ((get_num_sold(craze[i]) >=min) && (get_num_sold(craze[i]) <=max))
        {
            countryCounter ++;

        }
        
    }

    return countryCounter;

}