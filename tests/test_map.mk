TEST_MAP_NAME=map
TEST_MAP_EXECUTABLE=tests/test_$(TEST_MAP_NAME)
TEST_MAP_OBJECTS=tests/test_$(TEST_MAP_NAME).o
TEST_EXECUTABLES+=$(TEST_MAP_EXECUTABLE)
TEST_OBJECTS+=$(TEST_MAP_OBJECTS)
$(TEST_MAP_EXECUTABLE): $(LIBRARY_OBJECTS) $(TEST_MAP_OBJECTS)
	$(Q)$(ECHO) "  LD $@"
	$(Q)$(CC) $(CFLAGS) $^ -o $@
TEST_MAP_RUN=test_run_$(TEST_MAP_NAME)
$(TEST_MAP_RUN): $(TEST_MAP_EXECUTABLE)
	./$^
TEST_RUNS+=$(TEST_MAP_RUN)

