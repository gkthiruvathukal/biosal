
#include "message_tracepoints.h"

#include <engine/thorium/message.h>

#include <inttypes.h>
#include <stdint.h>

void thorium_tracepoint_message_actor_send(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_actor_send, time);
}

void thorium_tracepoint_message_worker_send(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_worker_send, time);
}

void thorium_tracepoint_message_node_send(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_node_send, time);
}

void thorium_tracepoint_message_transport_send(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_transport_send, time);
}

void thorium_tracepoint_message_transport_receive(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_transport_receive, time);
}

void thorium_tracepoint_message_node_receive(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_node_receive, time);
}

void thorium_tracepoint_message_worker_receive(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_worker_receive, time);
}

void thorium_tracepoint_message_actor_receive(struct thorium_message *message, uint64_t time)
{
    thorium_message_set_tracepoint_time(message, THORIUM_TRACEPOINT_message_actor_receive, time);
}


