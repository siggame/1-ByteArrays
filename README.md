# 1 - ByteArrays & Pointers


> Any problem in computer science can be solved by another level of indirection.
>
> -- <cite>[David Wheeler][1]</cite>

[1]: http://bwlampson.site/Slides/TuringLecture.htm

Let's be real here. Pointers are hard to grasp. There's a lot of intracacies to
using pointers. The purpose of this module is to help developers acquire confidence
in 'footwork' with pointers in C/C++. This module also assumes that users have a
basic understanding of pointer syntax including pointer declarations, arrays
as pointers, pointer dereferencing, and pointer casting.

## How this repo works

Within the unittest folder, there is a static archive file `libtestdata.a`. It
is a precompiled binary that is linked against the test data executor when the
user invokes `make test`. The Makefile is configured to compile the library from
.testdata.cpp which is gitignored. The rationale is that the implementation of
the unit test would reveal the solution to the concept being tested.

## An Analogy

Suppose you are a photographer in a one dimensional world. You want to take 
pictures of one dimensional nature and share it with others. Your camera has two
settings: the size of the aperture and a color filter. If you 
want to capture a bigger part of your world, you need a bigger aperture. So you 
take the camera to some location. And set the aperture to size 8. You dig around 
and find several filters. You find some filters called ‘double’, ‘long’, 
‘unsigned long’, and a ‘struct Point’. You proceed to take pictures of the same
place with these different filters. Of course the image looks different because 
of the filters. You want to capture a picture of M_PI so you apply the double
filter.

## Problem 1
In findpi.cpp, implement `find_pi` to search for M_PI (included from math.h) in an array of bytes. We're not looking for a string value of pi, but rather M_PI as an array of bytes.

```C
char bytes[32]; // The one dimensional world. Assume it is initialized with M_PI somewhere
double image = *( 
    (double *) bytes // Apply Filter (casting bytes to a double pointer)
); // Capture image by dereference.

double image = *(double *) bytes; // More succinct
```

```
| bytes start here
V
| B00 | B01 | B02 | B03 | B04 | B05 | B06 | B07 | ... |
|<---- (double *) bytes                    ---->|
```




