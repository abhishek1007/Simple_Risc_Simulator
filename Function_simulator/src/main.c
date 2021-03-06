/*

The project is developed as part of Computer Architecture class
Project Name: Functional/Pipeline Simulator for simpleRISC Processor

Developer's Name: Shivam Mittal / Abhishek Chowdhry
Developer's Email id: 2015csb1032@iitrpr.ac.in / 2015csb1002@iitrpr.ac.in
Date: 1st October 2016

*/

/* main.cpp
   Purpose of this file: The file handles the input and output, and
   invokes the simulator
*/


#include "mySimpleSim.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  char* prog_mem_file;
  
  // If file name not specified
  if(argc < 2) {
    printf("Incorrect number of arguments. Please invoke the simulator \n\t./mySimpleSim <input mem file> \n");
    exit(1);
  }
  
  // Resetting the processor
  reset_proc();
  // Loading the Program into memory
  load_program_memory(argv[1]);
    
  printf("\n\nPROGRAM RUNNING STARTS\n\n");
  
  // Running the Stimulator
  run_simplesim();
  // making the file data_out.mem
  write_data_memory();
  return 1;
}
