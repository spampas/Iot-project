#ifndef PROJECT_CONF_H_

#define PROJECT_CONF_H_


// Configuro Trickle /*******************/

#undef RPL_CONF_DIO_REDUNDANCY 
#define RPL_CONF_DIO_REDUNDANCY 2

#undef RPL_CONF_DIO_INTERVAL_MIN 
#define RPL_CONF_DIO_INTERVAL_MIN 8			// I_MIN 256 ms (2^8)

#undef RPL_CONF_DIO_INTERVAL_DOUBLINGS 
#define RPL_CONF_DIO_INTERVAL_DOUBLINGS 2	// I_MAX 1024 ms (2^(8+2))
/***************************************/

#undef UIP_CONF_TCP 
#define UIP_CONF_TCP	0					// Disable TCP

#undef REST_MAX_CHUNK_SIZE 					// Set the max response payload before fragmentation 
#define REST_MAX_CHUNK_SIZE 64

#undef COAP_MAX_OPEN_TRANSACTIONS 			// Set the max number of concurrent transactions 
#define COAP_MAX_OPEN_TRANSACTIONS 4

// Usato per risparmiare memoria

#undef NBR_TABLE_CONF_MAX_NEIGHBORS 		// Set the max number of entries in neighbors table 
#define NBR_TABLE_CONF_MAX_NEIGHBORS 5

#undef UIP_CONF_MAX_ROUTES 					// Set the max number of routes handled by the node 
#define UIP_CONF_MAX_ROUTES 20

#undef UIP_CONF_BUFFER_SIZE 				// Set the amount of memory reserved to the uIP packet buffer 
#define UIP_CONF_BUFFER_SIZE 140

#endif
