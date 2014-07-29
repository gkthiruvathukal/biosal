
#include "mpi_active_request.h"

#include <engine/thorium/transport/active_request.h>

#include <stdlib.h>

void bsal_mpi_active_request_init(struct bsal_active_request *active_request)
{
    struct bsal_mpi_active_request *concrete_object;

    concrete_object = bsal_active_request_get_concrete_object(active_request);

    concrete_object->request = MPI_REQUEST_NULL;
}

/* \see http://blogs.cisco.com/performance/mpi_request_free-is-evil/
 * \see http://www.mpich.org/static/docs/v3.1/www3/MPI_Request_free.html
 */
void bsal_mpi_active_request_destroy(struct bsal_active_request *active_request)
{
    struct bsal_mpi_active_request *concrete_object;

    concrete_object = bsal_active_request_get_concrete_object(active_request);

    if (concrete_object->request != MPI_REQUEST_NULL) {
        MPI_Request_free(&concrete_object->request);
        concrete_object->request = MPI_REQUEST_NULL;
    }

}

/* \see http://www.mpich.org/static/docs/v3.1/www3/MPI_Test.html
 */
int bsal_mpi_active_request_test(struct bsal_active_request *active_request)
{
    struct bsal_mpi_active_request *concrete_object;

    concrete_object = bsal_active_request_get_concrete_object(active_request);

    MPI_Status status;
    int flag;
    int error;

    flag = 0;
    error = 0;

    error = MPI_Test(&concrete_object->request, &flag, &status);

    /* TODO do something with this error
     */
    if (error != MPI_SUCCESS) {
        return 0;
    }

    /*
     * The request is ready
     */
    if (flag) {
        concrete_object->request = MPI_REQUEST_NULL;
        return 1;
    }

    return 0;
}

void *bsal_mpi_active_request_request(struct bsal_active_request *active_request)
{
    struct bsal_mpi_active_request *concrete_object;

    concrete_object = bsal_active_request_get_concrete_object(active_request);

    return &concrete_object->request;
}
