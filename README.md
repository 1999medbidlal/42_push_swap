*This project has been created as part of the 42 curriculum by mbidlal*

## Description:

### push_swap:
is is a sorting algorithm project from the 42 curriculum.  
The goal of the project is to sort a stack of integers using a limited set of operations
and the smallest possible number of moves.

The program works with two stacks:
- **stack a**: initially contains all numbers.
- **stack b**: initially empty.
first of all A stack is a linear data structure that follows the LIFO principle (laast in ,first out).
This means that the last element added to the stack is the first one to be removed.

In a classical stack, only two main operations are allowed :

**push**: add an element to the top of the stack.
**pop**: remove the element from the top of the stack.

 **Stack in push_swap Vs Classical Stack**

**Although push_swap uses stacks, they differ from a classical stack in several ways:**

- Classical Stack :
Supports only push and pop operations.
Direct access is allowed only to the top element.
Mainly used for function calls, expression evaluation, and undo mechanisms.
No rotations or swaps are allowed.

- Stack in push_swap:
Implemented using a linked list.
Allows additional constrained operations:
swap (sa, sb, ss)
push (pa, pb)
rotate (ra, rb, rr)
reverse rotate (rra, rrb, rrr)
The stack can be manipulated internally, but only through allowed operations.

## Instructions:

**Compilation:**
To compile the project, run the following command at the root of the repository:

`make`

This command will compile all source files and generate the executable push_swap.

To remove object files:

`make clean`

To remove object files and the executable

`make fclean`

To recompile the project from scratch:

`make re`

**Execution**
Run the program by passing a list of integers as arguments:

`./push_swap 3 5 2 1`

The program will output a sequence of operations that sorts the numbers in ascending order.
If the input is already sorted, the program produces no output.
**Error Handling:**
The program handles the following error cases: 
* Non-numeric arguments:

`./push_swap 4 --5 6`

`./push_swap 7 8 9a`

`./push_swap 1 / 3`

* Duplicate numbers:

`./push_swap 4 5 4`

`./push_swap 2 1 1`

* Integer overflow or underflow:

`./push_swap 4294967296`

`./push_swap -2147483649`

**In case of an error, the program outputs:**

`Error`

and exits.

for every things is good the output:

`$>./push_swap 3 2 1 0`

`rra`

`pb`

`sa`

`rra`

`pa`

## Resources
**References**
42 Subject: push_swap.
for linked list :

https://www.youtube.com/watch?v=R9PTBwOzceo&list=PLBlnK6fEyqRi3-lvwLGzcaquOs5OBTCww

https://www.youtube.com/watch?v=dmb1i4oN5oE&list=PLnccP3XNVxGrks-guEVjE1xj9V9YC5oQ7

Sorting algorithms fundamentals:

https://push-swap42-visualizer.vercel.app/

https://42-cursus.gitbook.io/guide/2-rank-02/push_swap

https://en.wikipedia.org/wiki/Butterfly_diagram

## Use of AI
AI tools were used during this project only to help understand and clarify concepts.

Specifically, AI assisted with:

* Translating new or unclear instructions.
* Explaining meanings and logic of certain parts of the project.
* Providing resources and references related to the topic.
* Discussing algorithms and optimization approaches to improve my understanding.

Important: AI was not used to write or copy code. All code was manually implemented, tested, and fully understood by the author. AI’s role was strictly supportive and educational, helping me make informed decisions while developing the project.