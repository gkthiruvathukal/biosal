#!/bin/bash

mpiexec -n 4 applications/spate_metagenome_assembler/spate -k 29 -threads-per-node 8 ~/dropbox/medium.fastq
