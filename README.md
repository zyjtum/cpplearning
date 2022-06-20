# cpplearning
My cpp learning project

This small project contains four parts:
1. Array and Vector
2. String
3. File

Each part consists of basic knowledge and common function or methods

## Part 1. Array and Vector
1. Create array\
data_type name [length]\
data_type name [] = {elements}

2. Iterate an array:\
for loop\
while loop\
advanced for loop

## Part 3. File
### Read file

use data type : ifstream (include in std::fstream)\
ifstream_obj.open(path_string)\
getline(ifstream_obj, read_string)\
ifstream_obj.get(read_char)\
when file opended, it is stroed in buffer, read from buffer directly:\
ifstream_obj.rdbuf()

getline(ifstream_obj, read_string, delimiters) \
by default the delimiter is '\n'

fstream_obj.ignore(index) goes to the index char and start from there

### Write to file

use data type ostream

ostream_obj.open(path_string, mode_selection)
modes:\
ios::out : default setting, overwrites the file even existed
ios::in  : overwrite char by char from the beinning of the file
ios::app : append to the end of the file

ostream << content_string


### CSV file (Comma Separated Value)

#### read csv
ifstream_obj.open(path);
getline(ifstream_obj, read_string, ',')

#### print csv
to better organize the printed content
sets(width_int)
left /right to set alignment
using vector to store all elements
see csvfile.cpp: print_csv_data



#### More content will be add
