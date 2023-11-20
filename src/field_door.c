#include "global.h"
#include "event_data.h"
#include "field_door.h"
#include "field_camera.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "task.h"
#include "constants/songs.h"
#include "constants/metatile_labels.h"

#define DOOR_SOUND_NORMAL  0
#define DOOR_SOUND_SLIDING 1
#define DOOR_SOUND_ARENA   2
#define DOOR_TILE_START (NUM_TILES_TOTAL - 8)

struct DoorGraphics
{
    u16 metatileNum;
    u8 sound;
    u8 size;
    const void *tiles;
    const void *palette;
};

struct DoorAnimFrame
{
    u8 time;
    u16 offset;
};

static bool8 ShouldUseMultiCorridorDoor(void);
static void BuildDoorTiles(u16 *tiles, u16 tileNum, const u8 *paletteNums);

static const u8 sDoorAnimTiles_Littleroot[] = INCBIN_U8("graphics/door_anims/littleroot.4bpp");
static const u16 sDoorNullPalette1[16] = {};
static const u8 sDoorAnimTiles_BirchsLab[] = INCBIN_U8("graphics/door_anims/birchs_lab.4bpp");
static const u16 sDoorNullPalette2[16] = {};
static const u8 sDoorAnimTiles_FallarborLightRoof[] = INCBIN_U8("graphics/door_anims/fallarbor_light_roof.4bpp");
static const u16 sDoorNullPalette3[16] = {};
static const u8 sDoorAnimTiles_Lilycove[] = INCBIN_U8("graphics/door_anims/lilycove.4bpp");
static const u16 sDoorNullPalette4[16] = {};
static const u8 sDoorAnimTiles_LilycoveWooden[] = INCBIN_U8("graphics/door_anims/lilycove_wooden.4bpp");
static const u16 sDoorNullPalette5[16] = {};
static const u8 sDoorAnimTiles_General[] = INCBIN_U8("graphics/door_anims/general.4bpp");
static const u16 sDoorNullPalette6[16] = {};
static const u8 sDoorAnimTiles_PokeCenter[] = INCBIN_U8("graphics/door_anims/poke_center.4bpp");
static const u8 sDoorAnimTiles_Gym[] = INCBIN_U8("graphics/door_anims/gym.4bpp");
static const u8 sDoorAnimTiles_PokeMart[] = INCBIN_U8("graphics/door_anims/poke_mart.4bpp");
static const u8 sDoorAnimTiles_RustboroTan[] = INCBIN_U8("graphics/door_anims/rustboro_tan.4bpp");
static const u16 sDoorNullPalette7[16] = {};
static const u8 sDoorAnimTiles_RustboroGray[] = INCBIN_U8("graphics/door_anims/rustboro_gray.4bpp");
static const u16 sDoorNullPalette8[16] = {};
static const u8 sDoorAnimTiles_Oldale[] = INCBIN_U8("graphics/door_anims/oldale.4bpp");
static const u8 sFiller1[0x5900] = {};
static const u8 sDoorAnimTiles_UnusedTops[] = INCBIN_U8("graphics/door_anims/unused_top.4bpp");
static const u8 sFiller2[0x140] = {};
static const u8 sDoorAnimTiles_UnusedBottoms[] = INCBIN_U8("graphics/door_anims/unused_bottom.4bpp");
static const u16 sDoorNullPalette11[16] = {};
static const u8 sDoorAnimTiles_Mauville[] = INCBIN_U8("graphics/door_anims/mauville.4bpp");
static const u16 sDoorNullPalette12[16] = {};
static const u8 sDoorAnimTiles_Verdanturf[] = INCBIN_U8("graphics/door_anims/verdanturf.4bpp");
static const u16 sDoorNullPalette13[16] = {};
static const u8 sDoorAnimTiles_Slateport[] = INCBIN_U8("graphics/door_anims/slateport.4bpp");
static const u16 sDoorNullPalette14[16] = {};
static const u8 sDoorAnimTiles_Dewford[] = INCBIN_U8("graphics/door_anims/dewford.4bpp");
static const u16 sDoorNullPalette15[16] = {};
static const u8 sDoorAnimTiles_Contest[] = INCBIN_U8("graphics/door_anims/contest.4bpp");
static const u16 sDoorNullPalette16[16] = {};
static const u8 sDoorAnimTiles_Mossdeep[] = INCBIN_U8("graphics/door_anims/mossdeep.4bpp");
static const u16 sDoorNullPalette17[16] = {};
static const u8 sDoorAnimTiles_SootopolisPeakedRoof[] = INCBIN_U8("graphics/door_anims/sootopolis_peaked_roof.4bpp");
static const u16 sDoorNullPalette18[16] = {};
static const u8 sDoorAnimTiles_Sootopolis[] = INCBIN_U8("graphics/door_anims/sootopolis.4bpp");
static const u16 sDoorNullPalette19[16] = {};
static const u8 sDoorAnimTiles_PokemonLeague[] = INCBIN_U8("graphics/door_anims/pokemon_league.4bpp");
static const u16 sDoorNullPalette20[16] = {};
static const u8 sDoorAnimTiles_Pacifidlog[] = INCBIN_U8("graphics/door_anims/pacifidlog.4bpp");
static const u16 sDoorNullPalette21[16] = {};
static const u8 sDoorAnimTiles_BattleTowerCorridor[] = INCBIN_U8("graphics/door_anims/battle_tower_corridor.4bpp");
static const u16 sDoorNullPalette22[16] = {};
static const u8 sDoorAnimTiles_CyclingRoad[] = INCBIN_U8("graphics/door_anims/cycling_road.4bpp");
static const u16 sDoorNullPalette23[16] = {};
static const u8 sDoorAnimTiles_LilycoveDeptStore[] = INCBIN_U8("graphics/door_anims/lilycove_dept_store.4bpp");
static const u16 sDoorNullPalette24[16] = {};
static const u8 sDoorAnimTiles_SafariZone[] = INCBIN_U8("graphics/door_anims/safari_zone.4bpp");
static const u16 sDoorNullPalette25[16] = {};
static const u8 sDoorAnimTiles_MossdeepSpaceCenter[] = INCBIN_U8("graphics/door_anims/mossdeep_space_center.4bpp");
static const u16 sDoorNullPalette26[16] = {};
static const u8 sDoorAnimTiles_CableClub[] = INCBIN_U8("graphics/door_anims/cable_club.4bpp");
static const u16 sDoorNullPalette27[16] = {};
static const u8 sDoorAnimTiles_AbandonedShip[] = INCBIN_U8("graphics/door_anims/abandoned_ship.4bpp");
static const u16 sDoorNullPalette28[16] = {};
static const u8 sDoorAnimTiles_FallarborDarkRoof[] = INCBIN_U8("graphics/door_anims/fallarbor_dark_roof.4bpp");
static const u16 sDoorNullPalette29[16] = {};
static const u8 sDoorAnimTiles_AbandonedShipRoom[] = INCBIN_U8("graphics/door_anims/abandoned_ship_room.4bpp");
static const u16 sDoorNullPalette30[16] = {};
static const u8 sDoorAnimTiles_LilycoveDeptStoreElevator[] = INCBIN_U8("graphics/door_anims/lilycove_dept_store_elevator.4bpp");
static const u16 sDoorNullPalette31[16] = {};
static const u8 sDoorAnimTiles_BattleTowerOld[] = INCBIN_U8("graphics/door_anims/battle_tower_old.4bpp");
static const u16 sDoorNullPalette32[16] = {};
static const u8 sDoorAnimTiles_BattleTowerElevator[] = INCBIN_U8("graphics/door_anims/battle_tower_elevator.4bpp");
static const u16 sDoorNullPalette33[16] = {};
static const u8 sDoorAnimTiles_34[] = INCBIN_U8("graphics/door_anims/unknown.4bpp");
static const u16 sDoorNullPalette34[16] = {};
static const u8 sDoorAnimTiles_BattleDome[] = INCBIN_U8("graphics/door_anims/battle_dome.4bpp");
static const u16 sDoorNullPalette35[16] = {};
static const u8 sDoorAnimTiles_BattleFactory[] = INCBIN_U8("graphics/door_anims/battle_factory.4bpp");
static const u16 sDoorNullPalette36[16] = {};
static const u8 sDoorAnimTiles_BattleTower[] = INCBIN_U8("graphics/door_anims/battle_tower.4bpp");
static const u16 sDoorNullPalette37[16] = {};
static const u8 sDoorAnimTiles_BattleArena[] = INCBIN_U8("graphics/door_anims/battle_arena.4bpp");
static const u16 sDoorNullPalette38[16] = {};
static const u8 sDoorAnimTiles_BattleArenaLobby[] = INCBIN_U8("graphics/door_anims/battle_arena_lobby.4bpp");
static const u16 sDoorNullPalette39[16] = {};
static const u8 sDoorAnimTiles_BattleDomeLobby[] = INCBIN_U8("graphics/door_anims/battle_dome_lobby.4bpp");
static const u16 sDoorNullPalette40[16] = {};
static const u8 sDoorAnimTiles_BattlePalaceLobby[] = INCBIN_U8("graphics/door_anims/battle_palace_lobby.4bpp");
static const u8 sDoorAnimTiles_BattleTent[] = INCBIN_U8("graphics/door_anims/battle_tent.4bpp");
static const u16 sDoorNullPalette41[16] = {};
static const u8 sDoorAnimTiles_BattleDomeCorridor[] = INCBIN_U8("graphics/door_anims/battle_dome_corridor.4bpp");
static const u16 sDoorNullPalette42[16] = {};
static const u8 sDoorAnimTiles_BattleTowerMultiCorridor[] = INCBIN_U8("graphics/door_anims/battle_tower_multi_corridor.4bpp");
static const u16 sDoorNullPalette43[16] = {};
static const u8 sDoorAnimTiles_BattleFrontier[] = INCBIN_U8("graphics/door_anims/battle_frontier.4bpp");
static const u16 sDoorNullPalette44[16] = {};
static const u8 sDoorAnimTiles_BattleFrontierSliding[] = INCBIN_U8("graphics/door_anims/battle_frontier_sliding.4bpp");
static const u16 sDoorNullPalette45[16] = {};
static const u8 sDoorAnimTiles_BattleDomePreBattleRoom[] = INCBIN_U8("graphics/door_anims/battle_dome_pre_battle_room.4bpp");
static const u16 sDoorNullPalette46[16] = {};
static const u8 sDoorAnimTiles_BattleTentInterior[] = INCBIN_U8("graphics/door_anims/battle_tent_interior.4bpp");
static const u16 sDoorNullPalette47[16] = {};
static const u8 sDoorAnimTiles_TrainerHillLobbyElevator[] = INCBIN_U8("graphics/door_anims/trainer_hill_lobby_elevator.4bpp");
static const u16 sDoorNullPalette48[16] = {};
static const u8 sDoorAnimTiles_TrainerHillRoofElevator[] = INCBIN_U8("graphics/door_anims/trainer_hill_roof_elevator.4bpp");
static const u16 sDoorNullPalette49[16] = {};

