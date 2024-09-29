/*
FORM_ITEM_HOLD:
    Form change activates when the item is given to or taken from the selected Pokémon.
    param1 = item to hold

FORM_ITEM_USE:
    Form change activates when the item is used on the selected Pokémon.
    param1 = item to use

FORM_MOVE:
    Form change activates when the Pokémon learns or forgets the move.
    param1 = move to check for
    param2 = WHEN_LEARNED if form change activates when move is forgotten
             WHEN_FORGOTTEN if form change activates when move is learned

FORM_WITHDRAW:
    Form change activates when the Pokémon is withdrawn from the PC or Daycare.
    no parameters

FORM_ITEM_HOLD_ABILITY:
    Form change activates when the item is used on the selected Pokémon that has
    a particular ability.
    param1 = item to use
    param2 = ability to check for

FORM_ITEM_USE_TIME:
    Form change activates when the item is used on the selected Pokémon at the
    appropriate time of day.
    param1 = item to use
    param2 = DAY if form change activates in the daytime
             NIGHT if form change activates at nighttime
*/

// FORM_MOVE param2 Arguments
#define WHEN_LEARNED    0
#define WHEN_FORGOTTEN  1

// FORM_ITEM_USE_TIME param2 Arguments
#define DAY    0
#define NIGHT  1

static const struct FormChange sGiratinaFormChangeTable[] = {
	{FORM_ITEM_HOLD, SPECIES_GIRATINA, ITEM_NONE},
    {FORM_ITEM_HOLD, SPECIES_GIRATINA_ORIGIN, ITEM_GRISEOUS_ORB},
    {FORM_CHANGE_END},
};

static const struct FormChange sShayminFormChangeTable[] = {
    {FORM_ITEM_USE_TIME, SPECIES_SHAYMIN_SKY, ITEM_GRACIDEA, DAY},
    {FORM_CHANGE_END},
};

static const struct FormChange sShayminSkyFormChangeTable[] = {
    {FORM_WITHDRAW, SPECIES_SHAYMIN},
    {FORM_CHANGE_END},
};

static const struct FormChange sArceusFormChangeTable[] = {
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS,          ITEM_NONE,         ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FIGHTING, ITEM_FIST_PLATE,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FIGHTING, ITEM_FIGHTINIUM_Z, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FLYING,   ITEM_SKY_PLATE,    ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FLYING,   ITEM_FLYINIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_POISON,   ITEM_TOXIC_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_POISON,   ITEM_POISONIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_ROCK,     ITEM_STONE_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_ROCK,     ITEM_ROCKIUM_Z,    ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_GROUND,   ITEM_EARTH_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_GROUND,   ITEM_GROUNDIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_BUG,      ITEM_INSECT_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_BUG,      ITEM_BUGINIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_GHOST,    ITEM_SPOOKY_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_GHOST,    ITEM_GHOSTIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_STEEL,    ITEM_IRON_PLATE,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_STEEL,    ITEM_STEELIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FIRE,     ITEM_FLAME_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FIRE,     ITEM_FIRIUM_Z,     ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_WATER,    ITEM_SPLASH_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_WATER,    ITEM_WATERIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_GRASS,    ITEM_MEADOW_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_GRASS,    ITEM_GRASSIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_ELECTRIC, ITEM_ZAP_PLATE,    ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_ELECTRIC, ITEM_ELECTRIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_PSYCHIC,  ITEM_MIND_PLATE,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_PSYCHIC,  ITEM_PSYCHIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_ICE,      ITEM_ICICLE_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_ICE,      ITEM_ICIUM_Z,      ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_DRAGON,   ITEM_DRACO_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_DRAGON,   ITEM_DRAGONIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_DARK,     ITEM_DREAD_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_DARK,     ITEM_DARKINIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FAIRY,    ITEM_PIXIE_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_ARCEUS_FAIRY,    ITEM_FAIRIUM_Z,    ABILITY_MULTITYPE},
    {FORM_CHANGE_END},
};

static const struct FormChange sTornadusFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_TORNADUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sTornadusTherianFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_TORNADUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sThundurusFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_THUNDURUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sThundurusTherianFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_THUNDURUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sLandorusFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_LANDORUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sLandorusTherianFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_LANDORUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sKeldeoFormChangeTable[] = {
    {FORM_MOVE, SPECIES_KELDEO_RESOLUTE, MOVE_SECRET_SWORD, WHEN_LEARNED},
    {FORM_CHANGE_END},
};

static const struct FormChange sKeldeoResoluteFormChangeTable[] = {
    {FORM_MOVE, SPECIES_KELDEO, MOVE_SECRET_SWORD, WHEN_FORGOTTEN},
    {FORM_CHANGE_END},
};

static const struct FormChange sGenesectFormChangeTable[] = {
    {FORM_ITEM_HOLD, SPECIES_GENESECT,             ITEM_NONE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_DOUSE_DRIVE, ITEM_DOUSE_DRIVE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_SHOCK_DRIVE, ITEM_SHOCK_DRIVE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_BURN_DRIVE,  ITEM_BURN_DRIVE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_CHILL_DRIVE, ITEM_CHILL_DRIVE},
    {FORM_CHANGE_END},
};

static const struct FormChange sHoopaFormChangeTable[] = {
    // {FORM_ITEM_USE, SPECIES_HOOPA_UNBOUND, ITEM_PRISON_BOTTLE, SPECIES_HOOPA},
    {FORM_CHANGE_END},
};

static const struct FormChange sHoopaUnboundFormChangeTable[] = {
    {FORM_WITHDRAW, SPECIES_HOOPA},
    {FORM_CHANGE_END},
};

static const struct FormChange sOricorioFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_ORICORIO,         ITEM_RED_NECTAR},
    {FORM_ITEM_USE, SPECIES_ORICORIO_POM_POM, ITEM_YELLOW_NECTAR},
    {FORM_ITEM_USE, SPECIES_ORICORIO_PAU,     ITEM_PINK_NECTAR},
    {FORM_ITEM_USE, SPECIES_ORICORIO_SENSU,   ITEM_PURPLE_NECTAR},
    {FORM_CHANGE_END},
};

static const struct FormChange sSilvallyFormChangeTable[] = {
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY,          ITEM_NONE,            ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_FIGHTING, ITEM_FIGHTING_MEMORY, ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_FLYING,   ITEM_FLYING_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_POISON,   ITEM_POISON_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_GROUND,   ITEM_GROUND_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_ROCK,     ITEM_ROCK_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_BUG,      ITEM_BUG_MEMORY,      ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_GHOST,    ITEM_GHOST_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_STEEL,    ITEM_STEEL_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_FIRE,     ITEM_FIRE_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_WATER,    ITEM_WATER_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_GRASS,    ITEM_GRASS_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_ELECTRIC, ITEM_ELECTRIC_MEMORY, ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_PSYCHIC,  ITEM_PSYCHIC_MEMORY,  ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_ICE,      ITEM_ICE_MEMORY,      ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_DRAGON,   ITEM_DRAGON_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_DARK,     ITEM_DARK_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD_ABILITY, SPECIES_SILVALLY_FAIRY,    ITEM_FAIRY_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_END},
};

#undef WHEN_LEARNED
#undef WHEN_FORGOTTEN
