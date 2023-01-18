#ifndef GUARD_CONSTANTS_MAPS_H
#define GUARD_CONSTANTS_MAPS_H

#include "map_groups.h"

#define MAP_NONE (0x7F | (0x7F << 8))
#define MAP_UNDEFINED (0xFF | (0xFF << 8))

#define MAP_GROUP(map) (MAP_##map >> 8)
#define MAP_NUM(map) (MAP_##map & 0xFF)

#define MAP(map) MAP_GROUP(map), MAP_NUM(map)

// These groups are used by pokedex_area_screen.c to find wild
// pokemon locations.
#define MAP_GROUP_OVERWORLD_MONS MAP_GROUP(PETALBURG_CITY)
#define MAP_GROUP_SPECIAL_MONS_1 MAP_GROUP(METEOR_FALLS_1F_1R)
#define MAP_GROUP_SPECIAL_MONS_2 MAP_GROUP(SAFARI_ZONE_NORTHWEST)

// IDs for dynamic warps. Both are used in the dest_warp_id field for warp events, but they
// are never read in practice. A dest_map of MAP_NONE is used to indicate that a
// dynamic warp should be used, at which point the warp id is ignored. It can be passed to
// SetDynamicWarp/SetDynamicWarpWithCoords as the first argument, but this argument is unused.
// As only one dynamic warp is saved at a time there's no need to distinguish between them.
#define WARP_ID_SECRET_BASE 0x7E
#define WARP_ID_DYNAMIC     0x7F

// Used to indicate an invalid warp id, for dummy warps or when a warp should
// use the given coordinates rather than the coordinates of a target warp.
#define WARP_ID_NONE (-1)

#endif  // GUARD_CONSTANTS_MAPS_H
