
#ifndef THORIUM_TRACEPOINT_H
#define THORIUM_TRACEPOINT_H

/*
 * Here, the tracepoints are similar to those in
 * lttng. The difference is that in Thorium, tracepoint data
 * can be for instance embedded
 * into messages.
 *
 * \see http://lttng.org/man/3/lttng-ust/
 *
 * __VA_ARGS__ is defined in C 1999
 *
 * \see http://en.wikipedia.org/wiki/Variadic_macro
 *
 * \see https://www.kernel.org/doc/Documentation/trace/tracepoint-analysis.txt
 * \see https://www.kernel.org/doc/Documentation/trace/tracepoints.txt
 */

#define THORIUM_ENABLE_TRACEPOINTS

#define THORIUM_TRACEPOINT_NAME(provider_name, event_name) \
        thorium_tracepoint_##provider_name##_##event_name

#ifdef THORIUM_ENABLE_TRACEPOINTS

/*
 * TODO: add a flag to activate these a run time.
 */
#define thorium_tracepoint(provider_name, event_name, ...) \
        THORIUM_TRACEPOINT_NAME(provider_name, event_name)(__VA_ARGS__)

#else

/*
 * Do nothing.
 */
#define thorium_tracepoint(provider_name, event_name, ...) \

#endif

/*
#define THORIUM_DEFINE_TRACEPOINT(provider_name, event_name, hook) \
        #ifdef THORIUM_TRACEPOINT_ENABLE##provider_name##event_name## \
        #define THORIUM_TRACEPOINT_NAME(provider_name, event_name) \
            hoo
            */
#endif
