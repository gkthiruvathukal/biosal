TEST_DYNAMIC_HASH_TABLE_GROUP_NAME=dynamic_hash_table
TEST_DYNAMIC_HASH_TABLE_GROUP_EXECUTABLE=tests/test_$(TEST_DYNAMIC_HASH_TABLE_GROUP_NAME)
TEST_DYNAMIC_HASH_TABLE_GROUP_OBJECTS=tests/test_$(TEST_DYNAMIC_HASH_TABLE_GROUP_NAME).o
TEST_EXECUTABLES+=$(TEST_DYNAMIC_HASH_TABLE_GROUP_EXECUTABLE)
TEST_OBJECTS+=$(TEST_DYNAMIC_HASH_TABLE_GROUP_OBJECTS)
$(TEST_DYNAMIC_HASH_TABLE_GROUP_EXECUTABLE): $(LIBRARY_OBJECTS) $(TEST_DYNAMIC_HASH_TABLE_GROUP_OBJECTS) $(TEST_LIBRARY_OBJECTS)
	$(Q)$(ECHO) "  LD $@"
	$(Q)$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
TEST_DYNAMIC_HASH_TABLE_GROUP_RUN=test_run_$(TEST_DYNAMIC_HASH_TABLE_GROUP_NAME)
$(TEST_DYNAMIC_HASH_TABLE_GROUP_RUN): $(TEST_DYNAMIC_HASH_TABLE_GROUP_EXECUTABLE)
	./$^
TEST_RUNS+=$(TEST_DYNAMIC_HASH_TABLE_GROUP_RUN)

