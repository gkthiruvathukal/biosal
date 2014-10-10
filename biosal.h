
#ifndef BIOSAL_H
#define BIOSAL_H

/*
 * This is the suggested buffer size.
 *
 * This is not a requirement because Thorium supports any
 * buffer size, unlike RayPlatform.
 */
#define BIOSAL_IDEAL_BUFFER_SIZE 4096

/* engine */

#include "engine/thorium/thorium_engine.h"

/* actor patterns */

#include "core/patterns/manager.h"

/* system */

#include <core/system/memory.h>

/* structures */

#include <core/structures/vector.h>
#include <core/structures/vector_iterator.h>
#include <core/structures/map.h>
#include <core/structures/map_iterator.h>
#include <core/structures/set.h>
#include <core/structures/set_iterator.h>

/* input */

#include "genomics/input/input_stream.h"
#include "genomics/input/input_controller.h"

/*
 * Assembly
 */

#include "genomics/assembly/assembly_graph_builder.h"

#include "genomics/kernels/dna_kmer_counter_kernel.h"
#include "genomics/kernels/aggregator.h"
#include "genomics/data/coverage_distribution.h"
#include "genomics/storage/kmer_store.h"

/* storage */

#include "genomics/storage/sequence_store.h"

#endif
