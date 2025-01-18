set(MY_VAR "hello world\n")
message(${MY_VAR})
set(MY_CACHE_VAR "Persistent Value" CACHE STRING "Description of the variable")
message(${MY_CACHE_VAR})
