const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
    },

    [TRAINER_SAWYER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_LEADER_GIOVANNI,
        .trainerName = _("AUGUSTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer1),
        .party = {.NoItemDefaultMoves = sParty_Sawyer1},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout1),
        .party = {.NoItemDefaultMoves = sParty_GruntAquaHideout1},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("SELPHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout2),
        .party = {.NoItemCustomMoves = sParty_GruntAquaHideout2},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout3),
        .party = {.ItemCustomMoves = sParty_GruntAquaHideout3},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("BORIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout4),
        .party = {.ItemCustomMoves = sParty_GruntAquaHideout4},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("CHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern1),
        .party = {.ItemCustomMoves = sParty_GruntSeafloorCavern1},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("LEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern2),
        .party = {.ItemCustomMoves = sParty_GruntSeafloorCavern2},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("ROJO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern3),
        .party = {.ItemCustomMoves = sParty_GruntSeafloorCavern3},
    },

    [TRAINER_GABRIELLE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle1),
        .party = {.ItemCustomMoves = sParty_Gabrielle1},
    },

    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("JUANDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntPetalburgWoods),
        .party = {.NoItemCustomMoves = sParty_GruntPetalburgWoods},
    },

    [TRAINER_MARCEL] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("SEBAS"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marcel),
        .party = {.NoItemCustomMoves = sParty_Marcel},
    },

    [TRAINER_ALBERTO] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("CARLOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alberto),
        .party = {.NoItemCustomMoves = sParty_Alberto},
    },

    [TRAINER_ED] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ed),
        .party = {.NoItemCustomMoves = sParty_Ed},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern4),
        .party = {.ItemCustomMoves = sParty_GruntSeafloorCavern4},
    },

    [TRAINER_DECLAN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MACUTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Declan),
        .party = {.ItemCustomMoves = sParty_Declan},
    },

    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GURÚ"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntRusturfTunnel),
        .party = {.ItemCustomMoves = sParty_GruntRusturfTunnel},
    },

    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("VERO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst1),
        .party = {.ItemCustomMoves = sParty_GruntWeatherInst1},
    },

    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst2),
        .party = {.ItemCustomMoves = sParty_GruntWeatherInst2},
    },

    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("FUJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst3),
        .party = {.ItemCustomMoves = sParty_GruntWeatherInst3},
    },

    [TRAINER_GRUNT_MUSEUM_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GHOST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMuseum1),
        .party = {.NoItemDefaultMoves = sParty_GruntMuseum1},
    },

    [TRAINER_GRUNT_MUSEUM_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("ALBERTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMuseum2),
        .party = {.NoItemCustomMoves = sParty_GruntMuseum2},
    },

    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter1),
        .party = {.NoItemCustomMoves = sParty_GruntSpaceCenter1},
    },

    [TRAINER_GRUNT_MT_PYRE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("JASÓN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre1),
        .party = {.NoItemCustomMoves = sParty_GruntMtPyre1},
    },

    [TRAINER_GRUNT_MT_PYRE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre2),
        .party = {.NoItemDefaultMoves = sParty_GruntMtPyre2},
    },

    [TRAINER_GRUNT_MT_PYRE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre3),
        .party = {.NoItemDefaultMoves = sParty_GruntMtPyre3},
    },

    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst4),
        .party = {.NoItemDefaultMoves = sParty_GruntWeatherInst4},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout5),
        .party = {.NoItemDefaultMoves = sParty_GruntAquaHideout5},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout6),
        .party = {.ItemCustomMoves = sParty_GruntAquaHideout6},
    },

    [TRAINER_FREDRICK] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fredrick),
        .party = {.ItemCustomMoves = sParty_Fredrick},
    },

    [TRAINER_MATT] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("VERO&JUAN"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Matt),
        .party = {.ItemCustomMoves = sParty_Matt},
    },

    [TRAINER_ZANDER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("JUAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zander),
        .party = {.NoItemDefaultMoves = sParty_Zander},
    },

    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("DALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_ShellyWeatherInstitute),
        .party = {.ItemCustomMoves = sParty_ShellyWeatherInstitute},
    },

    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("LUGIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_ShellySeafloorCavern),
        .party = {.ItemCustomMoves = sParty_ShellySeafloorCavern},
    },

    [TRAINER_ARCHIE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("LT.SURGE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Archie),
        .party = {.ItemCustomMoves = sParty_Archie},
    },

    [TRAINER_LEAH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("HÉCTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leah),
        .party = {.NoItemDefaultMoves = sParty_Leah},
    },

    [TRAINER_DAISY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Daisy),
        .party = {.NoItemDefaultMoves = sParty_Daisy},
    },

    [TRAINER_ROSE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("JAIME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose1),
        .party = {.NoItemDefaultMoves = sParty_Rose1},
    },

    [TRAINER_FELIX] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("FELIX"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Felix),
        .party = {.NoItemCustomMoves = sParty_Felix},
    },

    [TRAINER_VIOLET] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("DIEGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Violet),
        .party = {.NoItemDefaultMoves = sParty_Violet},
    },

    [TRAINER_ROSE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("FRAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose2),
        .party = {.NoItemDefaultMoves = sParty_Rose2},
    },

    [TRAINER_ROSE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("SEBAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose3),
        .party = {.NoItemDefaultMoves = sParty_Rose3},
    },

    [TRAINER_ROSE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ANDRÉS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose4),
        .party = {.NoItemDefaultMoves = sParty_Rose4},
    },

    [TRAINER_ROSE_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("FABIÁN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose5),
        .party = {.ItemCustomMoves = sParty_Rose5},
    },

    [TRAINER_DUSTY_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("BRUNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dusty1),
        .party = {.ItemCustomMoves = sParty_Dusty1},
    },

    [TRAINER_CHIP] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("LEGENDARIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chip),
        .party = {.ItemCustomMoves = sParty_Chip},
    },

    [TRAINER_FOSTER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ARTICUNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Foster),
        .party = {.ItemCustomMoves = sParty_Foster},
    },

    [TRAINER_DUSTY_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dusty2),
        .party = {.ItemCustomMoves = sParty_Dusty2},
    },

    [TRAINER_DUSTY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dusty3),
        .party = {.ItemCustomMoves = sParty_Dusty3},
    },

    [TRAINER_DUSTY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dusty4),
        .party = {.ItemCustomMoves = sParty_Dusty4},
    },

    [TRAINER_DUSTY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dusty5),
        .party = {.ItemCustomMoves = sParty_Dusty5},
    },

    [TRAINER_GABBY_AND_TY_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("BLAINE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy1),
        .party = {.ItemCustomMoves = sParty_GabbyAndTy1},
    },

    [TRAINER_GABBY_AND_TY_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("MIRTO"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy2),
        .party = {.ItemCustomMoves = sParty_GabbyAndTy2},
    },

    [TRAINER_GABBY_AND_TY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("LESLIE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy3),
        .party = {.ItemCustomMoves = sParty_GabbyAndTy3},
    },

    [TRAINER_GABBY_AND_TY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("DANIEL"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy4),
        .party = {.ItemCustomMoves = sParty_GabbyAndTy4},
    },

    [TRAINER_GABBY_AND_TY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("AMALIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy5),
        .party = {.ItemCustomMoves = sParty_GabbyAndTy5},
    },

    [TRAINER_GABBY_AND_TY_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("ESAU"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy6),
        .party = {.ItemCustomMoves = sParty_GabbyAndTy6},
    },

    [TRAINER_LOLA_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("ABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lola1),
        .party = {.ItemCustomMoves = sParty_Lola1},
    },

    [TRAINER_AUSTINA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Austina),
        .party = {.ItemCustomMoves = sParty_Austina},
    },

    [TRAINER_GWEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gwen),
        .party = {.ItemCustomMoves = sParty_Gwen},
    },

    [TRAINER_LOLA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lola2),
        .party = {.NoItemDefaultMoves = sParty_Lola2},
    },

    [TRAINER_LOLA_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lola3),
        .party = {.NoItemDefaultMoves = sParty_Lola3},
    },

    [TRAINER_LOLA_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lola4),
        .party = {.NoItemDefaultMoves = sParty_Lola4},
    },

    [TRAINER_LOLA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lola5),
        .party = {.NoItemDefaultMoves = sParty_Lola5},
    },

    [TRAINER_RICKY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ricky1),
        .party = {.NoItemDefaultMoves = sParty_Ricky1},
    },

    [TRAINER_SIMON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Simon),
        .party = {.NoItemDefaultMoves = sParty_Simon},
    },

    [TRAINER_CHARLIE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Charlie),
        .party = {.ItemCustomMoves = sParty_Charlie},
    },

    [TRAINER_RICKY_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ricky2),
        .party = {.ItemCustomMoves = sParty_Ricky2},
    },

    [TRAINER_RICKY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("PAULO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ricky3),
        .party = {.ItemDefaultMoves = sParty_Ricky3},
    },

    [TRAINER_RICKY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("LUNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ricky4),
        .party = {.NoItemDefaultMoves = sParty_Ricky4},
    },

    [TRAINER_RICKY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ricky5),
        .party = {.NoItemDefaultMoves = sParty_Ricky5},
    },

    [TRAINER_RANDALL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BRISEIDA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Randall),
        .party = {.ItemCustomMoves = sParty_Randall},
    },

    [TRAINER_PARKER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("AQUILES"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Parker),
        .party = {.ItemCustomMoves = sParty_Parker},
    },

    [TRAINER_GEORGE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MAGNO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_George),
        .party = {.ItemCustomMoves = sParty_George},
    },

    [TRAINER_BERKE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("PEGASO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Berke),
        .party = {.ItemCustomMoves = sParty_Berke},
    },

    [TRAINER_BRAXTON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("CÉSAR"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Braxton),
        .party = {.ItemCustomMoves = sParty_Braxton},
    },

    [TRAINER_VINCENT] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("M.ANCIANO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vincent),
        .party = {.ItemCustomMoves = sParty_Vincent},
    },

    [TRAINER_LEROY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ANÍBAL"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leroy),
        .party = {.ItemCustomMoves = sParty_Leroy},
    },

    [TRAINER_WILTON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("JADEN"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wilton1),
        .party = {.ItemCustomMoves = sParty_Wilton1},
    },

    [TRAINER_EDGAR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("FREDO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edgar),
        .party = {.ItemCustomMoves = sParty_Edgar},
    },

    [TRAINER_ALBERT] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("CROM"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Albert),
        .party = {.ItemCustomMoves = sParty_Albert},
    },

    [TRAINER_SAMUEL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("VALERIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Samuel),
        .party = {.ItemCustomMoves = sParty_Samuel},
    },

    [TRAINER_VITO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ZEUS"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vito),
        .party = {.ItemCustomMoves = sParty_Vito},
    },

    [TRAINER_OWEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ZEUS"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Owen),
        .party = {.ItemCustomMoves = sParty_Owen},
    },

    [TRAINER_WILTON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ZEUS"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wilton2),
        .party = {.ItemCustomMoves = sParty_Wilton2},
    },

    [TRAINER_WILTON_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("TATIANO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wilton3),
        .party = {.ItemCustomMoves = sParty_Wilton3},
    },

    [TRAINER_WILTON_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("TOLO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wilton4),
        .party = {.ItemCustomMoves = sParty_Wilton4},
    },

    [TRAINER_WILTON_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GIOVANNI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wilton5),
        .party = {.ItemCustomMoves = sParty_Wilton5},
    },

    [TRAINER_WARREN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("KARPOV"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Warren),
        .party = {.ItemCustomMoves = sParty_Warren},
    },

    [TRAINER_MARY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("AYUDANT.OAK"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mary),
        .party = {.NoItemDefaultMoves = sParty_Mary},
    },

    [TRAINER_ALEXIA] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BEN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alexia),
        .party = {.NoItemCustomMoves = sParty_Alexia},
    },

    [TRAINER_JODY] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CALVIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jody),
        .party = {.NoItemCustomMoves = sParty_Jody},
    },

    [TRAINER_WENDY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JOSH"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wendy),
        .party = {.NoItemDefaultMoves = sParty_Wendy},
    },

    [TRAINER_KEIRA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("TIMMY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Keira),
        .party = {.NoItemDefaultMoves = sParty_Keira},
    },

    [TRAINER_BROOKE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JOEY"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke1),
        .party = {.NoItemDefaultMoves = sParty_Brooke1},
    },

    [TRAINER_JENNIFER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jennifer),
        .party = {.NoItemDefaultMoves = sParty_Jennifer},
    },

    [TRAINER_HOPE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CHAD"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hope),
        .party = {.NoItemDefaultMoves = sParty_Hope},
    },

    [TRAINER_SHANNON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("TYLER"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shannon),
        .party = {.NoItemDefaultMoves = sParty_Shannon},
    },

    [TRAINER_MICHELLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("EDDIE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Michelle),
        .party = {.NoItemDefaultMoves = sParty_Michelle},
    },

    [TRAINER_CAROLINE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DILLON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Caroline),
        .party = {.NoItemDefaultMoves = sParty_Caroline},
    },

    [TRAINER_JULIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("YASU"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Julie),
        .party = {.NoItemDefaultMoves = sParty_Julie},
    },

    [TRAINER_BROOKE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DAVE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke2),
        .party = {.NoItemDefaultMoves = sParty_Brooke2},
    },

    [TRAINER_BROOKE_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("LUIS"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke3),
        .party = {.ItemCustomMoves = sParty_Brooke3},
    },

    [TRAINER_BROOKE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("RICK"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke4),
        .party = {.NoItemDefaultMoves = sParty_Brooke4},
    },

    [TRAINER_BROOKE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DOUG"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke5),
        .party = {.NoItemDefaultMoves = sParty_Brooke5},
    },

    [TRAINER_PATRICIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("SAMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Patricia),
        .party = {.NoItemDefaultMoves = sParty_Patricia},
    },

    [TRAINER_KINDRA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("COLTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kindra),
        .party = {.NoItemDefaultMoves = sParty_Kindra},
    },

    [TRAINER_TAMMY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("GREG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tammy),
        .party = {.NoItemDefaultMoves = sParty_Tammy},
    },

    [TRAINER_VALERIE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Valerie1),
        .party = {.NoItemDefaultMoves = sParty_Valerie1},
    },

    [TRAINER_TASHA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tasha),
        .party = {.NoItemDefaultMoves = sParty_Tasha},
    },

    [TRAINER_VALERIE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("ROBBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Valerie2),
        .party = {.NoItemDefaultMoves = sParty_Valerie2},
    },

    [TRAINER_VALERIE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("CALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Valerie3),
        .party = {.NoItemDefaultMoves = sParty_Valerie3},
    },

    [TRAINER_VALERIE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KEIGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Valerie4),
        .party = {.NoItemDefaultMoves = sParty_Valerie4},
    },

    [TRAINER_VALERIE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("ELIJAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Valerie5),
        .party = {.NoItemDefaultMoves = sParty_Valerie5},
    },

    [TRAINER_CINDY_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("AYUDANT.OAK"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy1),
        .party = {.ItemDefaultMoves = sParty_Cindy1},
    },

    [TRAINER_DAPHNE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("BRENT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Daphne),
        .party = {.ItemDefaultMoves = sParty_Daphne},
    },

    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("CONNER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter2),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter2},
    },

    [TRAINER_CINDY_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("JANICE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy2),
        .party = {.ItemDefaultMoves = sParty_Cindy2},
    },

    [TRAINER_BRIANNA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("SALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brianna),
        .party = {.ItemDefaultMoves = sParty_Brianna},
    },

    [TRAINER_NAOMI] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("ROBIN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Naomi),
        .party = {.ItemDefaultMoves = sParty_Naomi},
    },

    [TRAINER_CINDY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CRISSY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy3),
        .party = {.ItemDefaultMoves = sParty_Cindy3},
    },

    [TRAINER_CINDY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("MIRIAM"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy4),
        .party = {.ItemDefaultMoves = sParty_Cindy4},
    },

    [TRAINER_CINDY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("IRIS"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy5),
        .party = {.ItemDefaultMoves = sParty_Cindy5},
    },

    [TRAINER_CINDY_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("RELI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy6),
        .party = {.ItemDefaultMoves = sParty_Cindy6},
    },

    [TRAINER_MELISSA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("ALI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Melissa),
        .party = {.NoItemDefaultMoves = sParty_Melissa},
    },

    [TRAINER_SHEILA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("KATSUO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sheila),
        .party = {.NoItemDefaultMoves = sParty_Sheila},
    },

    [TRAINER_SHIRLEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shirley),
        .party = {.NoItemDefaultMoves = sParty_Shirley},
    },

    [TRAINER_JESSICA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("ANN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jessica1),
        .party = {.NoItemDefaultMoves = sParty_Jessica1},
    },

    [TRAINER_CONNIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("DAWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Connie),
        .party = {.NoItemDefaultMoves = sParty_Connie},
    },

    [TRAINER_BRIDGET] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("PAIGE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bridget),
        .party = {.NoItemDefaultMoves = sParty_Bridget},
    },

    [TRAINER_OLIVIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("ANDREA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Olivia),
        .party = {.NoItemDefaultMoves = sParty_Olivia},
    },

    [TRAINER_TIFFANY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("MEGAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tiffany),
        .party = {.NoItemDefaultMoves = sParty_Tiffany},
    },

    [TRAINER_JESSICA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JULIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jessica2),
        .party = {.NoItemDefaultMoves = sParty_Jessica2},
    },

    [TRAINER_JESSICA_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("KAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jessica3),
        .party = {.NoItemDefaultMoves = sParty_Jessica3},
    },

    [TRAINER_JESSICA_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("LISA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jessica4),
        .party = {.NoItemDefaultMoves = sParty_Jessica4},
    },

    [TRAINER_JESSICA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("EDMOND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jessica5),
        .party = {.NoItemDefaultMoves = sParty_Jessica5},
    },

    [TRAINER_WINSTON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("TREVOR"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston1),
        .party = {.ItemDefaultMoves = sParty_Winston1},
    },

    [TRAINER_MOLLIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("LEONARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mollie),
        .party = {.NoItemDefaultMoves = sParty_Mollie},
    },

    [TRAINER_GARRET] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DUNCAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Garret),
        .party = {.ItemDefaultMoves = sParty_Garret},
    },

    [TRAINER_WINSTON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("HUEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston2),
        .party = {.ItemDefaultMoves = sParty_Winston2},
    },

    [TRAINER_WINSTON_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DYLAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston3),
        .party = {.ItemDefaultMoves = sParty_Winston3},
    },

    [TRAINER_WINSTON_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("PHILLIP"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston4),
        .party = {.ItemDefaultMoves = sParty_Winston4},
    },

    [TRAINER_WINSTON_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DWAYNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston5),
        .party = {.ItemDefaultMoves = sParty_Winston5},
    },

    [TRAINER_STEVE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("LIAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Steve1),
        .party = {.NoItemCustomMoves = sParty_Steve1},
    },

    [TRAINER_THALIA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SHANE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia1),
        .party = {.NoItemDefaultMoves = sParty_Thalia1},
    },

    [TRAINER_MARK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mark),
        .party = {.NoItemDefaultMoves = sParty_Mark},
    },

    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtChimney1),
        .party = {.NoItemDefaultMoves = sParty_GruntMtChimney1},
    },

    [TRAINER_STEVE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("JEFF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Steve2),
        .party = {.NoItemDefaultMoves = sParty_Steve2},
    },

    [TRAINER_STEVE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("UJIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Steve3),
        .party = {.NoItemDefaultMoves = sParty_Steve3},
    },

    [TRAINER_STEVE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("CHRIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Steve4),
        .party = {.NoItemDefaultMoves = sParty_Steve4},
    },

    [TRAINER_STEVE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("DREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Steve5),
        .party = {.NoItemDefaultMoves = sParty_Steve5},
    },

    [TRAINER_LUIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Luis),
        .party = {.NoItemDefaultMoves = sParty_Luis},
    },

    [TRAINER_DOMINIK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("NANCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dominik),
        .party = {.NoItemDefaultMoves = sParty_Dominik},
    },

    [TRAINER_DOUGLAS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ISABELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Douglas),
        .party = {.NoItemDefaultMoves = sParty_Douglas},
    },

    [TRAINER_DARRIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("KELSEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Darrin),
        .party = {.NoItemDefaultMoves = sParty_Darrin},
    },

    [TRAINER_TONY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ALICIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tony1),
        .party = {.NoItemDefaultMoves = sParty_Tony1},
    },

    [TRAINER_JEROME] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CAITLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jerome),
        .party = {.NoItemDefaultMoves = sParty_Jerome},
    },

    [TRAINER_MATTHEW] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HEIDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Matthew),
        .party = {.NoItemDefaultMoves = sParty_Matthew},
    },

    [TRAINER_DAVID] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CAROL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_David),
        .party = {.NoItemDefaultMoves = sParty_David},
    },

    [TRAINER_SPENCER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SOFIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Spencer),
        .party = {.NoItemDefaultMoves = sParty_Spencer},
    },

    [TRAINER_ROLAND] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MARTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roland),
        .party = {.NoItemDefaultMoves = sParty_Roland},
    },

    [TRAINER_NOLEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nolen),
        .party = {.NoItemDefaultMoves = sParty_Nolen},
    },

    [TRAINER_STAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("NAOKO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Stan),
        .party = {.NoItemDefaultMoves = sParty_Stan},
    },

    [TRAINER_BARRY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Barry),
        .party = {.NoItemDefaultMoves = sParty_Barry},
    },

    [TRAINER_DEAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HERMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dean),
        .party = {.NoItemDefaultMoves = sParty_Dean},
    },

    [TRAINER_RODNEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("COOPER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rodney),
        .party = {.NoItemDefaultMoves = sParty_Rodney},
    },

    [TRAINER_RICHARD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Richard),
        .party = {.NoItemDefaultMoves = sParty_Richard},
    },

    [TRAINER_HERMAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("WINSTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Herman),
        .party = {.NoItemDefaultMoves = sParty_Herman},
    },

    [TRAINER_SANTIAGO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DAWSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Santiago),
        .party = {.NoItemDefaultMoves = sParty_Santiago},
    },

    [TRAINER_GILBERT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ASHTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gilbert),
        .party = {.NoItemDefaultMoves = sParty_Gilbert},
    },

    [TRAINER_FRANKLIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JOVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Franklin),
        .party = {.NoItemDefaultMoves = sParty_Franklin},
    },

    [TRAINER_KEVIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kevin),
        .party = {.NoItemDefaultMoves = sParty_Kevin},
    },

    [TRAINER_JACK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("AIDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jack),
        .party = {.NoItemDefaultMoves = sParty_Jack},
    },

    [TRAINER_DUDLEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("GLENN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dudley),
        .party = {.NoItemDefaultMoves = sParty_Dudley},
    },

    [TRAINER_CHAD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TAKESHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chad),
        .party = {.NoItemDefaultMoves = sParty_Chad},
    },

    [TRAINER_TONY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("KIOSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tony2),
        .party = {.NoItemDefaultMoves = sParty_Tony2},
    },

    [TRAINER_TONY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HIKARU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tony3),
        .party = {.NoItemDefaultMoves = sParty_Tony3},
    },

    [TRAINER_TONY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MASAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tony4),
        .party = {.NoItemDefaultMoves = sParty_Tony4},
    },

    [TRAINER_TONY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ERIK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tony5),
        .party = {.NoItemDefaultMoves = sParty_Tony5},
    },

    [TRAINER_TAKAO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("AVERY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Takao),
        .party = {.NoItemDefaultMoves = sParty_Takao},
    },

    [TRAINER_HITOSHI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("DEREK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hitoshi),
        .party = {.NoItemDefaultMoves = sParty_Hitoshi},
    },

    [TRAINER_KIYO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("ZAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kiyo),
        .party = {.NoItemDefaultMoves = sParty_Kiyo},
    },

    [TRAINER_KOICHI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koichi),
        .party = {.NoItemDefaultMoves = sParty_Koichi},
    },

    [TRAINER_NOB_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("FRANKLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nob1),
        .party = {.NoItemDefaultMoves = sParty_Nob1},
    },

    [TRAINER_NOB_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nob2),
        .party = {.NoItemDefaultMoves = sParty_Nob2},
    },

    [TRAINER_NOB_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("WAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nob3),
        .party = {.NoItemDefaultMoves = sParty_Nob3},
    },

    [TRAINER_NOB_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("ALAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nob4),
        .party = {.NoItemDefaultMoves = sParty_Nob4},
    },

    [TRAINER_NOB_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("BRICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nob5),
        .party = {.ItemDefaultMoves = sParty_Nob5},
    },

    [TRAINER_YUJI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("CLARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Yuji),
        .party = {.NoItemDefaultMoves = sParty_Yuji},
    },

    [TRAINER_DAISUKE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Daisuke),
        .party = {.NoItemDefaultMoves = sParty_Daisuke},
    },

    [TRAINER_ATSUSHI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("DUDLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Atsushi),
        .party = {.NoItemDefaultMoves = sParty_Atsushi},
    },

    [TRAINER_KIRK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("ALLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kirk),
        .party = {.NoItemDefaultMoves = sParty_Kirk},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("ERIC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout7),
        .party = {.NoItemDefaultMoves = sParty_GruntAquaHideout7},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("LENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout8),
        .party = {.NoItemDefaultMoves = sParty_GruntAquaHideout8},
    },

    [TRAINER_SHAWN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("OLIVER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shawn),
        .party = {.NoItemDefaultMoves = sParty_Shawn},
    },

    [TRAINER_FERNANDO_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando1),
        .party = {.NoItemDefaultMoves = sParty_Fernando1},
    },

    [TRAINER_DALTON_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("JARED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dalton1),
        .party = {.NoItemDefaultMoves = sParty_Dalton1},
    },

    [TRAINER_DALTON_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("MALIK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dalton2),
        .party = {.NoItemDefaultMoves = sParty_Dalton2},
    },

    [TRAINER_DALTON_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dalton3),
        .party = {.NoItemDefaultMoves = sParty_Dalton3},
    },

    [TRAINER_DALTON_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("ALEX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dalton4),
        .party = {.NoItemDefaultMoves = sParty_Dalton4},
    },

    [TRAINER_DALTON_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dalton5),
        .party = {.NoItemDefaultMoves = sParty_Dalton5},
    },

    [TRAINER_COLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("NORRIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cole),
        .party = {.NoItemDefaultMoves = sParty_Cole},
    },

    [TRAINER_JEFF] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("HIDEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jeff),
        .party = {.NoItemDefaultMoves = sParty_Jeff},
    },

    [TRAINER_AXLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("RUBEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Axle),
        .party = {.NoItemDefaultMoves = sParty_Axle},
    },

    [TRAINER_JACE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jace),
        .party = {.NoItemDefaultMoves = sParty_Jace},
    },

    [TRAINER_KEEGAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("NIKOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Keegan),
        .party = {.NoItemDefaultMoves = sParty_Keegan},
    },

    [TRAINER_BERNIE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("JAXON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bernie1),
        .party = {.NoItemDefaultMoves = sParty_Bernie1},
    },

    [TRAINER_BERNIE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("WILLIAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bernie2),
        .party = {.NoItemDefaultMoves = sParty_Bernie2},
    },

    [TRAINER_BERNIE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("LUKAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bernie3),
        .party = {.NoItemDefaultMoves = sParty_Bernie3},
    },

    [TRAINER_BERNIE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bernie4),
        .party = {.NoItemDefaultMoves = sParty_Bernie4},
    },

    [TRAINER_BERNIE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("GERALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bernie5),
        .party = {.NoItemDefaultMoves = sParty_Bernie5},
    },

    [TRAINER_DREW] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LUPIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Drew),
        .party = {.NoItemDefaultMoves = sParty_Drew},
    },

    [TRAINER_BEAU] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("JORDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Beau),
        .party = {.NoItemDefaultMoves = sParty_Beau},
    },

    [TRAINER_LARRY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("OSCAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Larry),
        .party = {.NoItemDefaultMoves = sParty_Larry},
    },

    [TRAINER_SHANE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("QUINN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shane),
        .party = {.NoItemDefaultMoves = sParty_Shane},
    },

    [TRAINER_JUSTIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("RAMON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Justin),
        .party = {.NoItemDefaultMoves = sParty_Justin},
    },

    [TRAINER_ETHAN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ethan1),
        .party = {.NoItemDefaultMoves = sParty_Ethan1},
    },

    [TRAINER_AUTUMN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ARNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Autumn),
        .party = {.NoItemDefaultMoves = sParty_Autumn},
    },

    [TRAINER_TRAVIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DRACO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Travis),
        .party = {.NoItemDefaultMoves = sParty_Travis},
    },

    [TRAINER_ETHAN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("SIMON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ethan2),
        .party = {.NoItemDefaultMoves = sParty_Ethan2},
    },

    [TRAINER_ETHAN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LEWIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ethan3),
        .party = {.NoItemDefaultMoves = sParty_Ethan3},
    },

    [TRAINER_ETHAN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BAILY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ethan4),
        .party = {.NoItemDefaultMoves = sParty_Ethan4},
    },

    [TRAINER_ETHAN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BRAXTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ethan5),
        .party = {.NoItemDefaultMoves = sParty_Ethan5},
    },

    [TRAINER_BRENT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brent),
        .party = {.NoItemDefaultMoves = sParty_Brent},
    },

    [TRAINER_DONALD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("DALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Donald),
        .party = {.NoItemDefaultMoves = sParty_Donald},
    },

    [TRAINER_TAYLOR] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("BERNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Taylor),
        .party = {.NoItemDefaultMoves = sParty_Taylor},
    },

    [TRAINER_JEFFREY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("NED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jeffrey1),
        .party = {.NoItemDefaultMoves = sParty_Jeffrey1},
    },

    [TRAINER_DEREK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("CHIP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Derek),
        .party = {.NoItemDefaultMoves = sParty_Derek},
    },

    [TRAINER_JEFFREY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("HANK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jeffrey2),
        .party = {.NoItemDefaultMoves = sParty_Jeffrey2},
    },

    [TRAINER_JEFFREY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jeffrey3),
        .party = {.NoItemDefaultMoves = sParty_Jeffrey3},
    },

    [TRAINER_JEFFREY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("RONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jeffrey4),
        .party = {.NoItemDefaultMoves = sParty_Jeffrey4},
    },

    [TRAINER_JEFFREY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("CLAUDE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jeffrey5),
        .party = {.ItemDefaultMoves = sParty_Jeffrey5},
    },

    [TRAINER_EDWARD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("WADE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edward),
        .party = {.NoItemDefaultMoves = sParty_Edward},
    },

    [TRAINER_PRESTON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NOLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Preston),
        .party = {.NoItemDefaultMoves = sParty_Preston},
    },

    [TRAINER_VIRGIL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("ANDREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Virgil),
        .party = {.NoItemDefaultMoves = sParty_Virgil},
    },

    [TRAINER_BLAKE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("LUIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Blake),
        .party = {.NoItemDefaultMoves = sParty_Blake},
    },

    [TRAINER_WILLIAM] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("RICHARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_William),
        .party = {.NoItemDefaultMoves = sParty_William},
    },

    [TRAINER_JOSHUA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("REECE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Joshua),
        .party = {.NoItemDefaultMoves = sParty_Joshua},
    },

    [TRAINER_CAMERON_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("MATTHEW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cameron1),
        .party = {.NoItemDefaultMoves = sParty_Cameron1},
    },

    [TRAINER_CAMERON_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("DOUGLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cameron2),
        .party = {.NoItemDefaultMoves = sParty_Cameron2},
    },

    [TRAINER_CAMERON_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cameron3),
        .party = {.NoItemDefaultMoves = sParty_Cameron3},
    },

    [TRAINER_CAMERON_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cameron4),
        .party = {.NoItemDefaultMoves = sParty_Cameron4},
    },

    [TRAINER_CAMERON_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("AXLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cameron5),
        .party = {.NoItemDefaultMoves = sParty_Cameron5},
    },

    [TRAINER_JACLYN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("BARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jaclyn),
        .party = {.NoItemDefaultMoves = sParty_Jaclyn},
    },

    [TRAINER_HANNAH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("DEAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hannah),
        .party = {.NoItemDefaultMoves = sParty_Hannah},
    },

    [TRAINER_SAMANTHA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("DARRIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Samantha),
        .party = {.NoItemDefaultMoves = sParty_Samantha},
    },

    [TRAINER_MAURA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("SPENCER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maura),
        .party = {.NoItemDefaultMoves = sParty_Maura},
    },

    [TRAINER_KAYLA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kayla),
        .party = {.NoItemDefaultMoves = sParty_Kayla},
    },

    [TRAINER_ALEXIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JEROME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alexis),
        .party = {.NoItemDefaultMoves = sParty_Alexis},
    },

    [TRAINER_JACKI_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ROLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jacki1),
        .party = {.NoItemDefaultMoves = sParty_Jacki1},
    },

    [TRAINER_JACKI_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jacki2),
        .party = {.NoItemDefaultMoves = sParty_Jacki2},
    },

    [TRAINER_JACKI_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("LUKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jacki3),
        .party = {.NoItemDefaultMoves = sParty_Jacki3},
    },

    [TRAINER_JACKI_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("CAMRON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jacki4),
        .party = {.NoItemDefaultMoves = sParty_Jacki4},
    },

    [TRAINER_JACKI_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("RAUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jacki5),
        .party = {.NoItemDefaultMoves = sParty_Jacki5},
    },

    [TRAINER_WALTER_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Walter1),
        .party = {.NoItemDefaultMoves = sParty_Walter1},
    },

    [TRAINER_MICAH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("ZEEK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Micah),
        .party = {.NoItemDefaultMoves = sParty_Micah},
    },

    [TRAINER_THOMAS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("JAMAL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thomas),
        .party = {.NoItemDefaultMoves = sParty_Thomas},
    },

    [TRAINER_WALTER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("COREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Walter2),
        .party = {.NoItemDefaultMoves = sParty_Walter2},
    },

    [TRAINER_WALTER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("LUCIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Walter3),
        .party = {.NoItemDefaultMoves = sParty_Walter3},
    },

    [TRAINER_WALTER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("HUGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Walter4),
        .party = {.NoItemDefaultMoves = sParty_Walter4},
    },

    [TRAINER_WALTER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("JASPER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Walter5),
        .party = {.NoItemDefaultMoves = sParty_Walter5},
    },

    [TRAINER_SIDNEY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("DIRK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sidney),
        .party = {.ItemDefaultMoves = sParty_Sidney},
    },

    [TRAINER_PHOEBE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("DARIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Phoebe),
        .party = {.ItemDefaultMoves = sParty_Phoebe},
    },

    [TRAINER_GLACIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("STAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Glacia),
        .party = {.NoItemDefaultMoves = sParty_Glacia},
    },

    [TRAINER_DRAKE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("BRIDGET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Drake),
        .party = {.ItemDefaultMoves = sParty_Drake},
    },

    [TRAINER_ROXANNE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("RICH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roxanne1),
        .party = {.NoItemDefaultMoves = sParty_Roxanne1},
    },

    [TRAINER_BRAWLY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRIDGET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brawly1),
        .party = {.NoItemDefaultMoves = sParty_Brawly1},
    },

    [TRAINER_WATTSON_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("TAMIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wattson1),
        .party = {.NoItemDefaultMoves = sParty_Wattson1},
    },

    [TRAINER_FLANNERY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("LORI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Flannery1),
        .party = {.NoItemDefaultMoves = sParty_Flannery1},
    },

    [TRAINER_NORMAN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Norman1),
        .party = {.NoItemDefaultMoves = sParty_Norman1},
    },

    [TRAINER_WINONA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("SHEILA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winona1),
        .party = {.NoItemDefaultMoves = sParty_Winona1},
    },

    [TRAINER_TATE_AND_LIZA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TIFFANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza1),
        .party = {.NoItemDefaultMoves = sParty_TateAndLiza1},
    },

    [TRAINER_JUAN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("NORA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Juan1),
        .party = {.NoItemDefaultMoves = sParty_Juan1},
    },

    [TRAINER_JERRY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("MELISSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jerry1),
        .party = {.NoItemDefaultMoves = sParty_Jerry1},
    },

    [TRAINER_TED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("GRACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ted),
        .party = {.NoItemDefaultMoves = sParty_Ted},
    },

    [TRAINER_PAUL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("OLIVIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Paul),
        .party = {.NoItemDefaultMoves = sParty_Paul},
    },

    [TRAINER_JERRY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("MARJORIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jerry2),
        .party = {.NoItemDefaultMoves = sParty_Jerry2},
    },

    [TRAINER_JERRY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("ANYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jerry3),
        .party = {.NoItemDefaultMoves = sParty_Jerry3},
    },

    [TRAINER_JERRY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("ALICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jerry4),
        .party = {.NoItemDefaultMoves = sParty_Jerry4},
    },

    [TRAINER_JERRY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("CONNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jerry5),
        .party = {.NoItemDefaultMoves = sParty_Jerry5},
    },

    [TRAINER_KAREN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("SHIRLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Karen1),
        .party = {.NoItemDefaultMoves = sParty_Karen1},
    },

    [TRAINER_GEORGIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("JOHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Georgia),
        .party = {.NoItemDefaultMoves = sParty_Georgia},
    },

    [TRAINER_KAREN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("TYRON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Karen2),
        .party = {.NoItemDefaultMoves = sParty_Karen2},
    },

    [TRAINER_KAREN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Karen3),
        .party = {.NoItemDefaultMoves = sParty_Karen3},
    },

    [TRAINER_KAREN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("PRESTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Karen4),
        .party = {.NoItemDefaultMoves = sParty_Karen4},
    },

    [TRAINER_KAREN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("RANDALL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Karen5),
        .party = {.NoItemDefaultMoves = sParty_Karen5},
    },

    [TRAINER_KATE_AND_JOY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("LUCA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KateAndJoy),
        .party = {.NoItemDefaultMoves = sParty_KateAndJoy},
    },

    [TRAINER_ANNA_AND_MEG_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg1),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg1},
    },

    [TRAINER_ANNA_AND_MEG_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("NELSON"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg2),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg2},
    },

    [TRAINER_ANNA_AND_MEG_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KIRK"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg3),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg3},
    },

    [TRAINER_ANNA_AND_MEG_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("SHAWN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg4),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg4},
    },

    [TRAINER_ANNA_AND_MEG_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("GREGORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg5),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg5},
    },

    [TRAINER_VICTOR] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Victor),
        .party = {.NoItemDefaultMoves = sParty_Victor},
    },

    [TRAINER_MIGUEL_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("KAYDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Miguel1),
        .party = {.NoItemDefaultMoves = sParty_Miguel1},
    },

    [TRAINER_COLTON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("NATE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Colton),
        .party = {.NoItemDefaultMoves = sParty_Colton},
    },

    [TRAINER_MIGUEL_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("PHIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Miguel2),
        .party = {.NoItemDefaultMoves = sParty_Miguel2},
    },

    [TRAINER_MIGUEL_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("EDGAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Miguel3),
        .party = {.NoItemDefaultMoves = sParty_Miguel3},
    },

    [TRAINER_MIGUEL_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("JASON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Miguel4),
        .party = {.NoItemDefaultMoves = sParty_Miguel4},
    },

    [TRAINER_MIGUEL_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("COLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Miguel5),
        .party = {.NoItemDefaultMoves = sParty_Miguel5},
    },

    [TRAINER_VICTORIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("VINCENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Victoria),
        .party = {.NoItemDefaultMoves = sParty_Victoria},
    },

    [TRAINER_VANESSA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vanessa),
        .party = {.NoItemDefaultMoves = sParty_Vanessa},
    },

    [TRAINER_BETHANY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("SEBASTIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bethany),
        .party = {.ItemDefaultMoves = sParty_Bethany},
    },

    [TRAINER_ISABEL_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("PERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabel1),
        .party = {.NoItemDefaultMoves = sParty_Isabel1},
    },

    [TRAINER_ISABEL_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabel2),
        .party = {.NoItemDefaultMoves = sParty_Isabel2},
    },

    [TRAINER_ISABEL_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("DONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabel3),
        .party = {.NoItemDefaultMoves = sParty_Isabel3},
    },

    [TRAINER_ISABEL_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("BENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabel4),
        .party = {.NoItemDefaultMoves = sParty_Isabel4},
    },

    [TRAINER_ISABEL_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabel5),
        .party = {.NoItemDefaultMoves = sParty_Isabel5},
    },

    [TRAINER_TIMOTHY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("CHESTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Timothy1),
        .party = {.NoItemDefaultMoves = sParty_Timothy1},
    },

    [TRAINER_TIMOTHY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("WILTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Timothy2),
        .party = {.NoItemDefaultMoves = sParty_Timothy2},
    },

    [TRAINER_TIMOTHY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("RAMIRO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Timothy3),
        .party = {.NoItemDefaultMoves = sParty_Timothy3},
    },

    [TRAINER_TIMOTHY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("JACOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Timothy4),
        .party = {.NoItemDefaultMoves = sParty_Timothy4},
    },

    [TRAINER_TIMOTHY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("ROGER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Timothy5),
        .party = {.NoItemDefaultMoves = sParty_Timothy5},
    },

    [TRAINER_VICKY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("LEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vicky),
        .party = {.NoItemDefaultMoves = sParty_Vicky},
    },

    [TRAINER_SHELBY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("HOWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shelby1),
        .party = {.NoItemDefaultMoves = sParty_Shelby1},
    },

    [TRAINER_SHELBY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("CARTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shelby2),
        .party = {.NoItemDefaultMoves = sParty_Shelby2},
    },

    [TRAINER_SHELBY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MITCH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shelby3),
        .party = {.NoItemDefaultMoves = sParty_Shelby3},
    },

    [TRAINER_SHELBY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("BECK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shelby4),
        .party = {.NoItemDefaultMoves = sParty_Shelby4},
    },

    [TRAINER_SHELBY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MARLON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shelby5),
        .party = {.NoItemDefaultMoves = sParty_Shelby5},
    },

    [TRAINER_CALVIN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("KOICHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Calvin1),
        .party = {.ItemDefaultMoves = sParty_Calvin1},
    },

    [TRAINER_BILLY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Billy),
        .party = {.ItemDefaultMoves = sParty_Billy},
    },

    [TRAINER_JOSH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("HIDEKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Josh),
        .party = {.ItemDefaultMoves = sParty_Josh},
    },

    [TRAINER_TOMMY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("AARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tommy),
        .party = {.ItemDefaultMoves = sParty_Tommy},
    },

    [TRAINER_JOEY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("HITOSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Joey),
        .party = {.ItemDefaultMoves = sParty_Joey},
    },

    [TRAINER_BEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("ATSUSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ben),
        .party = {.ItemDefaultMoves = sParty_Ben},
    },

    [TRAINER_QUINCY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("KIYO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Quincy),
        .party = {.NoItemDefaultMoves = sParty_Quincy},
    },

    [TRAINER_KATELYNN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("TAKASHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katelynn),
        .party = {.ItemDefaultMoves = sParty_Katelynn},
    },

    [TRAINER_JAYLEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DAISUKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jaylen),
        .party = {.ItemDefaultMoves = sParty_Jaylen},
    },

    [TRAINER_DILLON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dillon),
        .party = {.ItemCustomMoves = sParty_Dillon},
    },

    [TRAINER_CALVIN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("BELIAL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Calvin2),
        .party = {.ItemCustomMoves = sParty_Calvin2},
    },

    [TRAINER_CALVIN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("ANDERSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Calvin3),
        .party = {.ItemCustomMoves = sParty_Calvin3},
    },

    [TRAINER_CALVIN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("VLADI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Calvin4),
        .party = {.ItemCustomMoves = sParty_Calvin4},
    },

    [TRAINER_CALVIN_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("COPIONA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Calvin5),
        .party = {.ItemCustomMoves = sParty_Calvin5},
    },

    [TRAINER_EDDIE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("EUSINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Eddie),
        .party = {.ItemCustomMoves = sParty_Eddie},
    },

    [TRAINER_ALLEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DAMIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Allen),
        .party = {.ItemCustomMoves = sParty_Allen},
    },

    [TRAINER_TIMMY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("PACO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Timmy),
        .party = {.ItemCustomMoves = sParty_Timmy},
    },

    [TRAINER_WALLACE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .trainerName = _("MATIAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wallace),
        .party = {.NoItemDefaultMoves = sParty_Wallace},
    },

    [TRAINER_ANDREW] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("TED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andrew),
        .party = {.NoItemDefaultMoves = sParty_Andrew},
    },

    [TRAINER_IVAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CONNOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ivan),
        .party = {.NoItemDefaultMoves = sParty_Ivan},
    },

    [TRAINER_CLAUDE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Claude),
        .party = {.NoItemDefaultMoves = sParty_Claude},
    },

    [TRAINER_ELLIOT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JOSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elliot1),
        .party = {.NoItemDefaultMoves = sParty_Elliot1},
    },

    [TRAINER_NED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("RODNEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ned),
        .party = {.NoItemDefaultMoves = sParty_Ned},
    },

    [TRAINER_DALE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("BEAU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dale),
        .party = {.NoItemDefaultMoves = sParty_Dale},
    },

    [TRAINER_NOLAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("TAYLOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nolan),
        .party = {.NoItemDefaultMoves = sParty_Nolan},
    },

    [TRAINER_BARNY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JOSHUA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Barny),
        .party = {.NoItemDefaultMoves = sParty_Barny},
    },

    [TRAINER_WADE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("PARKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wade),
        .party = {.NoItemDefaultMoves = sParty_Wade},
    },

    [TRAINER_CARTER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Carter),
        .party = {.NoItemDefaultMoves = sParty_Carter},
    },

    [TRAINER_ELLIOT_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elliot2),
        .party = {.NoItemDefaultMoves = sParty_Elliot2},
    },

    [TRAINER_ELLIOT_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("BRAYDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elliot3),
        .party = {.NoItemDefaultMoves = sParty_Elliot3},
    },

    [TRAINER_ELLIOT_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("IVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elliot4),
        .party = {.NoItemDefaultMoves = sParty_Elliot4},
    },

    [TRAINER_ELLIOT_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elliot5),
        .party = {.NoItemDefaultMoves = sParty_Elliot5},
    },

    [TRAINER_RONALD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ronald),
        .party = {.NoItemDefaultMoves = sParty_Ronald},
    },

    [TRAINER_JACOB] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BARTOLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jacob),
        .party = {.NoItemCustomMoves = sParty_Jacob},
    },

    [TRAINER_ANTHONY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Anthony),
        .party = {.NoItemDefaultMoves = sParty_Anthony},
    },

    [TRAINER_BENJAMIN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Benjamin1),
        .party = {.NoItemDefaultMoves = sParty_Benjamin1},
    },

    [TRAINER_BENJAMIN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Benjamin2),
        .party = {.NoItemDefaultMoves = sParty_Benjamin2},
    },

    [TRAINER_BENJAMIN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Benjamin3),
        .party = {.NoItemDefaultMoves = sParty_Benjamin3},
    },

    [TRAINER_BENJAMIN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Benjamin4),
        .party = {.NoItemDefaultMoves = sParty_Benjamin4},
    },

    [TRAINER_BENJAMIN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Benjamin5),
        .party = {.NoItemDefaultMoves = sParty_Benjamin5},
    },

    [TRAINER_ABIGAIL_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Abigail1),
        .party = {.NoItemDefaultMoves = sParty_Abigail1},
    },

    [TRAINER_JASMINE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ISMAEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jasmine),
        .party = {.NoItemDefaultMoves = sParty_Jasmine},
    },

    [TRAINER_ABIGAIL_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("CHARLES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Abigail2),
        .party = {.NoItemDefaultMoves = sParty_Abigail2},
    },

    [TRAINER_ABIGAIL_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("LOUIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Abigail3),
        .party = {.NoItemDefaultMoves = sParty_Abigail3},
    },

    [TRAINER_ABIGAIL_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Abigail4),
        .party = {.NoItemDefaultMoves = sParty_Abigail4},
    },

    [TRAINER_ABIGAIL_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Abigail5),
        .party = {.NoItemDefaultMoves = sParty_Abigail5},
    },

    [TRAINER_DYLAN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("PROTÓN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dylan1),
        .party = {.ItemCustomMoves = sParty_Dylan1},
    },

    [TRAINER_DYLAN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("PETREL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dylan2),
        .party = {.ItemCustomMoves = sParty_Dylan2},
    },

    [TRAINER_DYLAN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dylan3),
        .party = {.ItemCustomMoves = sParty_Dylan3},
    },

    [TRAINER_DYLAN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dylan4),
        .party = {.ItemCustomMoves = sParty_Dylan4},
    },

    [TRAINER_DYLAN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dylan5),
        .party = {.NoItemDefaultMoves = sParty_Dylan5},
    },

    [TRAINER_MARIA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maria1),
        .party = {.NoItemDefaultMoves = sParty_Maria1},
    },

    [TRAINER_MARIA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maria2),
        .party = {.NoItemDefaultMoves = sParty_Maria2},
    },

    [TRAINER_MARIA_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maria3),
        .party = {.NoItemDefaultMoves = sParty_Maria3},
    },

    [TRAINER_MARIA_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maria4),
        .party = {.NoItemDefaultMoves = sParty_Maria4},
    },

    [TRAINER_MARIA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("LIGA PKMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maria5),
        .party = {.NoItemDefaultMoves = sParty_Maria5},
    },

    [TRAINER_CAMDEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Camden),
        .party = {.NoItemDefaultMoves = sParty_Camden},
    },

    [TRAINER_DEMETRIUS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Demetrius),
        .party = {.NoItemDefaultMoves = sParty_Demetrius},
    },

    [TRAINER_ISAIAH_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaiah1),
        .party = {.NoItemDefaultMoves = sParty_Isaiah1},
    },

    [TRAINER_PABLO_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pablo1),
        .party = {.NoItemDefaultMoves = sParty_Pablo1},
    },

    [TRAINER_CHASE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chase),
        .party = {.NoItemDefaultMoves = sParty_Chase},
    },

    [TRAINER_ISAIAH_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaiah2),
        .party = {.NoItemDefaultMoves = sParty_Isaiah2},
    },

    [TRAINER_ISAIAH_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaiah3),
        .party = {.NoItemDefaultMoves = sParty_Isaiah3},
    },

    [TRAINER_ISAIAH_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaiah4),
        .party = {.NoItemDefaultMoves = sParty_Isaiah4},
    },

    [TRAINER_ISAIAH_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaiah5),
        .party = {.NoItemDefaultMoves = sParty_Isaiah5},
    },

    [TRAINER_ISOBEL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isobel),
        .party = {.NoItemDefaultMoves = sParty_Isobel},
    },

    [TRAINER_DONNY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Donny),
        .party = {.NoItemDefaultMoves = sParty_Donny},
    },

    [TRAINER_TALIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Talia),
        .party = {.NoItemDefaultMoves = sParty_Talia},
    },

    [TRAINER_KATELYN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katelyn1),
        .party = {.NoItemDefaultMoves = sParty_Katelyn1},
    },

    [TRAINER_ALLISON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Allison),
        .party = {.NoItemDefaultMoves = sParty_Allison},
    },

    [TRAINER_KATELYN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katelyn2),
        .party = {.NoItemDefaultMoves = sParty_Katelyn2},
    },

    [TRAINER_KATELYN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katelyn3),
        .party = {.NoItemDefaultMoves = sParty_Katelyn3},
    },

    [TRAINER_KATELYN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katelyn4),
        .party = {.NoItemDefaultMoves = sParty_Katelyn4},
    },

    [TRAINER_KATELYN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katelyn5),
        .party = {.NoItemDefaultMoves = sParty_Katelyn5},
    },

    [TRAINER_NICOLAS_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nicolas1),
        .party = {.ItemCustomMoves = sParty_Nicolas1},
    },

    [TRAINER_NICOLAS_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("SAMUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nicolas2),
        .party = {.NoItemDefaultMoves = sParty_Nicolas2},
    },

    [TRAINER_NICOLAS_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("GEORGE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nicolas3),
        .party = {.NoItemDefaultMoves = sParty_Nicolas3},
    },

    [TRAINER_NICOLAS_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("COLBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nicolas4),
        .party = {.NoItemDefaultMoves = sParty_Nicolas4},
    },

    [TRAINER_NICOLAS_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("TYSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nicolas5),
        .party = {.ItemDefaultMoves = sParty_Nicolas5},
    },

    [TRAINER_AARON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("ROLANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Aaron),
        .party = {.NoItemDefaultMoves = sParty_Aaron},
    },

    [TRAINER_PERRY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("NASTIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Perry),
        .party = {.NoItemDefaultMoves = sParty_Perry},
    },

    [TRAINER_HUGH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("SUMIT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hugh),
        .party = {.NoItemDefaultMoves = sParty_Hugh},
    },

    [TRAINER_PHIL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COLLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Phil),
        .party = {.NoItemDefaultMoves = sParty_Phil},
    },

    [TRAINER_JARED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("YUJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jared),
        .party = {.NoItemDefaultMoves = sParty_Jared},
    },

    [TRAINER_HUMBERTO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("WARREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Humberto),
        .party = {.NoItemDefaultMoves = sParty_Humberto},
    },

    [TRAINER_PRESLEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("MARY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Presley),
        .party = {.NoItemDefaultMoves = sParty_Presley},
    },

    [TRAINER_EDWARDO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("CAROLINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edwardo),
        .party = {.NoItemDefaultMoves = sParty_Edwardo},
    },

    [TRAINER_COLIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ALEXA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Colin),
        .party = {.NoItemDefaultMoves = sParty_Colin},
    },

    [TRAINER_ROBERT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("STAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robert1),
        .party = {.NoItemDefaultMoves = sParty_Robert1},
    },

    [TRAINER_BENNY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("NAOMI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Benny),
        .party = {.NoItemDefaultMoves = sParty_Benny},
    },

    [TRAINER_CHESTER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("VICTORIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chester),
        .party = {.NoItemDefaultMoves = sParty_Chester},
    },

    [TRAINER_ROBERT_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("APOSTOLOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robert2),
        .party = {.NoItemDefaultMoves = sParty_Robert2},
    },

    [TRAINER_ROBERT_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("STEFFI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robert3),
        .party = {.NoItemDefaultMoves = sParty_Robert3},
    },

    [TRAINER_ROBERT_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("LORELEI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robert4),
        .party = {.ItemCustomMoves = sParty_Robert4},
    },

    [TRAINER_ROBERT_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BRUNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robert5),
        .party = {.ItemCustomMoves = sParty_Robert5},
    },

    [TRAINER_ALEX] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("AGATHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alex),
        .party = {.ItemCustomMoves = sParty_Alex},
    },

    [TRAINER_BECK] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("LANCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Beck),
        .party = {.ItemCustomMoves = sParty_Beck},
    },

    [TRAINER_YASU] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("BROCK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Yasu),
        .party = {.ItemCustomMoves = sParty_Yasu},
    },

    [TRAINER_TAKASHI] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("MISTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Takashi),
        .party = {.ItemCustomMoves = sParty_Takashi},
    },

    [TRAINER_DIANNE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("LT.SURGE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dianne),
        .party = {.ItemCustomMoves = sParty_Dianne},
    },

    [TRAINER_JANI] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("ERIKA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jani),
        .party = {.ItemCustomMoves = sParty_Jani},
    },

    [TRAINER_LAO_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("KOGA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lao1),
        .party = {.ItemCustomMoves = sParty_Lao1},
    },

    [TRAINER_LUNG] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("BLAINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lung),
        .party = {.ItemCustomMoves = sParty_Lung},
    },

    [TRAINER_LAO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("SABRINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lao2),
        .party = {.ItemCustomMoves = sParty_Lao2},
    },

    [TRAINER_LAO_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("THOMAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lao3),
        .party = {.NoItemDefaultMoves = sParty_Lao3},
    },

    [TRAINER_LAO_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("ARTHUR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lao4),
        .party = {.NoItemDefaultMoves = sParty_Lao4},
    },

    [TRAINER_LAO_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("TUCKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lao5),
        .party = {.ItemDefaultMoves = sParty_Lao5},
    },

    [TRAINER_JOCELYN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("DOM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jocelyn),
        .party = {.NoItemDefaultMoves = sParty_Jocelyn},
    },

    [TRAINER_LAURA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("FLINT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Laura),
        .party = {.NoItemDefaultMoves = sParty_Laura},
    },

    [TRAINER_CYNDY_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cyndy1),
        .party = {.ItemCustomMoves = sParty_Cyndy1},
    },

    [TRAINER_CORA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cora),
        .party = {.ItemCustomMoves = sParty_Cora},
    },

    [TRAINER_PAULA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("JAVIER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Paula),
        .party = {.NoItemDefaultMoves = sParty_Paula},
    },

    [TRAINER_CYNDY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cyndy2),
        .party = {.NoItemDefaultMoves = sParty_Cyndy2},
    },

    [TRAINER_CYNDY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cyndy3),
        .party = {.NoItemDefaultMoves = sParty_Cyndy3},
    },

    [TRAINER_CYNDY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cyndy4),
        .party = {.NoItemDefaultMoves = sParty_Cyndy4},
    },

    [TRAINER_CYNDY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cyndy5),
        .party = {.NoItemDefaultMoves = sParty_Cyndy5},
    },

    [TRAINER_MADELINE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Madeline1),
        .party = {.NoItemDefaultMoves = sParty_Madeline1},
    },

    [TRAINER_CLARISSA] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("PRESIDENTE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Clarissa),
        .party = {.NoItemCustomMoves = sParty_Clarissa},
    },

    [TRAINER_ANGELICA] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("TIRIAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Angelica),
        .party = {.NoItemCustomMoves = sParty_Angelica},
    },

    [TRAINER_MADELINE_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("SAFARI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Madeline2),
        .party = {.ItemCustomMoves = sParty_Madeline2},
    },

    [TRAINER_MADELINE_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("ATLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Madeline3),
        .party = {.NoItemCustomMoves = sParty_Madeline3},
    },

    [TRAINER_MADELINE_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Madeline4),
        .party = {.ItemCustomMoves = sParty_Madeline4},
    },

    [TRAINER_MADELINE_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Madeline5),
        .party = {.ItemCustomMoves = sParty_Madeline5},
    },

    [TRAINER_BEVERLY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JONES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Beverly),
        .party = {.ItemCustomMoves = sParty_Beverly},
    },

    [TRAINER_IMANI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("PATRICIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Imani),
        .party = {.NoItemDefaultMoves = sParty_Imani},
    },

    [TRAINER_KYLA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("CARLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kyla),
        .party = {.NoItemDefaultMoves = sParty_Kyla},
    },

    [TRAINER_DENISE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("HOPE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Denise),
        .party = {.NoItemDefaultMoves = sParty_Denise},
    },

    [TRAINER_BETH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("PAULA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Beth),
        .party = {.NoItemDefaultMoves = sParty_Beth},
    },

    [TRAINER_TARA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LAUREL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tara),
        .party = {.NoItemDefaultMoves = sParty_Tara},
    },

    [TRAINER_MISSY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JODY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Missy),
        .party = {.NoItemDefaultMoves = sParty_Missy},
    },

    [TRAINER_ALICE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TAMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alice),
        .party = {.NoItemDefaultMoves = sParty_Alice},
    },

    [TRAINER_JENNY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("RUTH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jenny1),
        .party = {.NoItemDefaultMoves = sParty_Jenny1},
    },

    [TRAINER_GRACE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KARINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Grace),
        .party = {.NoItemDefaultMoves = sParty_Grace},
    },

    [TRAINER_TANYA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JANAE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tanya),
        .party = {.NoItemDefaultMoves = sParty_Tanya},
    },

    [TRAINER_SHARON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ANGELICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sharon),
        .party = {.NoItemDefaultMoves = sParty_Sharon},
    },

    [TRAINER_NIKKI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("EMILIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nikki),
        .party = {.NoItemDefaultMoves = sParty_Nikki},
    },

    [TRAINER_BRENDA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNIFER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brenda),
        .party = {.NoItemDefaultMoves = sParty_Brenda},
    },

    [TRAINER_KATIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Katie),
        .party = {.NoItemDefaultMoves = sParty_Katie},
    },

    [TRAINER_SUSIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Susie),
        .party = {.NoItemDefaultMoves = sParty_Susie},
    },

    [TRAINER_KARA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kara),
        .party = {.NoItemDefaultMoves = sParty_Kara},
    },

    [TRAINER_DANA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dana),
        .party = {.NoItemDefaultMoves = sParty_Dana},
    },

    [TRAINER_SIENNA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sienna),
        .party = {.NoItemDefaultMoves = sParty_Sienna},
    },

    [TRAINER_DEBRA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Debra),
        .party = {.NoItemDefaultMoves = sParty_Debra},
    },

    [TRAINER_LINDA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Linda),
        .party = {.NoItemDefaultMoves = sParty_Linda},
    },

    [TRAINER_KAYLEE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kaylee),
        .party = {.NoItemDefaultMoves = sParty_Kaylee},
    },

    [TRAINER_LAUREL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("AMANDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Laurel),
        .party = {.NoItemDefaultMoves = sParty_Laurel},
    },

    [TRAINER_CARLEE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("STACY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Carlee),
        .party = {.NoItemDefaultMoves = sParty_Carlee},
    },

    [TRAINER_JENNY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TASHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jenny2),
        .party = {.NoItemDefaultMoves = sParty_Jenny2},
    },

    [TRAINER_JENNY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JEREMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jenny3),
        .party = {.NoItemDefaultMoves = sParty_Jenny3},
    },

    [TRAINER_JENNY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALMA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jenny4),
        .party = {.NoItemDefaultMoves = sParty_Jenny4},
    },

    [TRAINER_JENNY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jenny5),
        .party = {.NoItemDefaultMoves = sParty_Jenny5},
    },

    [TRAINER_HEIDI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("VALERIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Heidi),
        .party = {.NoItemDefaultMoves = sParty_Heidi},
    },

    [TRAINER_BECKY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("GWEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Becky),
        .party = {.NoItemDefaultMoves = sParty_Becky},
    },

    [TRAINER_CAROL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("VIRGIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Carol),
        .party = {.NoItemDefaultMoves = sParty_Carol},
    },

    [TRAINER_NANCY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("FLINT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nancy),
        .party = {.NoItemDefaultMoves = sParty_Nancy},
    },

    [TRAINER_MARTHA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("MISSY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Martha),
        .party = {.NoItemDefaultMoves = sParty_Martha},
    },

    [TRAINER_DIANA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("IRENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Diana1),
        .party = {.NoItemDefaultMoves = sParty_Diana1},
    },

    [TRAINER_CEDRIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("DANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cedric),
        .party = {.NoItemDefaultMoves = sParty_Cedric},
    },

    [TRAINER_IRENE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ARIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Irene),
        .party = {.NoItemDefaultMoves = sParty_Irene},
    },

    [TRAINER_DIANA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("LEAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Diana2),
        .party = {.NoItemDefaultMoves = sParty_Diana2},
    },

    [TRAINER_DIANA_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("JUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Diana3),
        .party = {.NoItemDefaultMoves = sParty_Diana3},
    },

    [TRAINER_DIANA_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("YAZMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Diana4),
        .party = {.NoItemDefaultMoves = sParty_Diana4},
    },

    [TRAINER_DIANA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("KINDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Diana5),
        .party = {.NoItemDefaultMoves = sParty_Diana5},
    },

    [TRAINER_AMY_AND_LIV_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("BECKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv1),
        .party = {.NoItemDefaultMoves = sParty_AmyAndLiv1},
    },

    [TRAINER_AMY_AND_LIV_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("CELIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv2),
        .party = {.NoItemDefaultMoves = sParty_AmyAndLiv2},
    },

    [TRAINER_GINA_AND_MIA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("BROOKS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GinaAndMia1),
        .party = {.NoItemDefaultMoves = sParty_GinaAndMia1},
    },

    [TRAINER_MIU_AND_YUKI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("LAMAR"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MiuAndYuki),
        .party = {.NoItemDefaultMoves = sParty_MiuAndYuki},
    },

    [TRAINER_AMY_AND_LIV_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("ELI & ANNE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv3),
        .party = {.NoItemDefaultMoves = sParty_AmyAndLiv3},
    },

    [TRAINER_GINA_AND_MIA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("RAY & TYRA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GinaAndMia2),
        .party = {.NoItemDefaultMoves = sParty_GinaAndMia2},
    },

    [TRAINER_AMY_AND_LIV_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GIA & JES"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv4),
        .party = {.NoItemDefaultMoves = sParty_AmyAndLiv4},
    },

    [TRAINER_AMY_AND_LIV_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("KIRI & JAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv5),
        .party = {.NoItemDefaultMoves = sParty_AmyAndLiv5},
    },

    [TRAINER_AMY_AND_LIV_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("RON & MYA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv6),
        .party = {.ItemDefaultMoves = sParty_AmyAndLiv6},
    },

    [TRAINER_HUEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LEA & JED"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Huey),
        .party = {.NoItemDefaultMoves = sParty_Huey},
    },

    [TRAINER_EDMOND] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LIA & LUC"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edmond),
        .party = {.NoItemDefaultMoves = sParty_Edmond},
    },

    [TRAINER_ERNEST_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LIL & IAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ernest1),
        .party = {.NoItemDefaultMoves = sParty_Ernest1},
    },

    [TRAINER_DWAYNE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dwayne),
        .party = {.NoItemDefaultMoves = sParty_Dwayne},
    },

    [TRAINER_PHILLIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Phillip),
        .party = {.NoItemDefaultMoves = sParty_Phillip},
    },

    [TRAINER_LEONARD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leonard),
        .party = {.NoItemDefaultMoves = sParty_Leonard},
    },

    [TRAINER_DUNCAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Duncan),
        .party = {.NoItemDefaultMoves = sParty_Duncan},
    },

    [TRAINER_ERNEST_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ernest2),
        .party = {.NoItemDefaultMoves = sParty_Ernest2},
    },

    [TRAINER_ERNEST_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ernest3),
        .party = {.NoItemDefaultMoves = sParty_Ernest3},
    },

    [TRAINER_ERNEST_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ernest4),
        .party = {.NoItemDefaultMoves = sParty_Ernest4},
    },

    [TRAINER_ERNEST_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ernest5),
        .party = {.NoItemDefaultMoves = sParty_Ernest5},
    },

    [TRAINER_ELI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Eli),
        .party = {.NoItemDefaultMoves = sParty_Eli},
    },

    [TRAINER_ANNIKA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Annika),
        .party = {.NoItemDefaultMoves = sParty_Annika},
    },

    [TRAINER_JAZMYN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jazmyn),
        .party = {.NoItemDefaultMoves = sParty_Jazmyn},
    },

    [TRAINER_JONAS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jonas),
        .party = {.NoItemDefaultMoves = sParty_Jonas},
    },

    [TRAINER_KAYLEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kayley),
        .party = {.NoItemDefaultMoves = sParty_Kayley},
    },

    [TRAINER_AURON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("ANASTASIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Auron),
        .party = {.NoItemDefaultMoves = sParty_Auron},
    },

    [TRAINER_KELVIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("SAMBER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kelvin),
        .party = {.NoItemDefaultMoves = sParty_Kelvin},
    },

    [TRAINER_MARLEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("FERNAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marley),
        .party = {.NoItemDefaultMoves = sParty_Marley},
    },

    [TRAINER_REYNA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("ALICIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Reyna),
        .party = {.NoItemDefaultMoves = sParty_Reyna},
    },

    [TRAINER_HUDSON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("STEFANOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hudson),
        .party = {.NoItemDefaultMoves = sParty_Hudson},
    },

    [TRAINER_CONOR] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Conor),
        .party = {.NoItemDefaultMoves = sParty_Conor},
    },

    [TRAINER_EDWIN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("KAITLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edwin1),
        .party = {.NoItemDefaultMoves = sParty_Edwin1},
    },

    [TRAINER_HECTOR] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("TERESA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hector),
        .party = {.NoItemDefaultMoves = sParty_Hector},
    },

    [TRAINER_TABITHA_MOSSDEEP] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TabithaMossdeep),
        .party = {.ItemCustomMoves = sParty_TabithaMossdeep},
    },

    [TRAINER_EDWIN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("JONES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edwin2),
        .party = {.NoItemDefaultMoves = sParty_Edwin2},
    },

    [TRAINER_EDWIN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("CARLOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edwin3),
        .party = {.NoItemDefaultMoves = sParty_Edwin3},
    },

    [TRAINER_EDWIN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("JUAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edwin4),
        .party = {.NoItemDefaultMoves = sParty_Edwin4},
    },

    [TRAINER_EDWIN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("JACLYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Edwin5),
        .party = {.NoItemDefaultMoves = sParty_Edwin5},
    },

    [TRAINER_WALLY_VR_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("SHARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_WallyVR1),
        .party = {.ItemDefaultMoves = sParty_WallyVR1},
    },

    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("AMIRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute103Mudkip),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute103Mudkip},
    },

    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("ALIZE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute110Mudkip),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute110Mudkip},
    },

    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute119Mudkip),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute119Mudkip},
    },

    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute103Treecko),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute103Treecko},
    },

    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("NIKKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute110Treecko),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute110Treecko},
    },

    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("STANLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute119Treecko),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute119Treecko},
    },

    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute103Torchic),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute103Torchic},
    },

    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("DAISY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute110Torchic),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute110Torchic},
    },

    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("FERN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute119Torchic),
        .party = {.NoItemDefaultMoves = sParty_BrendanRoute119Torchic},
    },

    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MARTINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute103Mudkip),
        .party = {.NoItemDefaultMoves = sParty_MayRoute103Mudkip},
    },

    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("SAMBER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute110Mudkip),
        .party = {.NoItemDefaultMoves = sParty_MayRoute110Mudkip},
    },

    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("ROBBINS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute119Mudkip),
        .party = {.NoItemDefaultMoves = sParty_MayRoute119Mudkip},
    },

    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("ANTHONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute103Treecko),
        .party = {.NoItemDefaultMoves = sParty_MayRoute103Treecko},
    },

    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("CHARLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute110Treecko),
        .party = {.NoItemDefaultMoves = sParty_MayRoute110Treecko},
    },

    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("BOHR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute119Treecko),
        .party = {.NoItemDefaultMoves = sParty_MayRoute119Treecko},
    },

    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("JOHNSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute103Torchic),
        .party = {.NoItemDefaultMoves = sParty_MayRoute103Torchic},
    },

    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("RICARDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute110Torchic),
        .party = {.NoItemDefaultMoves = sParty_MayRoute110Torchic},
    },

    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("JAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRoute119Torchic),
        .party = {.NoItemDefaultMoves = sParty_MayRoute119Torchic},
    },

    [TRAINER_ISAAC_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("GAUFF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac1),
        .party = {.NoItemDefaultMoves = sParty_Isaac1},
    },

    [TRAINER_DAVIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("ELOY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Davis),
        .party = {.NoItemDefaultMoves = sParty_Davis},
    },

    [TRAINER_MITCHELL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MISCHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mitchell),
        .party = {.NoItemDefaultMoves = sParty_Mitchell},
    },

    [TRAINER_ISAAC_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac2),
        .party = {.NoItemDefaultMoves = sParty_Isaac2},
    },

    [TRAINER_ISAAC_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("RECLUTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac3),
        .party = {.NoItemDefaultMoves = sParty_Isaac3},
    },

    [TRAINER_ISAAC_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("RECLUTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac4),
        .party = {.NoItemDefaultMoves = sParty_Isaac4},
    },

    [TRAINER_ISAAC_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("RECLUTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac5),
        .party = {.NoItemDefaultMoves = sParty_Isaac5},
    },

    [TRAINER_LYDIA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("RECLUTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lydia1),
        .party = {.NoItemDefaultMoves = sParty_Lydia1},
    },

    [TRAINER_HALLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DANIIL"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Halle),
        .party = {.NoItemDefaultMoves = sParty_Halle},
    },

    [TRAINER_GARRISON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("AMARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Garrison),
        .party = {.NoItemDefaultMoves = sParty_Garrison},
    },

    [TRAINER_LYDIA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lydia2),
        .party = {.NoItemDefaultMoves = sParty_Lydia2},
    },

    [TRAINER_LYDIA_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lydia3),
        .party = {.NoItemDefaultMoves = sParty_Lydia3},
    },

    [TRAINER_LYDIA_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("FINN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lydia4),
        .party = {.NoItemDefaultMoves = sParty_Lydia4},
    },

    [TRAINER_LYDIA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GARETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lydia5),
        .party = {.NoItemDefaultMoves = sParty_Lydia5},
    },

    [TRAINER_JACKSON_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("TOMMY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson1),
        .party = {.NoItemDefaultMoves = sParty_Jackson1},
    },

    [TRAINER_LORENZO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("TANYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lorenzo),
        .party = {.ItemDefaultMoves = sParty_Lorenzo},
    },

    [TRAINER_SEBASTIAN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("SHEA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sebastian),
        .party = {.ItemDefaultMoves = sParty_Sebastian},
    },

    [TRAINER_JACKSON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("HUGH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson2),
        .party = {.ItemDefaultMoves = sParty_Jackson2},
    },

    [TRAINER_JACKSON_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("BRYCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson3),
        .party = {.NoItemDefaultMoves = sParty_Jackson3},
    },

    [TRAINER_JACKSON_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("CLAIRE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson4),
        .party = {.NoItemDefaultMoves = sParty_Jackson4},
    },

    [TRAINER_JACKSON_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("MIK & KIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson5),
        .party = {.ItemDefaultMoves = sParty_Jackson5},
    },

    [TRAINER_CATHERINE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("VIOLET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Catherine1),
        .party = {.NoItemDefaultMoves = sParty_Catherine1},
    },

    [TRAINER_JENNA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("ALEXIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jenna),
        .party = {.NoItemDefaultMoves = sParty_Jenna},
    },

    [TRAINER_SOPHIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("JOY & MEG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sophia),
        .party = {.NoItemDefaultMoves = sParty_Sophia},
    },

    [TRAINER_CATHERINE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("TISHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Catherine2),
        .party = {.NoItemDefaultMoves = sParty_Catherine2},
    },

    [TRAINER_CATHERINE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Catherine3),
        .party = {.NoItemDefaultMoves = sParty_Catherine3},
    },

    [TRAINER_CATHERINE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("RAYNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Catherine4),
        .party = {.NoItemDefaultMoves = sParty_Catherine4},
    },

    [TRAINER_CATHERINE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("GILLIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Catherine5),
        .party = {.NoItemDefaultMoves = sParty_Catherine5},
    },

    [TRAINER_JULIO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("DESTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Julio),
        .party = {.NoItemDefaultMoves = sParty_Julio},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("TOBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern5),
        .party = {.NoItemDefaultMoves = sParty_GruntSeafloorCavern5},
    },

    [TRAINER_GRUNT_UNUSED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("RECLUTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntUnused),
        .party = {.NoItemDefaultMoves = sParty_GruntUnused},
    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("MERY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre4),
        .party = {.NoItemDefaultMoves = sParty_GruntMtPyre4},
    },

    [TRAINER_GRUNT_JAGGED_PASS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("MILOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntJaggedPass),
        .party = {.NoItemDefaultMoves = sParty_GruntJaggedPass},
    },

    [TRAINER_MARC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MILO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marc),
        .party = {.NoItemDefaultMoves = sParty_Marc},
    },

    [TRAINER_BRENDEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CHAZ"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brenden),
        .party = {.NoItemDefaultMoves = sParty_Brenden},
    },

    [TRAINER_LILITH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("HAROLD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lilith),
        .party = {.NoItemDefaultMoves = sParty_Lilith},
    },

    [TRAINER_CRISTIAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TYLOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristian),
        .party = {.NoItemDefaultMoves = sParty_Cristian},
    },

    [TRAINER_SYLVIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("MYMO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sylvia),
        .party = {.NoItemDefaultMoves = sParty_Sylvia},
    },

    [TRAINER_LEONARDO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("NICOLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leonardo),
        .party = {.NoItemDefaultMoves = sParty_Leonardo},
    },

    [TRAINER_ATHENA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("AVA & GEB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Athena),
        .party = {.NoItemDefaultMoves = sParty_Athena},
    },

    [TRAINER_HARRISON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Harrison),
        .party = {.NoItemDefaultMoves = sParty_Harrison},
    },

    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("SAMIR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtChimney2),
        .party = {.NoItemDefaultMoves = sParty_GruntMtChimney2},
    },

    [TRAINER_CLARENCE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DENISE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Clarence),
        .party = {.NoItemDefaultMoves = sParty_Clarence},
    },

    [TRAINER_TERRY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MIU & MIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Terry),
        .party = {.NoItemDefaultMoves = sParty_Terry},
    },

    [TRAINER_NATE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EARL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nate),
        .party = {.NoItemDefaultMoves = sParty_Nate},
    },

    [TRAINER_KATHLEEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("FOSTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kathleen),
        .party = {.NoItemDefaultMoves = sParty_Kathleen},
    },

    [TRAINER_CLIFFORD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("LARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Clifford),
        .party = {.NoItemDefaultMoves = sParty_Clifford},
    },

    [TRAINER_NICHOLAS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("DARYL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Nicholas),
        .party = {.NoItemDefaultMoves = sParty_Nicholas},
    },

    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("HECTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter3),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter3},
    },

    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("DARIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter4),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter4},
    },

    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("RODETTE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter5),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter5},
    },

    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("MIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter6),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter6},
    },

    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("EVE & JON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter7),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter7},
    },

    [TRAINER_MACEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MASON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Macey),
        .party = {.NoItemDefaultMoves = sParty_Macey},
    },

    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRustboroTreecko),
        .party = {.ItemDefaultMoves = sParty_BrendanRustboroTreecko},
    },

    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("JOCELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRustboroMudkip),
        .party = {.ItemDefaultMoves = sParty_BrendanRustboroMudkip},
    },

    [TRAINER_PAXTON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("EVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Paxton),
        .party = {.NoItemDefaultMoves = sParty_Paxton},
    },

    [TRAINER_ISABELLA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabella),
        .party = {.NoItemDefaultMoves = sParty_Isabella},
    },

    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("LOGAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst5),
        .party = {.NoItemDefaultMoves = sParty_GruntWeatherInst5},
    },

    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("JACKSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TabithaMtChimney),
        .party = {.NoItemDefaultMoves = sParty_TabithaMtChimney},
    },

    [TRAINER_JONATHAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BETH"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jonathan),
        .party = {.NoItemDefaultMoves = sParty_Jonathan},
    },

    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanRustboroTorchic),
        .party = {.NoItemDefaultMoves = sParty_BrendanRustboroTorchic},
    },

    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("LEROY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRustboroMudkip),
        .party = {.NoItemDefaultMoves = sParty_MayRustboroMudkip},
    },

    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MICHELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MaxieMagmaHideout),
        .party = {.NoItemDefaultMoves = sParty_MaxieMagmaHideout},
    },

    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("LEX & NYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MaxieMtChimney),
        .party = {.NoItemDefaultMoves = sParty_MaxieMtChimney},
    },

    [TRAINER_TIANA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tiana),
        .party = {.NoItemDefaultMoves = sParty_Tiana},
    },

    [TRAINER_HALEY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Haley1),
        .party = {.NoItemDefaultMoves = sParty_Haley1},
    },

    [TRAINER_JANICE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("EDNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Janice),
        .party = {.NoItemDefaultMoves = sParty_Janice},
    },

    [TRAINER_VIVI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CLIFFORD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vivi),
        .party = {.NoItemDefaultMoves = sParty_Vivi},
    },

    [TRAINER_HALEY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("SELPHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Haley2),
        .party = {.NoItemDefaultMoves = sParty_Haley2},
    },

    [TRAINER_HALEY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("LAWSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Haley3),
        .party = {.NoItemDefaultMoves = sParty_Haley3},
    },

    [TRAINER_HALEY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Haley4),
        .party = {.NoItemDefaultMoves = sParty_Haley4},
    },

    [TRAINER_HALEY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("BETHANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Haley5),
        .party = {.NoItemDefaultMoves = sParty_Haley5},
    },

    [TRAINER_SALLY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ALLISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sally),
        .party = {.NoItemDefaultMoves = sParty_Sally},
    },

    [TRAINER_ROBIN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("GARRET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robin),
        .party = {.NoItemDefaultMoves = sParty_Robin},
    },

    [TRAINER_ANDREA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("JONAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andrea),
        .party = {.NoItemDefaultMoves = sParty_Andrea},
    },

    [TRAINER_CRISSY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("VANCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Crissy),
        .party = {.NoItemDefaultMoves = sParty_Crissy},
    },

    [TRAINER_RICK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("NASH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rick),
        .party = {.NoItemDefaultMoves = sParty_Rick},
    },

    [TRAINER_LYLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("CORDELL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lyle),
        .party = {.NoItemDefaultMoves = sParty_Lyle},
    },

    [TRAINER_JOSE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jose),
        .party = {.NoItemDefaultMoves = sParty_Jose},
    },

    [TRAINER_DOUG] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JOANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Doug),
        .party = {.NoItemDefaultMoves = sParty_Doug},
    },

    [TRAINER_GREG] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("RILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Greg),
        .party = {.NoItemDefaultMoves = sParty_Greg},
    },

    [TRAINER_KENT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("MARCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kent),
        .party = {.NoItemDefaultMoves = sParty_Kent},
    },

    [TRAINER_JAMES_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("LENARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_James1),
        .party = {.NoItemDefaultMoves = sParty_James1},
    },

    [TRAINER_JAMES_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("KOGA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_James2),
        .party = {.NoItemDefaultMoves = sParty_James2},
    },

    [TRAINER_JAMES_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JADE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_James3),
        .party = {.NoItemDefaultMoves = sParty_James3},
    },

    [TRAINER_JAMES_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("ADAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_James4),
        .party = {.NoItemDefaultMoves = sParty_James4},
    },

    [TRAINER_JAMES_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("AUGUSTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_James5),
        .party = {.NoItemDefaultMoves = sParty_James5},
    },

    [TRAINER_BRICE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DAMIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brice),
        .party = {.NoItemDefaultMoves = sParty_Brice},
    },

    [TRAINER_TRENT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("FLOREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Trent1),
        .party = {.NoItemDefaultMoves = sParty_Trent1},
    },

    [TRAINER_LENNY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lenny),
        .party = {.NoItemDefaultMoves = sParty_Lenny},
    },

    [TRAINER_LUCAS_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ALFRED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lucas1),
        .party = {.NoItemDefaultMoves = sParty_Lucas1},
    },

    [TRAINER_ALAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("EUGENIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alan),
        .party = {.NoItemDefaultMoves = sParty_Alan},
    },

    [TRAINER_CLARK] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Clark),
        .party = {.NoItemDefaultMoves = sParty_Clark},
    },

    [TRAINER_ERIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("OCTAVIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Eric),
        .party = {.NoItemDefaultMoves = sParty_Eric},
    },

    [TRAINER_LUCAS_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SENECA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lucas2),
        .party = {.NoItemDefaultMoves = sParty_Lucas2},
    },

    [TRAINER_MIKE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ANSELMO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mike1),
        .party = {.ItemCustomMoves = sParty_Mike1},
    },

    [TRAINER_MIKE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DILLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mike2),
        .party = {.NoItemDefaultMoves = sParty_Mike2},
    },

    [TRAINER_TRENT_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("RIQUELME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Trent2),
        .party = {.NoItemDefaultMoves = sParty_Trent2},
    },

    [TRAINER_TRENT_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("AUGUSTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Trent3),
        .party = {.NoItemDefaultMoves = sParty_Trent3},
    },

    [TRAINER_TRENT_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Trent4),
        .party = {.NoItemDefaultMoves = sParty_Trent4},
    },

    [TRAINER_TRENT_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Trent5),
        .party = {.NoItemDefaultMoves = sParty_Trent5},
    },

    [TRAINER_DEZ_AND_LUKE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("SAMBER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_DezAndLuke),
        .party = {.NoItemDefaultMoves = sParty_DezAndLuke},
    },

    [TRAINER_LEA_AND_JED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("ERNESTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LeaAndJed),
        .party = {.NoItemDefaultMoves = sParty_LeaAndJed},
    },

    [TRAINER_KIRA_AND_DAN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KARIM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan1),
        .party = {.NoItemDefaultMoves = sParty_KiraAndDan1},
    },

    [TRAINER_KIRA_AND_DAN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("MINERVA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan2),
        .party = {.NoItemDefaultMoves = sParty_KiraAndDan2},
    },

    [TRAINER_KIRA_AND_DAN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("TYSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan3),
        .party = {.NoItemDefaultMoves = sParty_KiraAndDan3},
    },

    [TRAINER_KIRA_AND_DAN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan4),
        .party = {.NoItemDefaultMoves = sParty_KiraAndDan4},
    },

    [TRAINER_KIRA_AND_DAN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("SEBAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan5),
        .party = {.NoItemDefaultMoves = sParty_KiraAndDan5},
    },

    [TRAINER_JOHANNA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SANJAI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Johanna),
        .party = {.NoItemDefaultMoves = sParty_Johanna},
    },

    [TRAINER_GERALD] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("CLAUDIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gerald),
        .party = {.NoItemDefaultMoves = sParty_Gerald},
    },

    [TRAINER_VIVIAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CRISTIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vivian),
        .party = {.NoItemDefaultMoves = sParty_Vivian},
    },

    [TRAINER_DANIELLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("ESTEBAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Danielle),
        .party = {.NoItemDefaultMoves = sParty_Danielle},
    },

    [TRAINER_HIDEO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JULIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hideo),
        .party = {.NoItemDefaultMoves = sParty_Hideo},
    },

    [TRAINER_KEIGO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("ALEXANDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Keigo),
        .party = {.NoItemDefaultMoves = sParty_Keigo},
    },

    [TRAINER_RILEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("QUINTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Riley),
        .party = {.NoItemDefaultMoves = sParty_Riley},
    },

    [TRAINER_FLINT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("GUILLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Flint),
        .party = {.NoItemDefaultMoves = sParty_Flint},
    },

    [TRAINER_ASHLEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("JUANFRAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ashley),
        .party = {.NoItemDefaultMoves = sParty_Ashley},
    },

    [TRAINER_WALLY_MAUVILLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("TOMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_WallyMauville),
        .party = {.NoItemDefaultMoves = sParty_WallyMauville},
    },

    [TRAINER_WALLY_VR_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("POLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_WallyVR2),
        .party = {.NoItemDefaultMoves = sParty_WallyVR2},
    },

    [TRAINER_WALLY_VR_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("PLUBIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_WallyVR3),
        .party = {.NoItemDefaultMoves = sParty_WallyVR3},
    },

    [TRAINER_WALLY_VR_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("JAVI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_WallyVR4),
        .party = {.NoItemDefaultMoves = sParty_WallyVR4},
    },

    [TRAINER_WALLY_VR_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("MELISA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_WallyVR5),
        .party = {.NoItemDefaultMoves = sParty_WallyVR5},
    },

    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("HIRO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanLilycoveMudkip),
        .party = {.NoItemDefaultMoves = sParty_BrendanLilycoveMudkip},
    },

    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("DAMIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanLilycoveTreecko),
        .party = {.NoItemDefaultMoves = sParty_BrendanLilycoveTreecko},
    },

    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("JAIME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanLilycoveTorchic),
        .party = {.NoItemDefaultMoves = sParty_BrendanLilycoveTorchic},
    },

    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MADOX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayLilycoveMudkip),
        .party = {.NoItemDefaultMoves = sParty_MayLilycoveMudkip},
    },

    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("KIKO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayLilycoveTreecko),
        .party = {.NoItemDefaultMoves = sParty_MayLilycoveTreecko},
    },

    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("FREDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayLilycoveTorchic),
        .party = {.NoItemDefaultMoves = sParty_MayLilycoveTorchic},
    },

    [TRAINER_JONAH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ENZO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jonah),
        .party = {.NoItemDefaultMoves = sParty_Jonah},
    },

    [TRAINER_HENRY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CARLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Henry),
        .party = {.NoItemDefaultMoves = sParty_Henry},
    },

    [TRAINER_ROGER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("LEONARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roger),
        .party = {.NoItemDefaultMoves = sParty_Roger},
    },

    [TRAINER_ALEXA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alexa),
        .party = {.NoItemDefaultMoves = sParty_Alexa},
    },

    [TRAINER_RUBEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("YOLANDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ruben),
        .party = {.NoItemDefaultMoves = sParty_Ruben},
    },

    [TRAINER_KOJI_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("GABRIELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji1),
        .party = {.NoItemDefaultMoves = sParty_Koji1},
    },

    [TRAINER_WAYNE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("IDELFONSO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wayne),
        .party = {.NoItemDefaultMoves = sParty_Wayne},
    },

    [TRAINER_AIDAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("TAMARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Aidan),
        .party = {.NoItemDefaultMoves = sParty_Aidan},
    },

    [TRAINER_REED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CARMEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Reed),
        .party = {.NoItemDefaultMoves = sParty_Reed},
    },

    [TRAINER_TISHA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("EMMA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tisha),
        .party = {.NoItemDefaultMoves = sParty_Tisha},
    },

    [TRAINER_TORI_AND_TIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("RUBÉN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_ToriAndTia),
        .party = {.NoItemDefaultMoves = sParty_ToriAndTia},
    },

    [TRAINER_KIM_AND_IRIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("SERGIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KimAndIris),
        .party = {.NoItemDefaultMoves = sParty_KimAndIris},
    },

    [TRAINER_TYRA_AND_IVY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ADAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TyraAndIvy),
        .party = {.NoItemDefaultMoves = sParty_TyraAndIvy},
    },

    [TRAINER_MEL_AND_PAUL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("VALERIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MelAndPaul),
        .party = {.NoItemDefaultMoves = sParty_MelAndPaul},
    },

    [TRAINER_JOHN_AND_JAY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("IAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay1),
        .party = {.NoItemDefaultMoves = sParty_JohnAndJay1},
    },

    [TRAINER_JOHN_AND_JAY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("PAREJA JOV"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay2),
        .party = {.NoItemDefaultMoves = sParty_JohnAndJay2},
    },

    [TRAINER_JOHN_AND_JAY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("NOAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay3),
        .party = {.NoItemDefaultMoves = sParty_JohnAndJay3},
    },

    [TRAINER_JOHN_AND_JAY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("AGUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay4),
        .party = {.NoItemDefaultMoves = sParty_JohnAndJay4},
    },

    [TRAINER_JOHN_AND_JAY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("LARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay5),
        .party = {.NoItemDefaultMoves = sParty_JohnAndJay5},
    },

    [TRAINER_RELI_AND_IAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("OLIVER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_ReliAndIan),
        .party = {.NoItemDefaultMoves = sParty_ReliAndIan},
    },

    [TRAINER_LILA_AND_ROY_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("BARBARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy1),
        .party = {.NoItemDefaultMoves = sParty_LilaAndRoy1},
    },

    [TRAINER_LILA_AND_ROY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy2),
        .party = {.NoItemDefaultMoves = sParty_LilaAndRoy2},
    },

    [TRAINER_LILA_AND_ROY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("JUDITH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy3),
        .party = {.NoItemDefaultMoves = sParty_LilaAndRoy3},
    },

    [TRAINER_LILA_AND_ROY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LOUIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy4),
        .party = {.ItemCustomMoves = sParty_LilaAndRoy4},
    },

    [TRAINER_LILA_AND_ROY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("PETER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy5),
        .party = {.NoItemDefaultMoves = sParty_LilaAndRoy5},
    },

    [TRAINER_LISA_AND_RAY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LisaAndRay),
        .party = {.NoItemDefaultMoves = sParty_LisaAndRay},
    },

    [TRAINER_CHRIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("FREYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chris),
        .party = {.NoItemDefaultMoves = sParty_Chris},
    },

    [TRAINER_DAWSON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("VICIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dawson),
        .party = {.ItemDefaultMoves = sParty_Dawson},
    },

    [TRAINER_SARAH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("PAIRE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sarah),
        .party = {.ItemDefaultMoves = sParty_Sarah},
    },

    [TRAINER_DARIAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("MUSETTI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Darian),
        .party = {.NoItemDefaultMoves = sParty_Darian},
    },

    [TRAINER_HAILEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("CASPER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hailey),
        .party = {.NoItemDefaultMoves = sParty_Hailey},
    },

    [TRAINER_CHANDLER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("JOHN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chandler),
        .party = {.NoItemDefaultMoves = sParty_Chandler},
    },

    [TRAINER_KALEB] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("LUDWING"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kaleb),
        .party = {.ItemDefaultMoves = sParty_Kaleb},
    },

    [TRAINER_JOSEPH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("CALEDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Joseph),
        .party = {.NoItemDefaultMoves = sParty_Joseph},
    },

    [TRAINER_ALYSSA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("HADKINS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alyssa),
        .party = {.NoItemDefaultMoves = sParty_Alyssa},
    },

    [TRAINER_MARCOS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("BENOIT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marcos),
        .party = {.NoItemDefaultMoves = sParty_Marcos},
    },

    [TRAINER_RHETT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rhett),
        .party = {.NoItemDefaultMoves = sParty_Rhett},
    },

    [TRAINER_TYRON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("AURELIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tyron),
        .party = {.NoItemDefaultMoves = sParty_Tyron},
    },

    [TRAINER_CELINA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("RUBÉN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Celina),
        .party = {.NoItemDefaultMoves = sParty_Celina},
    },

    [TRAINER_BIANCA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("LARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bianca),
        .party = {.NoItemDefaultMoves = sParty_Bianca},
    },

    [TRAINER_HAYDEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("PAULA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hayden),
        .party = {.NoItemDefaultMoves = sParty_Hayden},
    },

    [TRAINER_SOPHIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("LORENZO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sophie),
        .party = {.NoItemDefaultMoves = sParty_Sophie},
    },

    [TRAINER_COBY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Coby),
        .party = {.NoItemDefaultMoves = sParty_Coby},
    },

    [TRAINER_LAWRENCE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lawrence),
        .party = {.NoItemDefaultMoves = sParty_Lawrence},
    },

    [TRAINER_WYATT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("IVÁN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wyatt),
        .party = {.NoItemDefaultMoves = sParty_Wyatt},
    },

    [TRAINER_ANGELINA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("JORGE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Angelina),
        .party = {.NoItemDefaultMoves = sParty_Angelina},
    },

    [TRAINER_KAI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CLARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kai),
        .party = {.NoItemDefaultMoves = sParty_Kai},
    },

    [TRAINER_CHARLOTTE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("AMANDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Charlotte),
        .party = {.NoItemDefaultMoves = sParty_Charlotte},
    },

    [TRAINER_DEANDRE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("SOFÍA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Deandre),
        .party = {.NoItemDefaultMoves = sParty_Deandre},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("MARTINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout1),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout1},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("SANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout2),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout2},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("ÁLVARO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout3),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout3},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout4),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout4},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("IBRAHIM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout5),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout5},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("TRISTÁN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout6),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout6},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("ROBER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout7),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout7},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRIGOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout8),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout8},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("CONNOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout9),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout9},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("DIEGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout10),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout10},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout11),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout11},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout12),
        .party = {.ItemCustomMoves = sParty_GruntMagmaHideout12},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("TOM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout13),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout13},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("KOEPFER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout14),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout14},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("MARCIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout15),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout15},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("ELOY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout16),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout16},
    },

    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("ROJO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TabithaMagmaHideout),
        .party = {.ItemCustomMoves = sParty_TabithaMagmaHideout},
    },

    [TRAINER_DARCY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ELM"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Darcy),
        .party = {.ItemCustomMoves = sParty_Darcy},
    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("ZINIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MaxieMossdeep),
        .party = {.NoItemDefaultMoves = sParty_MaxieMossdeep},
    },

    [TRAINER_PETE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MATÍAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pete),
        .party = {.ItemCustomMoves = sParty_Pete},
    },

    [TRAINER_ISABELLE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("THOMAS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabelle),
        .party = {.ItemCustomMoves = sParty_Isabelle},
    },

    [TRAINER_ANDRES_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("VICTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andres1),
        .party = {.ItemCustomMoves = sParty_Andres1},
    },

    [TRAINER_JOSUE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("FRANCIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Josue),
        .party = {.ItemCustomMoves = sParty_Josue},
    },

    [TRAINER_CAMRON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Camron),
        .party = {.ItemCustomMoves = sParty_Camron},
    },

    [TRAINER_CORY_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ATLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cory1),
        .party = {.ItemCustomMoves = sParty_Cory1},
    },

    [TRAINER_CAROLINA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ROJO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Carolina),
        .party = {.ItemCustomMoves = sParty_Carolina},
    },

    [TRAINER_ELIJAH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("LANCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elijah),
        .party = {.ItemCustomMoves = sParty_Elijah},
    },

    [TRAINER_CELIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("MACUTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Celia),
        .party = {.ItemCustomMoves = sParty_Celia},
    },

    [TRAINER_BRYAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("LAUREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bryan),
        .party = {.NoItemDefaultMoves = sParty_Bryan},
    },

    [TRAINER_BRANDEN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LENARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Branden),
        .party = {.NoItemDefaultMoves = sParty_Branden},
    },

    [TRAINER_BRYANT] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("KOUME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bryant),
        .party = {.ItemCustomMoves = sParty_Bryant},
    },

    [TRAINER_SHAYLA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("SAKURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shayla),
        .party = {.ItemCustomMoves = sParty_Shayla},
    },

    [TRAINER_KYRA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("TAMAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Kyra),
        .party = {.ItemCustomMoves = sParty_Kyra},
    },

    [TRAINER_JAIDEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("SUMONO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jaiden),
        .party = {.ItemCustomMoves = sParty_Jaiden},
    },

    [TRAINER_ALIX] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("SATSUKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alix),
        .party = {.ItemCustomMoves = sParty_Alix},
    },

    [TRAINER_HELENE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("SAJAD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Helene),
        .party = {.NoItemDefaultMoves = sParty_Helene},
    },

    [TRAINER_MARLENE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("KEPLER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marlene),
        .party = {.ItemCustomMoves = sParty_Marlene},
    },

    [TRAINER_DEVAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("HERÁCLITO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Devan),
        .party = {.NoItemDefaultMoves = sParty_Devan},
    },

    [TRAINER_JOHNSON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("AVERROES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Johnson),
        .party = {.NoItemDefaultMoves = sParty_Johnson},
    },

    [TRAINER_MELINA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("HUME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Melina),
        .party = {.NoItemDefaultMoves = sParty_Melina},
    },

    [TRAINER_BRANDI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("AUGUSTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brandi),
        .party = {.NoItemDefaultMoves = sParty_Brandi},
    },

    [TRAINER_AISHA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("BAUMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Aisha),
        .party = {.NoItemDefaultMoves = sParty_Aisha},
    },

    [TRAINER_MAKAYLA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SLAJOV"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Makayla),
        .party = {.NoItemDefaultMoves = sParty_Makayla},
    },

    [TRAINER_FABIAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("EPICURO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fabian),
        .party = {.NoItemDefaultMoves = sParty_Fabian},
    },

    [TRAINER_DAYTON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("DEMÓCRITO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dayton),
        .party = {.NoItemDefaultMoves = sParty_Dayton},
    },

    [TRAINER_RACHEL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("GORGIAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rachel),
        .party = {.NoItemDefaultMoves = sParty_Rachel},
    },

    [TRAINER_LEONEL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("TALOS"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leonel),
        .party = {.NoItemDefaultMoves = sParty_Leonel},
    },

    [TRAINER_CALLIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("NIETO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Callie),
        .party = {.NoItemDefaultMoves = sParty_Callie},
    },

    [TRAINER_CALE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cale),
        .party = {.NoItemDefaultMoves = sParty_Cale},
    },

    [TRAINER_MYLES] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("TOM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Myles),
        .party = {.NoItemDefaultMoves = sParty_Myles},
    },

    [TRAINER_PAT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("ANDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pat),
        .party = {.NoItemDefaultMoves = sParty_Pat},
    },

    [TRAINER_CRISTIN_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("OTTO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin1),
        .party = {.NoItemDefaultMoves = sParty_Cristin1},
    },

    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("SHUNICHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRustboroTreecko),
        .party = {.ItemCustomMoves = sParty_MayRustboroTreecko},
    },

    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("KOICHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayRustboroTorchic),
        .party = {.NoItemDefaultMoves = sParty_MayRustboroTorchic},
    },

    [TRAINER_ROXANNE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roxanne2),
        .party = {.NoItemDefaultMoves = sParty_Roxanne2},
    },

    [TRAINER_ROXANNE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ANDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roxanne3),
        .party = {.NoItemDefaultMoves = sParty_Roxanne3},
    },

    [TRAINER_ROXANNE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("DENIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roxanne4),
        .party = {.NoItemDefaultMoves = sParty_Roxanne4},
    },

    [TRAINER_ROXANNE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("STEFI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Roxanne5),
        .party = {.NoItemDefaultMoves = sParty_Roxanne5},
    },

    [TRAINER_BRAWLY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("ABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brawly2),
        .party = {.NoItemDefaultMoves = sParty_Brawly2},
    },

    [TRAINER_BRAWLY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("COREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brawly3),
        .party = {.NoItemDefaultMoves = sParty_Brawly3},
    },

    [TRAINER_BRAWLY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("AGATHA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brawly4),
        .party = {.ItemCustomMoves = sParty_Brawly4},
    },

    [TRAINER_BRAWLY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("JONES"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brawly5),
        .party = {.ItemDefaultMoves = sParty_Brawly5},
    },

    [TRAINER_WATTSON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("ZEUS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wattson2),
        .party = {.ItemCustomMoves = sParty_Wattson2},
    },

    [TRAINER_WATTSON_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("KENJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wattson3),
        .party = {.NoItemDefaultMoves = sParty_Wattson3},
    },

    [TRAINER_WATTSON_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("IWAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wattson4),
        .party = {.NoItemDefaultMoves = sParty_Wattson4},
    },

    [TRAINER_WATTSON_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("SUSUMU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wattson5),
        .party = {.NoItemDefaultMoves = sParty_Wattson5},
    },

    [TRAINER_FLANNERY_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("JONES"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Flannery2),
        .party = {.ItemCustomMoves = sParty_Flannery2},
    },

    [TRAINER_FLANNERY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("REY UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Flannery3),
        .party = {.ItemCustomMoves = sParty_Flannery3},
    },

    [TRAINER_FLANNERY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("REY UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Flannery4),
        .party = {.ItemCustomMoves = sParty_Flannery4},
    },

    [TRAINER_FLANNERY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("REY UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Flannery5),
        .party = {.ItemCustomMoves = sParty_Flannery5},
    },

    [TRAINER_NORMAN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _(""),
        .items = {ITEM_NONE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Norman2),
        .party = {.ItemCustomMoves = sParty_Norman2},
    },

    [TRAINER_NORMAN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Norman3),
        .party = {.ItemCustomMoves = sParty_Norman3},
    },

    [TRAINER_NORMAN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Norman4),
        .party = {.ItemCustomMoves = sParty_Norman4},
    },

    [TRAINER_NORMAN_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Norman5),
        .party = {.ItemCustomMoves = sParty_Norman5},
    },

    [TRAINER_WINONA_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winona2),
        .party = {.ItemCustomMoves = sParty_Winona2},
    },

    [TRAINER_WINONA_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winona3),
        .party = {.ItemCustomMoves = sParty_Winona3},
    },

    [TRAINER_WINONA_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winona4),
        .party = {.ItemCustomMoves = sParty_Winona4},
    },

    [TRAINER_WINONA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("RECLUTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winona5),
        .party = {.NoItemDefaultMoves = sParty_Winona5},
    },

    [TRAINER_TATE_AND_LIZA_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza2),
        .party = {.ItemCustomMoves = sParty_TateAndLiza2},
    },

    [TRAINER_TATE_AND_LIZA_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza3),
        .party = {.ItemCustomMoves = sParty_TateAndLiza3},
    },

    [TRAINER_TATE_AND_LIZA_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("LIZA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza4),
        .party = {.ItemCustomMoves = sParty_TateAndLiza4},
    },

    [TRAINER_TATE_AND_LIZA_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("ABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza5),
        .party = {.ItemCustomMoves = sParty_TateAndLiza5},
    },

    [TRAINER_JUAN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("VICTOR"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Juan2),
        .party = {.ItemCustomMoves = sParty_Juan2},
    },

    [TRAINER_JUAN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("FRANCIS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Juan3),
        .party = {.ItemCustomMoves = sParty_Juan3},
    },

    [TRAINER_JUAN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("MARCOS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Juan4),
        .party = {.ItemCustomMoves = sParty_Juan4},
    },

    [TRAINER_JUAN_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("SHAKURA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Juan5),
        .party = {.ItemCustomMoves = sParty_Juan5},
    },

    [TRAINER_ANGELO] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("HUXLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Angelo),
        .party = {.NoItemCustomMoves = sParty_Angelo},
    },

    [TRAINER_DARIUS] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Darius),
        .party = {.ItemCustomMoves = sParty_Darius},
    },

    [TRAINER_STEVEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("ARMANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Steven),
        .party = {.ItemCustomMoves = sParty_Steven},
    },

    [TRAINER_ANABEL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Anabel),
        .party = {.ItemCustomMoves = sParty_Anabel},
    },

    [TRAINER_TUCKER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("HORACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Tucker),
        .party = {.ItemCustomMoves = sParty_Tucker},
    },

    [TRAINER_SPENSER] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("ELM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Spenser),
        .party = {.ItemCustomMoves = sParty_Spenser},
    },

    [TRAINER_GRETA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("MARTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Greta),
        .party = {.NoItemDefaultMoves = sParty_Greta},
    },

    [TRAINER_NOLAND] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("JONE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Noland),
        .party = {.NoItemDefaultMoves = sParty_Noland},
    },

    [TRAINER_LUCY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("LUCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lucy),
        .party = {.NoItemDefaultMoves = sParty_Lucy},
    },

    [TRAINER_BRANDON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brandon),
        .party = {.NoItemDefaultMoves = sParty_Brandon},
    },

    [TRAINER_ANDRES_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andres2),
        .party = {.NoItemDefaultMoves = sParty_Andres2},
    },

    [TRAINER_ANDRES_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andres3),
        .party = {.NoItemDefaultMoves = sParty_Andres3},
    },

    [TRAINER_ANDRES_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andres4),
        .party = {.NoItemDefaultMoves = sParty_Andres4},
    },

    [TRAINER_ANDRES_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andres5),
        .party = {.NoItemDefaultMoves = sParty_Andres5},
    },

    [TRAINER_CORY_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cory2),
        .party = {.NoItemDefaultMoves = sParty_Cory2},
    },

    [TRAINER_CORY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cory3),
        .party = {.NoItemDefaultMoves = sParty_Cory3},
    },

    [TRAINER_CORY_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cory4),
        .party = {.NoItemDefaultMoves = sParty_Cory4},
    },

    [TRAINER_CORY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cory5),
        .party = {.NoItemDefaultMoves = sParty_Cory5},
    },

    [TRAINER_PABLO_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pablo2),
        .party = {.NoItemDefaultMoves = sParty_Pablo2},
    },

    [TRAINER_PABLO_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pablo3),
        .party = {.NoItemDefaultMoves = sParty_Pablo3},
    },

    [TRAINER_PABLO_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pablo4),
        .party = {.NoItemDefaultMoves = sParty_Pablo4},
    },

    [TRAINER_PABLO_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pablo5),
        .party = {.NoItemDefaultMoves = sParty_Pablo5},
    },

    [TRAINER_KOJI_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji2),
        .party = {.NoItemDefaultMoves = sParty_Koji2},
    },

    [TRAINER_KOJI_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji3),
        .party = {.NoItemDefaultMoves = sParty_Koji3},
    },

    [TRAINER_KOJI_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji4),
        .party = {.NoItemDefaultMoves = sParty_Koji4},
    },

    [TRAINER_KOJI_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji5),
        .party = {.NoItemDefaultMoves = sParty_Koji5},
    },

    [TRAINER_CRISTIN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin2),
        .party = {.NoItemDefaultMoves = sParty_Cristin2},
    },

    [TRAINER_CRISTIN_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin3),
        .party = {.NoItemDefaultMoves = sParty_Cristin3},
    },

    [TRAINER_CRISTIN_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin4),
        .party = {.NoItemDefaultMoves = sParty_Cristin4},
    },

    [TRAINER_CRISTIN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin5),
        .party = {.NoItemDefaultMoves = sParty_Cristin5},
    },

    [TRAINER_FERNANDO_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando2),
        .party = {.NoItemDefaultMoves = sParty_Fernando2},
    },

    [TRAINER_FERNANDO_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando3),
        .party = {.NoItemDefaultMoves = sParty_Fernando3},
    },

    [TRAINER_FERNANDO_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando4),
        .party = {.NoItemDefaultMoves = sParty_Fernando4},
    },

    [TRAINER_FERNANDO_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando5),
        .party = {.NoItemDefaultMoves = sParty_Fernando5},
    },

    [TRAINER_SAWYER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer2),
        .party = {.NoItemDefaultMoves = sParty_Sawyer2},
    },

    [TRAINER_SAWYER_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer3),
        .party = {.NoItemDefaultMoves = sParty_Sawyer3},
    },

    [TRAINER_SAWYER_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer4),
        .party = {.NoItemDefaultMoves = sParty_Sawyer4},
    },

    [TRAINER_SAWYER_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer5),
        .party = {.NoItemDefaultMoves = sParty_Sawyer5},
    },

    [TRAINER_GABRIELLE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle2),
        .party = {.NoItemDefaultMoves = sParty_Gabrielle2},
    },

    [TRAINER_GABRIELLE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle3),
        .party = {.NoItemDefaultMoves = sParty_Gabrielle3},
    },

    [TRAINER_GABRIELLE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle4),
        .party = {.NoItemDefaultMoves = sParty_Gabrielle4},
    },

    [TRAINER_GABRIELLE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle5),
        .party = {.NoItemDefaultMoves = sParty_Gabrielle5},
    },

    [TRAINER_THALIA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia2),
        .party = {.NoItemDefaultMoves = sParty_Thalia2},
    },

    [TRAINER_THALIA_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia3),
        .party = {.NoItemDefaultMoves = sParty_Thalia3},
    },

    [TRAINER_THALIA_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia4),
        .party = {.NoItemDefaultMoves = sParty_Thalia4},
    },

    [TRAINER_THALIA_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia5),
        .party = {.NoItemDefaultMoves = sParty_Thalia5},
    },

    [TRAINER_MARIELA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARIELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mariela),
        .party = {.NoItemDefaultMoves = sParty_Mariela},
    },

    [TRAINER_ALVARO] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("ALVARO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alvaro),
        .party = {.NoItemDefaultMoves = sParty_Alvaro},
    },

    [TRAINER_EVERETT] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EVERETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Everett),
        .party = {.NoItemDefaultMoves = sParty_Everett},
    },

    [TRAINER_RED] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("RED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Red),
        .party = {.NoItemDefaultMoves = sParty_Red},
    },

    [TRAINER_LEAF] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = _("LEAF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leaf),
        .party = {.NoItemDefaultMoves = sParty_Leaf},
    },

    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanLinkPlaceholder),
        .party = {.NoItemDefaultMoves = sParty_BrendanLinkPlaceholder},
    },

    [TRAINER_MAY_PLACEHOLDER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayLinkPlaceholder),
        .party = {.NoItemDefaultMoves = sParty_MayLinkPlaceholder},
    },

};