//insertadas
static const u8 sDoorAnimTiles_General2[] = INCBIN_U8("graphics/door_anims2/general.4bpp");
static const u16 sDoorNullPalette1b[16] = {};
static const u8 sDoorAnimTiles_SlidingSingle[] = INCBIN_U8("graphics/door_anims2/sliding_single.4bpp");
static const u16 sDoorNullPalette2b[16] = {};
static const u8 sDoorAnimTiles_SlidingDouble[] = INCBIN_U8("graphics/door_anims2/sliding_double.4bpp");
static const u16 sDoorNullPalette3b[16] = {};
static const u8 sDoorAnimTiles_Pallet[] = INCBIN_U8("graphics/door_anims2/pallet.4bpp");
static const u16 sDoorNullPalette4b[16] = {};
static const u8 sDoorAnimTiles_OaksLab[] = INCBIN_U8("graphics/door_anims2/oaks_lab.4bpp");
static const u16 sDoorNullPalette5b[16] = {};
static const u8 sDoorAnimTiles_Viridian[] = INCBIN_U8("graphics/door_anims2/viridian.4bpp");
static const u16 sDoorNullPalette6b[16] = {};
static const u8 sDoorAnimTiles_Pewter[] = INCBIN_U8("graphics/door_anims2/pewter.4bpp");
static const u16 sDoorNullPalette7b[16] = {};
static const u8 sDoorAnimTiles_Saffron[] = INCBIN_U8("graphics/door_anims2/saffron.4bpp");
static const u16 sDoorNullPalette8b[16] = {};
static const u8 sDoorAnimTiles_SilphCo[] = INCBIN_U8("graphics/door_anims2/silph_co.4bpp");
static const u16 sDoorNullPalette9b[16] = {};
static const u8 sDoorAnimTiles_Cerulean[] = INCBIN_U8("graphics/door_anims2/cerulean.4bpp");
static const u16 sDoorNullPalette10b[16] = {};
static const u8 sDoorAnimTiles_Lavender[] = INCBIN_U8("graphics/door_anims2/lavender.4bpp");
static const u16 sDoorNullPalette11b[16] = {};
static const u8 sDoorAnimTiles_Vermilion[] = INCBIN_U8("graphics/door_anims2/vermilion.4bpp");
static const u16 sDoorNullPalette12b[16] = {};
static const u8 sDoorAnimTiles_PokemonFanClub[] = INCBIN_U8("graphics/door_anims2/pokemon_fan_club.4bpp");
static const u16 sDoorNullPalette13b[16] = {};
static const u8 sDoorAnimTiles_DeptStore[] = INCBIN_U8("graphics/door_anims2/dept_store.4bpp");
static const u16 sDoorNullPalette14b[16] = {};
static const u8 sDoorAnimTiles_Fuchsia[] = INCBIN_U8("graphics/door_anims2/fuchsia.4bpp");
static const u16 sDoorNullPalette15b[16] = {};
static const u8 sDoorAnimTiles_SafariZone2[] = INCBIN_U8("graphics/door_anims2/safari_zone.4bpp");
static const u16 sDoorNullPalette16b[16] = {};
static const u8 sDoorAnimTiles_CinnabarLab[] = INCBIN_U8("graphics/door_anims2/cinnabar_lab.4bpp");
static const u16 sDoorNullPalette17b[16] = {};
static const u8 sDoorAnimTiles_DeptStoreElevator[] = INCBIN_U8("graphics/door_anims2/dept_store_elevator.4bpp");
static const u16 sDoorNullPalette18b[16] = {};
static const u8 sDoorAnimTiles_CableClub2[] = INCBIN_U8("graphics/door_anims2/cable_club.4bpp");
static const u16 sDoorNullPalette19b[16] = {};
static const u8 sDoorAnimTiles_HideoutElevator[] = INCBIN_U8("graphics/door_anims2/hideout_elevator.4bpp");
static const u16 sDoorNullPalette20b[16] = {};
static const u8 sDoorAnimTiles_SSAnne[] = INCBIN_U8("graphics/door_anims2/ss_anne.4bpp");
static const u16 sDoorNullPalette21b[16] = {};
//firered
static const u8 sDoorAnimTiles_SilphCoElevator[] = INCBIN_U8("graphics/door_anims2/silph_co_elevator.4bpp");
static const u8 sDoorAnimTiles_SilphCoElevator2[] = INCBIN_U8("graphics/door_anims2/silph_co_elevator2.4bpp");
static const u16 sDoorNullPalette54[16] = {};
static const u8 sDoorAnimTiles_Sevii123[] = INCBIN_U8("graphics/door_anims2/sevii_123.4bpp");
static const u16 sDoorNullPalette55[16] = {};
static const u8 sDoorAnimTiles_JoyfulGameCorner[] = INCBIN_U8("graphics/door_anims2/joyful_game_corner.4bpp");
static const u16 sDoorNullPalette56[16] = {};
static const u8 sDoorAnimTiles_OneIslandPokeCenter[] = INCBIN_U8("graphics/door_anims2/one_island_poke_center.4bpp");
static const u16 sDoorNullPalette57[16] = {};
static const u8 sDoorAnimTiles_Sevii45[] = INCBIN_U8("graphics/door_anims2/sevii_45.4bpp");
static const u16 sDoorNullPalette58[16] = {};
static const u8 sDoorAnimTiles_FourIslandDayCare[] = INCBIN_U8("graphics/door_anims2/four_island_day_care.4bpp");
static const u16 sDoorNullPalette59[16] = {};
static const u8 sDoorAnimTiles_RocketWarehouse[] = INCBIN_U8("graphics/door_anims2/rocket_warehouse.4bpp");
static const u16 sDoorNullPalette60[16] = {};
static const u8 sDoorAnimTiles_Sevii67[] = INCBIN_U8("graphics/door_anims2/sevii_67.4bpp");
static const u16 sDoorNullPalette61[16] = {};
static const u8 sDoorAnimTiles_Teleporter[] = INCBIN_U8("graphics/door_anims2/teleporter.4bpp");
static const u16 sDoorNullPalette62[16] = {};
static const u8 sDoorAnimTiles_TrainerTowerLobbyElevator[] = INCBIN_U8("graphics/door_anims2/trainer_tower_lobby_elevator.4bpp");
static const u16 sDoorNullPalette63[16] = {};
static const u8 sDoorAnimTiles_TrainerTowerRoofElevator[] = INCBIN_U8("graphics/door_anims2/trainer_tower_roof_elevator.4bpp");
static const u16 sDoorNullPalette64[16] = {};

