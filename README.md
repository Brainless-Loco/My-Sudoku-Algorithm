# A Sudoku Pattern Generator Algorithm with Recursion
##### `Language`
- C++
- JavaScript
#### Story behind working on this simple
`Long Story Alert!!!`
>Last year, losing my Android mobile, I was unable to buy a newone for some specific reasons. So I was spent about 1.5 years or 18 months without any Mobile Phone. Recently I got a simple handset of Samsung Dous Series from my mother. I actually had to reconnect my sim to a network for some reason.

>One day, I lost my broadband connection for about 3-4 hours. I got nothing to do withour a net connection. So I was checking my this handset if I find something new as I barely checked the mobile after getting it. I found the one and only game (Like a small child 🙊 ) SUDOKU there. I remember before that moment, it's about 5-7 years I played SUDOKU last time. So I happily dived into it without even thinking that I might get obsessed with it. I also had forgotten all the rules of SUDOKU the then.

>The game had 100 levels exactly with 100 different patterns. While I was in somewhere between 10 to 15 level, a thought knocked me, that it's more easy to check if a input number is valid or invalid for the pattern I was given to solve. But it's more difficult to generate a valid pattern. Then how did they do it! 

> I am a regular competitive programmer. I attend online programming contests at codeforces and other online judges. So I was thinking if I can use my programming knowledge to generate a Sudoku algorithm or not. Yes it's true that by the time I already had known that there are tons of projects on github and other places with their algorithm. But I wanted to generate on my own.

> So, I sat for it. Before the start, I already generated an idea to make the algorithm based on recursion. I will go from cell (1,1) to (9,9) vising each and every cell with 1 to digit 9 with checking if I got the digit in the same row and same column or not. I got my first hassle, when I got the point that I was doing only one way recursion till now, but how would I visit each and every cell of a 2D matrix! Then I made an idea to go through row wise. 
Simply,
- Visit a cell, go through 1 to 9 and if a digit isn't in the same row and same column, fix the digit for the cell and go to next cell.
- If I finish the row, I will go to next row.
- else I will go to next cell of the same row.
- If I reach (9,9) th cell, I will check if it's a valid (by checking each and every 3 x 3 Martices if those has any digit twice or more) or invalid.

>But, this wasn't easy at all. because the complexity was much higher than thought. As I was using a brute force implementation, it almost got so much time consuming that My code was literally running for an hour.
So I had to modify it somehow. Yes I could see any existed projects to modify it easily, but I promised myself to make it on my own. However I came up with the idea of `pass by refference` and it worked so damn good! But here was a problem. I was getting the same pattern again and again. As I was going through 1 to 9 for each cell, it's showing the same pattern each time I run the code. So how can it be improve? Yes, you got it. with random number in each cell. So I used a `SET Data Structure` in C++ for  hashing the digits I used and `rand` function. After using this, I got a random and valid pattern and I was like `Eureka!! Eureka!!?`. I used another Data Strucre named `Vector` in C++ which works like `Linked List` to store an amount of possible pattern. This time I faced another problem. I was getting same pattern each time even after using rand function. Then I finally got to know the solution from stack overflow on usage of `srand()` function. In C++, generated random number differs from machine to machine. But by default it uses a psudorandom algorithm, and that's why I was getting same output each time. `srand(time(0))` prevents it. After all of these done, I finally used to write output in a `.txt` file using `freopen()` function. This time I noticed that my nth solution and first solution was almost same. As I used recursion, It was generating so much possible solutions for some fixed digit. So I modify the function to generate only one pattern at a time, and put that into a while loop to generate multiple number of possible patterns.


> So This was my idea behind this algorithm. You are may be having thoughts that why I got so much excited for this simple task. Because,
- This is the first time I used my Competitive programming on my own idea (you can say a pet project).
- This is the first time, I fully generated a code on my own idea and implemented it without any extra knowledge.
- I used Data Structes, Recursion Knowledge finally somewhere else from Programming Contests. 😅
- I was searching for a scope to use my CPP knowledge to use. And I did it.
- I not only used my CPP knowledge, but also used my JS knowledge to convert the algorithm in another language.
- I actually visualized that if I udnerstand one language good, it takes only instant to understand another new language. (Exactly ehat happens in Software industry)
- I fall in love with SUDOKU so much that I finished all the 100 levels within 2 weeks of that handset.
- I am planning to use this algorithm to make an android/IOS app and play it. It would be just satisfaction if I make my own favorite game app and play it. I already started making React Native app for this. I am just waiting to get my android in hand. I will update this readme.md then.
- I was being bored in Covid Holidays. So I used a good time doing it. Also it didn't take much time from me.
- I did it because I feel happy while doing it.
###### Always welcome to give me feedbacks
### Thank you.
--  Brainless_Loco
