#pragma once

#include <cstdint>

/**
 * Plateform independant utils.
 */

namespace logicalaccess
{
	uint32_t htonl(uint32_t in);
	uint16_t htons(uint16_t in);
}