
APPLICATION_LATENCY_PROBE_PRODUCT=performance/latency_probe/latency_probe
APPLICATION_LATENCY_PROBE_OBJECTS=performance/latency_probe/main.o performance/latency_probe/process.o

APPLICATION_EXECUTABLES+=$(APPLICATION_LATENCY_PROBE_PRODUCT)
APPLICATION_OBJECTS+=$(APPLICATION_LATENCY_PROBE_OBJECTS)

$(APPLICATION_LATENCY_PROBE_PRODUCT): $(APPLICATION_LATENCY_PROBE_OBJECTS) $(LIBRARY_OBJECTS)
	$(Q)$(ECHO) "  LD $@"
	$(Q)$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

