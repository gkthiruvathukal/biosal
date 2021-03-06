
#ifndef BIOSAL_ASSEMBLY_GRAPH_STORE_H
#define BIOSAL_ASSEMBLY_GRAPH_STORE_H

#include "assembly_graph_summary.h"

#include <engine/thorium/actor.h>

#include <genomics/data/dna_codec.h>

#include <genomics/data/coverage_distribution.h>

#include <core/structures/map_iterator.h>
#include <core/structures/map.h>

#include <core/system/memory_pool.h>

struct biosal_assembly_vertex;
struct biosal_assembly_arc;
struct biosal_dna_kmer;

#define SCRIPT_ASSEMBLY_GRAPH_STORE 0xc81a1596

#define ACTION_GET_RECEIVED_ARC_COUNT 0x00004f17
#define ACTION_GET_RECEIVED_ARC_COUNT_REPLY 0x00001cd9

#define ACTION_ASSEMBLY_GET_SUMMARY 0x00000f4c
#define ACTION_ASSEMBLY_GET_SUMMARY_REPLY 0x00003991

#define ACTION_ASSEMBLY_GET_KMER_LENGTH 0x00005d66
#define ACTION_ASSEMBLY_GET_KMER_LENGTH_REPLY 0x00000d22

/*
 * Enable arc registration with arc actors
 */
#define BIOSAL_ASSEMBLY_ADD_ARCS

#define ACTION_ASSEMBLY_GET_STARTING_KMER 0x000019bb
#define ACTION_ASSEMBLY_GET_STARTING_KMER_REPLY 0x00006957

#define ACTION_ASSEMBLY_GET_VERTEX 0x0000491e
#define ACTION_ASSEMBLY_GET_VERTEX_REPLY 0x00007724

#define ACTION_MARK_VERTEX_AS_VISITED 0x002e0b8a
#define ACTION_MARK_VERTEX_AS_VISITED_REPLY 0x002b4b17

#define ACTION_SET_VERTEX_FLAG 0x00286fd6
#define ACTION_SET_VERTEX_FLAG_REPLY 0x003e175f

/*
 * This is a graph store
 * for assembling sequences.
 *
 * For ephemeral storage, see
 * http://docs.openstack.org/openstack-ops/content/storage_decision.html
 */
struct biosal_assembly_graph_store {
    struct core_map table;
    struct biosal_dna_codec transport_codec;
    struct biosal_dna_codec storage_codec;
    int kmer_length;
    int key_length_in_bytes;
    int unitig_vertex_count;

    int customer;

    uint64_t received;
    uint64_t last_received;

    struct core_memory_pool persistent_memory;

    struct core_map coverage_distribution;
    struct core_map_iterator iterator;
    int source;

    uint64_t received_arc_count;

    int received_arc_block_count;

    /*
     * Summary stuff.
     */

    int source_for_summary;
    int summary_in_progress;

    struct biosal_assembly_graph_summary graph_summary;

    int printed_vertex_size;
    int printed_arc_size;
    int codec_are_different;

    uint64_t consumed_canonical_vertex_count;
    uint64_t last_progress;
};

extern struct thorium_script biosal_assembly_graph_store_script;

int biosal_assembly_graph_store_get_store_count_per_node(struct thorium_actor *self);


#endif
