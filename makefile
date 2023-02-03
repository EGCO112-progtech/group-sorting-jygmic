compile: main.c 
	 gcc  main.c -o sort

runSelection: selection
	  ./selection sort

run: sort
	 ./sort


clean: 
	 rm sort
