#include "logicalaccess/utils.hpp"
#include <boost/asio.hpp>

namespace logicalaccess
{
	uint32_t htonl(uint32_t in)
	{
		return ::htonl(in);
	}

	uint16_t htons(uint16_t in)
	{
		return ::htons(in);
	}
}