static const struct DoorAnimFrame sDoorOpenAnimFrames[] =
{
    {4, -1},
    {4, 0},
    {4, 0x80},
    {4, 0x100},
    {0, 0},
};

static const struct DoorAnimFrame sDoorCloseAnimFrames[] =
{
    {4, 0x100},
    {4, 0x80},
    {4, 0},
    {4, -1},
    {0, 0},
};

static const struct DoorAnimFrame sBigDoorOpenAnimFrames[] =
{
    {4, -1},
    {4, 0},
    {4, 0x100},
    {4, 0x200},
    {0, 0},
};

static const struct DoorAnimFrame sBigDoorCloseAnimFrames[] =
{
    {4, 0x200},
    {4, 0x100},
    {4, 0},
    {4, -1},
    {0, 0},
};

static const u8 sDoorAnimPalettes_General[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_PokeCenter[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_Gym[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_PokeMart[] = {0, 0, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_Littleroot[] = {10, 10, 6, 6, 6, 6, 6, 6};
static const u8 sDoorAnimPalettes_BirchsLab[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_RustboroTan[] = {11, 11, 11, 11, 11, 11, 11, 11};
static const u8 sDoorAnimPalettes_RustboroGray[] = {10, 10, 10, 10, 10, 10, 10, 10};
static const u8 sDoorAnimPalettes_FallarborLightRoof[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_Lilycove[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_Oldale[] = {10, 10, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_Mossdeep[] = {9, 9, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_PokemonLeague[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_Pacifidlog[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_SootopolisPeakedRoof[] = {6, 6, 6, 6, 6, 6, 6, 6};
static const u8 sDoorAnimPalettes_Sootopolis[] = {6, 6, 6, 6, 6, 6, 6, 6};
static const u8 sDoorAnimPalettes_Dewford[] = {0, 0, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_Slateport[] = {6, 6, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_Mauville[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_Verdanturf[] = {6, 6, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_LilycoveWooden[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_Contest[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_BattleTowerCorridor[] = {6, 6, 6, 6, 6, 6, 6, 6};
static const u8 sDoorAnimPalettes_CyclingRoad[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_LilycoveDeptStore[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_SafariZone[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_MossdeepSpaceCenter[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_CableClub[] = {6, 6, 6, 6, 6, 6, 6, 6};
static const u8 sDoorAnimPalettes_AbandonedShip[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_FallarborDarkRoof[] = {11, 11, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_AbandonedShipRoom[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_LilycoveDeptStoreElevator[] = {6, 6, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_BattleTowerOld[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_BattleTowerElevator[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_34[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_BattleDome[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_BattleFactory[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_BattleTower[] = {0, 0, 0, 0, 0, 0, 0, 0};
static const u8 sDoorAnimPalettes_BattleArena[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_BattleArenaLobby[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_BattleDomeLobby[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_BattlePalaceLobby[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_BattleTent[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_BattleDomeCorridor[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_BattleTowerMultiCorridor[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_Unused[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_BattleFrontier[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_BattleDomePreBattleRoom[] = {9, 9, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_BattleTentInterior[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_TrainerHillLobbyElevator[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_TrainerHillRoofElevator[] = {9, 9, 7, 7, 7, 7, 7, 7};

//fire red

static const u8 sDoorAnimPalettes_General2[] = {2, 2, 2, 2, 2, 2, 2, 2};
static const u8 sDoorAnimPalettes_SlidingSingle2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_SlidingDouble2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_Pallet2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_OaksLab2[] = {1, 1, 1, 1, 1, 1, 1, 1};
static const u8 sDoorAnimPalettes_Viridian2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_Pewter2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_Saffron2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_SilphCo2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_Cerulean2[] = {12, 12, 12, 12, 12, 12, 12, 12};
static const u8 sDoorAnimPalettes_Lavender2[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_Vermilion2[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_PokemonFanClub2[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_DeptStore2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_Fuchsia2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_SafariZone2[] = {9, 9, 9, 9, 9, 9, 9, 9};
static const u8 sDoorAnimPalettes_CinnabarLab2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_DeptStoreElevator2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_CableClub2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_HideoutElevator2[] = {12, 12, 2, 2, 2, 2, 2, 2};
static const u8 sDoorAnimPalettes_SSAnne2[] = {7, 7, 7, 7, 7, 7, 7, 7};
static const u8 sDoorAnimPalettes_SilphCoElevator2[] = {2, 2, 2, 2, 2, 2, 2, 2};
static const u8 sDoorAnimPalettes_SilphCoElevator3[] = {8, 8, 8, 8, 2, 2, 2, 2};
static const u8 sDoorAnimPalettes_Sevii123[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_JoyfulGameCorner2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_OneIslandPokeCenter2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_Sevii452[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_FourIslandDayCare2[] = {3, 3, 3, 3, 3, 3, 3, 3};
static const u8 sDoorAnimPalettes_RocketWarehouse2[] = {10, 10, 10, 10, 10, 10, 10, 10};
static const u8 sDoorAnimPalettes_Sevii67[] = {5, 5, 5, 5, 5, 5, 5, 5};
static const u8 sDoorAnimPalettes_Teleporter2[] = {8, 8, 8, 8, 8, 8, 8, 8};
static const u8 sDoorAnimPalettes_TrainerTowerLobbyElevator2[] = {8, 8, 2, 2, 2, 2, 2, 2};
static const u8 sDoorAnimPalettes_TrainerTowerRoofElevator2[] = {11, 11, 2, 2, 2, 2, 2, 2};

static const struct DoorGraphics sDoorAnimGraphicsTable[] =
{
    {METATILE_General_Door,                                 DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_General, sDoorAnimPalettes_General},
	{METATILE_General_Door2,                                DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_General2, sDoorAnimPalettes_General2},
    {METATILE_General_Door_PokeCenter,                      DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_PokeCenter, sDoorAnimPalettes_PokeCenter},
    {METATILE_General_Door_Gym,                             DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_Gym, sDoorAnimPalettes_Gym},
    {METATILE_General_Door_PokeMart,                        DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_PokeMart, sDoorAnimPalettes_PokeMart},
    {METATILE_Petalburg_Door_Littleroot,                    DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Littleroot, sDoorAnimPalettes_Littleroot},
    {METATILE_Petalburg_Door_BirchsLab,                     DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_BirchsLab, sDoorAnimPalettes_BirchsLab},
    {METATILE_Rustboro_Door_Tan,                            DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_RustboroTan, sDoorAnimPalettes_RustboroTan},
    {METATILE_Rustboro_Door_Gray,                           DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_RustboroGray, sDoorAnimPalettes_RustboroGray},
    {METATILE_Fallarbor_Door_LightRoof,                     DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_FallarborLightRoof, sDoorAnimPalettes_FallarborLightRoof},
    {METATILE_Petalburg_Door_Oldale,                        DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Oldale, sDoorAnimPalettes_Oldale},
    {METATILE_Mauville_Door,                                DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Mauville, sDoorAnimPalettes_Mauville},
    {METATILE_Mauville_Door_Verdanturf,                     DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Verdanturf, sDoorAnimPalettes_Verdanturf},
    {METATILE_Slateport_Door,                               DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Slateport, sDoorAnimPalettes_Slateport},
    {METATILE_Dewford_Door,                                 DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Dewford, sDoorAnimPalettes_Dewford},
    {METATILE_General_Door_Contest,                         DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_Contest, sDoorAnimPalettes_Contest},
    {METATILE_Lilycove_Door,                                DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Lilycove, sDoorAnimPalettes_Lilycove},
    {METATILE_Lilycove_Door_Wooden,                         DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_LilycoveWooden, sDoorAnimPalettes_LilycoveWooden},
    {METATILE_Mossdeep_Door,                                DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Mossdeep, sDoorAnimPalettes_Mossdeep},
    {METATILE_Sootopolis_Door_PeakedRoof,                   DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_SootopolisPeakedRoof, sDoorAnimPalettes_SootopolisPeakedRoof},
    {METATILE_Sootopolis_Door,                              DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Sootopolis, sDoorAnimPalettes_Sootopolis},
    {METATILE_EverGrande_Door_PokemonLeague,                DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_PokemonLeague, sDoorAnimPalettes_PokemonLeague},
    {METATILE_Pacifidlog_Door,                              DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Pacifidlog, sDoorAnimPalettes_Pacifidlog},
    {METATILE_BattleFrontier_Door_Corridor,                 DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_BattleTowerCorridor, sDoorAnimPalettes_BattleTowerCorridor},
    {METATILE_Mauville_Door_CyclingRoad,                    DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_CyclingRoad, sDoorAnimPalettes_CyclingRoad},
    {METATILE_Lilycove_Door_DeptStore,                      DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_LilycoveDeptStore, sDoorAnimPalettes_LilycoveDeptStore},
    {METATILE_Lilycove_Door_SafariZone,                     DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SafariZone, sDoorAnimPalettes_SafariZone},
    {METATILE_Mossdeep_Door_SpaceCenter,                    DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_MossdeepSpaceCenter, sDoorAnimPalettes_MossdeepSpaceCenter},
    {METATILE_PokemonCenter_CableClubDoor,                  DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_CableClub, sDoorAnimPalettes_CableClub},
    {METATILE_InsideShip_IntactDoor_Bottom_Unlocked,        DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_AbandonedShip, sDoorAnimPalettes_AbandonedShip},
    {METATILE_Fallarbor_Door_DarkRoof,                      DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_FallarborDarkRoof, sDoorAnimPalettes_FallarborDarkRoof},
    {METATILE_InsideShip_IntactDoor_Bottom_Interior,        DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_AbandonedShipRoom, sDoorAnimPalettes_AbandonedShipRoom},
    {METATILE_Shop_Door_Elevator,                           DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_LilycoveDeptStoreElevator, sDoorAnimPalettes_LilycoveDeptStoreElevator},
    {METATILE_Dewford_Door_BattleTower,                     DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTowerOld, sDoorAnimPalettes_BattleTowerOld},
    {METATILE_BattleFrontier_Door_Elevator,                 DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTowerElevator, sDoorAnimPalettes_BattleTowerElevator},
    {0x3B0, /* TODO: Missing metatile ID */                 DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_34, sDoorAnimPalettes_34},
    {METATILE_BattleFrontierOutsideWest_Door_BattleDome,    DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleDome, sDoorAnimPalettes_BattleDome},
    {METATILE_BattleFrontierOutsideWest_Door_BattleFactory, DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleFactory, sDoorAnimPalettes_BattleFactory},
    {METATILE_BattleFrontierOutsideEast_Door_BattleTower,   DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTower, sDoorAnimPalettes_BattleTower},
    {METATILE_BattleFrontierOutsideEast_Door_BattleArena,   DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_BattleArena, sDoorAnimPalettes_BattleArena},
    {METATILE_BattleArena_Door,                             DOOR_SOUND_ARENA,   1, sDoorAnimTiles_BattleArenaLobby, sDoorAnimPalettes_BattleArenaLobby},
    {METATILE_BattleDome_Door_Lobby,                        DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleDomeLobby, sDoorAnimPalettes_BattleDomeLobby},
    {METATILE_BattlePalace_Door,                            DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_BattlePalaceLobby, sDoorAnimPalettes_BattlePalaceLobby},
    {METATILE_Slateport_Door_BattleTent,                    DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTent, sDoorAnimPalettes_BattleTent},
    {METATILE_Mauville_Door_BattleTent,                     DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTent, sDoorAnimPalettes_BattleTent},
    {METATILE_Fallarbor_Door_BattleTent,                    DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTent, sDoorAnimPalettes_BattleTent},
    {METATILE_BattleDome_Door_Corridor,                     DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleDomeCorridor, sDoorAnimPalettes_BattleDomeCorridor},
    {METATILE_BattleFrontier_Door_MultiCorridor,            DOOR_SOUND_SLIDING, 2, sDoorAnimTiles_BattleTowerMultiCorridor, sDoorAnimPalettes_BattleTowerMultiCorridor},
    {METATILE_BattleFrontierOutsideWest_Door,               DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_BattleFrontier, sDoorAnimPalettes_BattleFrontier},
    {METATILE_BattleFrontierOutsideWest_Door_Sliding,       DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleFrontierSliding, sDoorAnimPalettes_BattleFrontier},
    {METATILE_BattleDome_Door_PreBattleRoom,                DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleDomePreBattleRoom, sDoorAnimPalettes_BattleDomePreBattleRoom},
    {METATILE_BattleTent_Door,                              DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_BattleTentInterior, sDoorAnimPalettes_BattleTentInterior},
    {METATILE_TrainerHill_Door_Elevator_Lobby,              DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_TrainerHillLobbyElevator, sDoorAnimPalettes_TrainerHillLobbyElevator},
    {METATILE_TrainerHill_Door_Elevator_Roof,               DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_TrainerHillRoofElevator, sDoorAnimPalettes_TrainerHillRoofElevator},
	{METATILE_CeruleanCity_Door,            			    DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Cerulean, sDoorAnimPalettes_Cerulean2},
	{METATILE_General_SlidingSingleDoor,            		DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SlidingSingle, sDoorAnimPalettes_SlidingSingle2},
	{METATILE_General_SlidingDoubleDoor,					DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SlidingDouble, sDoorAnimPalettes_SlidingDouble2},
	{METATILE_PalletTown_Door,            	     		    DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Pallet, sDoorAnimPalettes_Pallet2},
	{METATILE_CeladonCity_DeptStoreDoor,					DOOR_SOUND_SLIDING, 2, sDoorAnimTiles_DeptStore, sDoorAnimPalettes_DeptStore2},
	{METATILE_CinnabarIsland_LabDoor,						DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_CinnabarLab, sDoorAnimPalettes_CinnabarLab2},
	{METATILE_DepartmentStore_ElevatorDoor,					DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SilphCoElevator, sDoorAnimPalettes_DeptStoreElevator2},
	{METATILE_FuchsiaCity_Door,								DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Fuchsia, sDoorAnimPalettes_Fuchsia2},
	{METATILE_FuchsiaCity_SafariZoneDoor,					DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SafariZone2, sDoorAnimPalettes_SafariZone2},
	{METATILE_LavenderTown_Door,							DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Lavender, sDoorAnimPalettes_Lavender2},
	{METATILE_PalletTown_OaksLabDoor,						DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_OaksLab, sDoorAnimPalettes_OaksLab2},
	{METATILE_PewterCity_Door,								DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Pewter, sDoorAnimPalettes_Pewter2},
	{METATILE_SSAnne_Door,									DOOR_SOUND_NORMAL, 2, sDoorAnimTiles_SSAnne, sDoorAnimPalettes_SSAnne2},
	{METATILE_SaffronCity_Door,								DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Saffron, sDoorAnimPalettes_Saffron2},
	{METATILE_SaffronCity_SilphCoDoor,						DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SilphCo, sDoorAnimPalettes_SilphCo2},
	{METATILE_SeviiIslands123_GameCornerDoor,              DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_JoyfulGameCorner, sDoorAnimPalettes_JoyfulGameCorner2},
    {METATILE_SeviiIslands123_PokeCenterDoor,              DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_OneIslandPokeCenter, sDoorAnimPalettes_OneIslandPokeCenter2},
	{METATILE_SeviiIslands45_Door,                         DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_Sevii45, sDoorAnimPalettes_Sevii452},
    {METATILE_SeviiIslands45_DayCareDoor,                  DOOR_SOUND_NORMAL,  1, sDoorAnimTiles_FourIslandDayCare, sDoorAnimPalettes_FourIslandDayCare2},
	{METATILE_SeviiIslands123_Door,							DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Sevii123, sDoorAnimPalettes_Sevii123},
	{METATILE_SeviiIslands67_Door,							DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Sevii67, sDoorAnimPalettes_Sevii67},
	{METATILE_SilphCo_ElevatorDoor,							DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SilphCoElevator, sDoorAnimPalettes_SilphCoElevator2},
	{METATILE_SilphCo_ElevatorDoor2,							DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_SilphCoElevator2, sDoorAnimPalettes_SilphCoElevator3},
	{METATILE_VermilionCity_Door,							DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Vermilion, sDoorAnimPalettes_Vermilion2},
	{METATILE_ViridianCity_Door,							DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_Viridian, sDoorAnimPalettes_Viridian2},
	{METATILE_SaffronCity_SilphCoDoor,                      DOOR_SOUND_NORMAL, 1, sDoorAnimTiles_SilphCo, sDoorAnimPalettes_SilphCo2},
	{METATILE_SeaCottage_Teleporter_Door,                  DOOR_SOUND_SLIDING, 2, sDoorAnimTiles_Teleporter, sDoorAnimPalettes_Teleporter2},
	{METATILE_VermilionCity_SSAnneWarp,                    DOOR_SOUND_NORMAL,  2, sDoorAnimTiles_PokemonFanClub, sDoorAnimPalettes_PokemonFanClub2},
	{METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, DOOR_SOUND_SLIDING, 1, sDoorAnimTiles_RocketWarehouse, sDoorAnimPalettes_RocketWarehouse2},
    {},
};


static void CopyDoorTilesToVram(const struct DoorGraphics *gfx, const struct DoorAnimFrame *frame)
{
    if (gfx->size == 2)
       CpuFastSet(gfx->tiles + frame->offset, (void *)(VRAM + 0x7E00), 0x80);
    else
        CpuFastSet(gfx->tiles + frame->offset, (void *)(VRAM + 0x7F00), 0x40);
}

static void door_build_blockdef(u16 *a, u16 b, const u8 *c)
{
    int i;
    u16 unk;

    for (i = 0; i < 4; i++)
    {
        unk = *(c++) << 12;
        a[i] = unk | (b + i);
    }
    for (; i < 8; i++)
    {
        unk = *(c++) << 12;
        a[i] = unk;
    }
}

static void DrawCurrentDoorAnimFrame(const struct DoorGraphics *gfx, u32 x, u32 y, const u8 *pal)
{
    u16 arr[24];
	u16 tiles[8];

    if (gfx->size == 2)
    {
        // door_build_blockdef(&arr[8], 0x3F0, pal);
        // DrawDoorMetatileAt(x, y - 1, &arr[8]);
        // door_build_blockdef(&arr[8], 0x3F4, pal + 4);
        // DrawDoorMetatileAt(x, y, &arr[8]);
        // door_build_blockdef(&arr[8], 0x3F8, pal);
        // DrawDoorMetatileAt(x + 1, y - 1, &arr[8]);
        // door_build_blockdef(&arr[8], 0x3FC, pal + 4);
        // DrawDoorMetatileAt(x + 1, y, &arr[8]);
		 BuildDoorTiles(tiles, DOOR_TILE_START, pal);
		DrawDoorMetatileAt(x, y - 1, tiles);
		 BuildDoorTiles(tiles, DOOR_TILE_START + 4, &pal[4]);
    }
    else
    {
        // door_build_blockdef(&arr[0], 0x3F8, pal);
        // DrawDoorMetatileAt(x, y - 1, &arr[0]);
        // door_build_blockdef(&arr[0], 0x3FC, pal + 4);
        // DrawDoorMetatileAt(x, y, &arr[0]);
		 BuildDoorTiles(tiles, DOOR_TILE_START, pal);
		
    }
	 DrawDoorMetatileAt(x, y, tiles);
}

static void BuildDoorTiles(u16 *tiles, u16 tileNum, const u8 *paletteNums)
{
    int i;
    u16 tile;

    // Only the first 4 tiles of each metatile (bottom layer) actually use the door tiles
    for (i = 0; i < 4; i++)
    {
        tile = *(paletteNums++) << 12;
        tiles[i] = tile | (tileNum + i);
    }

    // The remaining tiles (top layer) always use tile 0 (with the same palette)
    for (; i < 8; i++)
    {
        tile = *(paletteNums++) << 12;
        tiles[i] = tile;
    }
}

static void DrawClosedDoorTiles(const struct DoorGraphics *gfx, u32 x, u32 y)
{
    // CurrentMapDrawMetatileAt(x, y - 1);
    // CurrentMapDrawMetatileAt(x, y);

    // if (gfx->size == 2)
    // {
        // CurrentMapDrawMetatileAt(x + 1, y - 1);
        // CurrentMapDrawMetatileAt(x + 1, y);
    // }
	
	if (gfx->size == 1 )
	{
		CurrentMapDrawMetatileAt(x, y);
	}else
	{
		CurrentMapDrawMetatileAt(x, y);
        CurrentMapDrawMetatileAt(x, y - 1);
	}
}

static void DrawDoor(const struct DoorGraphics *gfx, const struct DoorAnimFrame *frame, u32 x, u32 y)
{
    if (frame->offset == 0xFFFF)
    {
        DrawClosedDoorTiles(gfx, x, y);
        if (ShouldUseMultiCorridorDoor())
            DrawClosedDoorTiles(gfx, gSpecialVar_0x8004 + MAP_OFFSET, gSpecialVar_0x8005 + MAP_OFFSET);
    }
    else
    {
        CopyDoorTilesToVram(gfx, frame);
        DrawCurrentDoorAnimFrame(gfx, x, y, gfx->palette);
        if (ShouldUseMultiCorridorDoor())
            DrawCurrentDoorAnimFrame(gfx, gSpecialVar_0x8004 + MAP_OFFSET, gSpecialVar_0x8005 + MAP_OFFSET, gfx->palette);
    }
}

#define tFramesHi data[0]
#define tFramesLo data[1]
#define tGfxHi data[2]
#define tGfxLo data[3]
#define tFrameId data[4]
#define tCounter data[5]
#define tX data[6]
#define tY data[7]

// Draws a single frame of the door animation, or skips drawing to wait between frames.
// Returns FALSE when the final frame has been reached
static bool32 AnimateDoorFrame(struct DoorGraphics *gfx, struct DoorAnimFrame *frames, s16 *data)
{
    if (tCounter == 0)
        DrawDoor(gfx, &frames[tFrameId], tX, tY);

    if (tCounter == frames[tFrameId].time)
    {
        tCounter = 0;
        tFrameId++;
        if (frames[tFrameId].time == 0)
            return FALSE;
        else
            return TRUE;
    }
    tCounter++;
    return TRUE;
}

static void Task_AnimateDoor(u8 taskId)
{
    u16 *data = gTasks[taskId].data;
    struct DoorAnimFrame *frames = (struct DoorAnimFrame *)(tFramesHi << 16 | tFramesLo);
    struct DoorGraphics *gfx = (struct DoorGraphics *)(tGfxHi << 16 | tGfxLo);

    if (AnimateDoorFrame(gfx, frames, data) == FALSE)
        DestroyTask(taskId);
}

static const struct DoorAnimFrame *GetLastDoorFrame(const struct DoorAnimFrame *frame, const void *unused)
{
    while (frame->time != 0)
        frame++;
    return frame - 1;
}

static const struct DoorGraphics *GetDoorGraphics(const struct DoorGraphics *gfx, u16 metatileNum)
{
    while (gfx->tiles != NULL)
    {
        if (gfx->metatileNum == metatileNum)
            return gfx;
        gfx++;
    }
    return NULL;
}

static s8 StartDoorAnimationTask(const struct DoorGraphics *gfx, const struct DoorAnimFrame *frames, u32 x, u32 y)
{
    if (FuncIsActiveTask(Task_AnimateDoor) == TRUE)
        return -1;
    else
    {
        u8 taskId = CreateTask(Task_AnimateDoor, 0x50);
        s16 *data = gTasks[taskId].data;

        tX = x;
        tY = y;

        tFramesLo = (u32)frames;
        tFramesHi = (u32)frames >> 16;

        tGfxLo = (u32)gfx;
        tGfxHi = (u32)gfx >> 16;

        return taskId;
    }
}

static void DrawClosedDoor(const struct DoorGraphics *gfx, u32 x, u32 y)
{
    DrawClosedDoorTiles(gfx, x, y);
}

static void DrawOpenedDoor(const struct DoorGraphics *gfx, u32 x, u32 y)
{
	gfx = GetDoorGraphics(gfx, MapGridGetMetatileIdAt(x, y));
    if (gfx != NULL)
        DrawDoor(gfx, GetLastDoorFrame(sDoorOpenAnimFrames, sDoorOpenAnimFrames), x, y);
}

static s8 StartDoorOpenAnimation(const struct DoorGraphics *gfx, u32 x, u32 y)
{
    gfx = GetDoorGraphics(gfx, MapGridGetMetatileIdAt(x, y));
    if (gfx == NULL)
    {
        return -1;
    }
    else
    {
        if (gfx->size == 2)
            return StartDoorAnimationTask(gfx, sBigDoorOpenAnimFrames, x, y);
        else
            return StartDoorAnimationTask(gfx, sDoorOpenAnimFrames, x, y);
    }
}

static s8 StartDoorCloseAnimation(const struct DoorGraphics *gfx, u32 x, u32 y)
{
    gfx = GetDoorGraphics(gfx, MapGridGetMetatileIdAt(x, y));
    if (gfx == NULL)
        return -1;
    else
        return StartDoorAnimationTask(gfx, sDoorCloseAnimFrames, x, y);
}

static s8 GetDoorSoundType(const struct DoorGraphics *gfx, u32 x, u32 y)
{
    gfx = GetDoorGraphics(gfx, MapGridGetMetatileIdAt(x, y));
    if (gfx == NULL)
        return -1;
    else
        return gfx->sound;
}

// Unused. Debug? Same as FieldAnimateDoorOpen but doesnt return or check if metatile is actually a door
static void Debug_FieldAnimateDoorOpen(u32 x, u32 y)
{
    StartDoorOpenAnimation(sDoorAnimGraphicsTable, x, y);
}

void FieldSetDoorOpened(u32 x, u32 y)
{
    if (MetatileBehavior_IsDoor(MapGridGetMetatileBehaviorAt(x, y)))
        DrawOpenedDoor(sDoorAnimGraphicsTable, x, y);
}

void FieldSetDoorClosed(u32 x, u32 y)
{
    if (MetatileBehavior_IsDoor(MapGridGetMetatileBehaviorAt(x, y)))
        DrawClosedDoor(sDoorAnimGraphicsTable, x, y);
}

s8 FieldAnimateDoorClose(u32 x, u32 y)
{
    if (!MetatileBehavior_IsDoor(MapGridGetMetatileBehaviorAt(x, y)))
        return -1;
    else
        return StartDoorCloseAnimation(sDoorAnimGraphicsTable, x, y);
}

s8 FieldAnimateDoorOpen(u32 x, u32 y)
{
    if (!MetatileBehavior_IsDoor(MapGridGetMetatileBehaviorAt(x, y)))
        return -1;
    else
        return StartDoorOpenAnimation(sDoorAnimGraphicsTable, x, y);
}

bool8 FieldIsDoorAnimationRunning(void)
{
    return FuncIsActiveTask(Task_AnimateDoor);
}

u32 GetDoorSoundEffect(u32 x, u32 y)
{
    int sound = GetDoorSoundType(sDoorAnimGraphicsTable, x, y);

    if (sound == DOOR_SOUND_NORMAL)
        return SE_DOOR;
    else if (sound == DOOR_SOUND_SLIDING)
        return SE_SLIDING_DOOR;
    else if (sound == DOOR_SOUND_ARENA)
        return SE_REPEL;
    else
        return SE_DOOR;
}

// Opens the Battle Tower multi partner's door in sync with the player's door
static bool8 ShouldUseMultiCorridorDoor(void)
{
    if (FlagGet(FLAG_ENABLE_MULTI_CORRIDOR_DOOR))
    {
        if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR)
            && gSaveBlock1Ptr->location.mapNum == MAP_NUM(BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR))
        {
            return TRUE;
        }
    }
    return FALSE;
}
