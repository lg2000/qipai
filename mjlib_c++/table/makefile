all: hulib gen_table gen_feng_table test_table

array_table.o: table.h array_table.h array_table.cpp
	g++ -g -c array_table.cpp

binary_array_table.o: table.h binary_array_table.h binary_array_table.cpp
	g++ -g -c binary_array_table.cpp

compress_array_table.o: table.h compress_array_table.h compress_array_table.cpp
	g++ -g -c compress_array_table.cpp

# hash_table.o: table.h hash_table.h hash_table.cpp
# 	g++ -g -c hash_table.cpp

# perfect_hash_table.o: table.h perfect_hash_table.h perfect_hash_table.cpp
# 	g++ -g -c perfect_hash_table.cpp

set_table.o: table.h set_table.h set_table.cpp
	g++ -g -c set_table.cpp

table_mgr.o: table.h table_mgr.h table_mgr.cpp
	g++ -g -c table_mgr.cpp

hulib.o: table_mgr.h hulib.h hulib.cpp
	g++ -g -c hulib.cpp

#hulib
# hulib: array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o
# 	ar -cr hulib.a array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o
hulib: array_table.o table_mgr.o hulib.o
	ar -cr hulib.a array_table.o table_mgr.o hulib.o

#gen_table
gen_table.o: table_mgr.h hulib.h gen_table.cpp
	g++ -g -c gen_table.cpp

gen_table: array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o gen_table.o
	g++ array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o gen_table.o -o gen_table

#gen_feng_table
gen_feng_table.o: table_mgr.h hulib.h gen_feng_table.cpp
	g++ -g -c gen_feng_table.cpp

gen_feng_table: array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o gen_feng_table.o
	g++ array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o gen_feng_table.o -o gen_feng_table

#test_table
test_table.o: table_mgr.h hulib.h test_table.cpp
	g++ -g -c test_table.cpp

test_table: array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o test_table.o
	g++ array_table.o binary_array_table.o compress_array_table.o set_table.o table_mgr.o hulib.o test_table.o -o test_table

clean:
	rm -f *.o
	rm -f hulib.a
	rm -f gen_table
	rm -f gen_feng_table
	rm -f test_table
	rm -f *.exe