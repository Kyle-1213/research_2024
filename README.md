Install Intel Pin by:

  Visiting https://www.intel.com/content/www/us/en/developer/articles/tool/pin-a-binary-instrumentation-tool-downloads.html
  
  Click the number under "Kit" on the latest version of Pin
  
  Extract .tar file using "tar -xcf pin-3.*"
  
In Pin directory, go to /source/tools


Clone github repository git clone https://github.com/Kyle-1213/research_2024.git 

The pinatrace tool is a modified version of the tool stored in the ManualExamples directory. This tool prints all read/write system calls.

To use the tool, run:

  make
  
  ../../../pin -t obj-intel64/pinatrace.so -- ./strings
  
The output of the tool is stored in pinatrace.out

To find strings, I run the command "cat pinatrace.out |grep \ 32" because I know strings are often called in 32 bit read/writes.
