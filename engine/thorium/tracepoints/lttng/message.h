
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER thorium_message

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./engine/thorium/tracepoints/lttng/message.h"

#if !defined(ENGINE_THORIUM_TRACEPOINTS_LTTNG_MESSAGE_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define ENGINE_THORIUM_TRACEPOINTS_LTTNG_MESSAGE_H

#include <lttng/tracepoint.h>

#include <engine/thorium/message.h>

/*
#define THORIUM_MESSAGE_TRACEPOINT_EVENT(name) \
TRACEPOINT_EVENT( \
    thorium_message, \
    name, \
    TP_ARGS( \
        struct thorium_message *, message \
    ), \
    TP_FIELDS( \
        ctf_integer(int, message_number, message->number) \
        ctf_integer(int, message_action, message->action) \
        ctf_integer(int, message_count, message->count) \
        ctf_integer(int, message_source_actor, message->source_actor) \
        ctf_integer(int, message_destination_actor, message->destination_actor) \
        ctf_integer(int, message_source_node, message->source_node) \
        ctf_integer(int, message_destination_node, message->destination_node) \
    ) \
)

*/

TRACEPOINT_EVENT(
    thorium_message,
    actor_send,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    node_send,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_send,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_receive,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_send_mailbox,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_send_schedule,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_pool_enqueue,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_pool_dequeue,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_enqueue_message,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    actor_receive,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    worker_dequeue_message,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    node_send_system,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    node_receive,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    node_receive_message,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    node_send_dispatch,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    node_dispatch_message,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    transport_send,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

TRACEPOINT_EVENT(
    thorium_message,
    transport_receive,
    TP_ARGS(
        struct thorium_message *, message
    ),
    TP_FIELDS(
        ctf_integer(int, message_number, message->number)
        ctf_integer(int, message_action, message->action)
        ctf_integer(int, message_count, message->count)
        ctf_integer(int, message_source_actor, message->source_actor)
        ctf_integer(int, message_destination_actor, message->destination_actor)
        ctf_integer(int, message_source_node, message->source_node)
        ctf_integer(int, message_destination_node, message->destination_node)
    )
)

#endif /* ENGINE_THORIUM_TRACEPOINTS_LTTNG_MESSAGE_H */

#include <lttng/tracepoint-event.h>
