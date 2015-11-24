//
// Created by kamlesh on 28/10/15.
//

#ifndef PIGEON_HTTP_FILTER_BASE_H
#define PIGEON_HTTP_FILTER_BASE_H

#include "http_connection.h"
using namespace pigeon::tcp;

namespace pigeon {

    class http_filter_base {

    public:

        virtual ~http_filter_base();

		virtual void init() = 0;

        virtual void execute(http_connection *) = 0;

		virtual void clean() = 0;

    };

}

#endif //PIGEON_HTTP_FILTER_BASE_H
