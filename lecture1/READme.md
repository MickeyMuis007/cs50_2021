# Course notes

## Abstraction
- It's a funtion prototype, defined before function that use the function
    - The implemetation of that function can happen after the function that use it.

        ```
        void say_hello(void);
        int main(void)
        {
            say_hello();
        }
        void say_hello(void)
        {
            print("Hello, world");
        }
        ```

## Computer limitations
- You can't solve any problem if you only have a finite amount of memory.
- For interest sake:
    - Years back humans decided to store years with 2 bits (00-99), due to this it caused computers(that used 2 digits) dates to break the year 2000, due to not having enough bits to represent it.
        - This cause many computers hardware and softwares to be updated
    - The same issue about to happen again on 19 January 2038.
        - Some computers will run out of bits via which to keep track of time.
        - Due to years back, people decided to use 32 bits to represent time. 
        - Starting from the 1st January 1970
        - With 32 bits you can only count up to 4 billion.
        - On 19 January 2038, we are going to reach the 4 billionth second.
        - Therefore unless we all fail to update our computers by then, we will run into this problem again.

