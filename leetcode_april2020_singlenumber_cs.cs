using System;
using System.Collections;
using System.Collections.Generic;

namespace leetcode_singlenumber_cs
{
    class Program
    {

        public static  int SingleNumber(int[] nums)
        {
            int SingleNumber = int.MaxValue;

            Dictionary<int, int> number_numberoccurance = new Dictionary<int, int> { } ;
            // dictionary to store the count the number occurannce.

            // loop through the numns array  to construct  the dictionary. 
            for (int index = 0 ; index < nums.Length; index++)
            {
                    // check if the index element exist in the dictionary. 
                    if (number_numberoccurance.ContainsKey(nums[index]))
                    {
                        number_numberoccurance[nums[index]] = number_numberoccurance[nums[index]] + 1;
                        // increment the current value for the key by 1.
                    }
                    else
                    {
                       number_numberoccurance.Add(nums[index],1);
                        // insert  the <key,value> pair .
                    }
            }

            // iterate through the dictioanry to get the singlr count element.
            foreach (KeyValuePair<int, int> entry in number_numberoccurance)
            {
                // retrieve the dictionary element : entry which has the value = 1.
                if (entry.Value == 1 )
                {
                    SingleNumber = entry.Key; 
                }

            }
            return SingleNumber; 
        }
        static void Main(string[] args)
        {
            List<int> integer_elements = new List<int> { 4, 1, 2, 1, 2 };
            // list of the integer elements containing the numbers . 

            /*
            foreach (int element in integer_elements)
            {
                Console.WriteLine(element + "");
            }
            */

            // transfer the elements from the List to the 
            int[] nums = integer_elements.ToArray();
            // convert the List to nums array 

            /*
            foreach (int element in nums)
            {
                Console.Write(element + "");
            }
            */

            int SingleNumber_occur = SingleNumber(nums);
            // pass the nums array to the function to calculate the single element.

            Console.Write("the number which occurs singly in the given nums array : ");
            Console.Write(SingleNumber_occur);
             
        }
    }
}
