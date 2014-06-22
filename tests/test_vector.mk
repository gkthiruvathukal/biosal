TEST_VECTOR_NAME=vector
TEST_VECTOR_EXECUTABLE=tests/test_$(TEST_VECTOR_NAME)
TEST_VECTOR_OBJECTS=tests/test.o tests/test_$(TEST_VECTOR_NAME).o
TEST_EXECUTABLES+=$(TEST_VECTOR_EXECUTABLE)
TEST_OBJECTS+=$(TEST_VECTOR_OBJECTS)
$(TEST_VECTOR_EXECUTABLE): $(LIBRARY_OBJECTS) $(TEST_VECTOR_OBJECTS)
	$(Q)$(ECHO) "  LD $@"
	$(Q)$(CC) $(CFLAGS) $^ -o $@
TEST_VECTOR_RUN=test_run_$(TEST_VECTOR_NAME)
$(TEST_VECTOR_RUN): $(TEST_VECTOR_EXECUTABLE)
	./$^
TEST_RUNS+=$(TEST_VECTOR_RUN)
