compile:
	gcc case1_poor.c -o case1_poor.out
	gcc case1_fast.c -o case1_fast.out
	gcc case1_poor.c -O -o case1_poor_o.out
	gcc case1_fast.c -O -o case1_fast_o.out
	gcc case1_poor.c -O1 -o case1_poor_o1.out
	gcc case1_fast.c -O1 -o case1_fast_o1.out
	gcc case1_poor.c -O2 -o case1_poor_o2.out
	gcc case1_fast.c -O2 -o case1_fast_o2.out
	gcc case1_poor.c -O3 -o case1_poor_o3.out
	gcc case1_fast.c -O3 -o case1_fast_o3.out
	gcc case1_poor.c -Os -o case1_poor_os.out
	gcc case1_fast.c -Os -o case1_fast_os.out
	gcc case1_poor.c -Og -o case1_poor_og.out
	gcc case1_fast.c -Og -o case1_fast_og.out
	gcc case1_poor.c -Ofast -o case1_poor_ofast.out
	gcc case1_fast.c -Ofast -o case1_fast_ofast.out
	gcc case2_poor.c -lm -o case2_poor.out
	gcc case2_fast.c -o case2_fast.out

run:
	./case1_poor.out
	./case1_fast.out
	./case1_poor_o.out
	./case1_fast_o.out
	./case1_poor_o1.out
	./case1_fast_o1.out
	./case1_poor_o2.out
	./case1_fast_o2.out
	./case1_poor_o3.out
	./case1_fast_o3.out
	./case1_poor_os.out
	./case1_fast_os.out
	./case1_poor_og.out
	./case1_fast_og.out
	./case1_poor_ofast.out
	./case1_fast_ofast.out
	./case2_poor.out
	./case2_fast.out

compile_and_run:
	make compile
	make run