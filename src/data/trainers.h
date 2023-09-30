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
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
        .trainerName = _("AUGUSTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer1),
        .party = {.NoItemCustomMoves = sParty_Sawyer1},
    },

    [TRAINER_ANDRA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_ANDRA,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra1),
        .party = {.NoItemDefaultMoves = sParty_Andra1},
    },

    [TRAINER_CONSUL] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("SELPHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Consul),
        .party = {.NoItemCustomMoves = sParty_Consul},
    },

    [TRAINER_ANDRA_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_ANDRA,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra2),
        .party = {.ItemCustomMoves = sParty_Andra2},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("BORIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout4),
        .party = {.ItemCustomMoves = sParty_GruntAquaHideout4},
    },

    [TRAINER_MEGAPUNO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
        .trainerName = _("CHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Megapuno),
        .party = {.ItemCustomMoves = sParty_Megapuno},
    },

    [TRAINER_MEGAPATADA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
        .trainerName = _("LEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Megapatada),
        .party = {.ItemCustomMoves = sParty_Megapatada},
    },

    [TRAINER_ROJO_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVALES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("ROJO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rojo1),
        .party = {.ItemCustomMoves = sParty_Rojo1},
    },

    [TRAINER_ALTORANGO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Altorango),
        .party = {.ItemCustomMoves = sParty_Altorango},
    },

    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("SEBAS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marcel),
        .party = {.NoItemCustomMoves = sParty_Marcel},
    },

    [TRAINER_ALBERTO] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("CARLOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alberto),
        .party = {.NoItemCustomMoves = sParty_Alberto},
    },

    [TRAINER_BILL_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BILL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BILL,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bill1),
        .party = {.NoItemCustomMoves = sParty_Bill1},
    },

    [TRAINER_ANDRA_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_ANDRA,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra3),
        .party = {.ItemCustomMoves = sParty_Andra3},
    },

    [TRAINER_DOMADOR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("MACUTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Domador),
        .party = {.ItemCustomMoves = sParty_Domador},
    },

    [TRAINER_GURU] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("GURU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Guru),
        .party = {.ItemCustomMoves = sParty_Guru},
    },

    [TRAINER_VERO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
        .trainerName = _("VERO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vero),
        .party = {.ItemCustomMoves = sParty_Vero},
    },

    [TRAINER_CMIGUEL_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MIGUEL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cmiguel1),
        .party = {.ItemCustomMoves = sParty_Cmiguel1},
    },

    [TRAINER_FUJI_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_FUJI,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_MR_FUJI,
        .trainerName = _("FUJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fuji1),
        .party = {.ItemCustomMoves = sParty_Fuji1},
    },

    [TRAINER_GHOST] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_GHOST,
        .trainerName = _("GHOST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ghost),
        .party = {.NoItemCustomMoves = sParty_Ghost},
    },

    [TRAINER_GRUNT_MUSEUM_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("MAKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMuseum2),
        .party = {.NoItemCustomMoves = sParty_GruntMuseum2},
    },

    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("JASON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre1),
        .party = {.NoItemCustomMoves = sParty_GruntMtPyre1},
    },

    [TRAINER_GRUNT_MT_PYRE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout5),
        .party = {.NoItemDefaultMoves = sParty_GruntAquaHideout5},
    },

    [TRAINER_ANDRA_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_ANDRA,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra4),
        .party = {.ItemCustomMoves = sParty_Andra4},
    },

    [TRAINER_CMIGUEL_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MIGUEL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cmiguel2),
        .party = {.ItemCustomMoves = sParty_Cmiguel2},
    },

    [TRAINER_VERO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PAREJAGUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        .trainerName = _("VERO&JUAN"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vero2),
        .party = {.ItemCustomMoves = sParty_Vero2},
    },

    [TRAINER_ZANDER] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("JUAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zander),
        .party = {.NoItemDefaultMoves = sParty_Zander},
    },

    [TRAINER_DALIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVALES,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_DALIA,
        .trainerName = _("DALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dalia),
        .party = {.ItemCustomMoves = sParty_Dalia},
    },

    [TRAINER_LUGIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ESENCIA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LUGIA,
        .trainerName = _("LUGIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lugia),
        .party = {.ItemCustomMoves = sParty_Lugia},
    },

    [TRAINER_SURGE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LEADER_LT_SURGE,
        .trainerName = _("LT.SURGE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Surge1),
        .party = {.ItemCustomMoves = sParty_Surge1},
    },

    [TRAINER_LEAH] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("HECTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leah),
        .party = {.NoItemDefaultMoves = sParty_Leah},
    },

    [TRAINER_DAISY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("JAIME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose1),
        .party = {.NoItemDefaultMoves = sParty_Rose1},
    },

    [TRAINER_ATLAS_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ATLAS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("ATLAS"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Atlas2),
        .party = {.ItemCustomMoves = sParty_Atlas2},
    },

    [TRAINER_VIOLET] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose4),
        .party = {.NoItemDefaultMoves = sParty_Rose4},
    },

    [TRAINER_ROSE_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("FABIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rose5),
        .party = {.ItemCustomMoves = sParty_Rose5},
    },

    [TRAINER_BRUNO_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ALTOMANDO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .trainerName = _("BRUNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bruno1),
        .party = {.ItemCustomMoves = sParty_Bruno1},
    },

    [TRAINER_ZAPDOS] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AVES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ZAPDOS,
        .trainerName = _("ZAPDOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zapdos),
        .party = {.ItemCustomMoves = sParty_Zapdos},
    },

    [TRAINER_ARTICUNO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AVES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ARTICUNO,
        .trainerName = _("ARTICUNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Articuno),
        .party = {.ItemCustomMoves = sParty_Articuno},
    },

    [TRAINER_ANDRA_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ANDRA_ALTO_RANGO,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra5),
        .party = {.ItemCustomMoves = sParty_Andra5},
    },

    [TRAINER_BILL_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BILL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BILL,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bill2),
        .party = {.ItemCustomMoves = sParty_Bill2},
    },

    [TRAINER_SILPH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TRABAJADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Silph),
        .party = {.ItemCustomMoves = sParty_Silph},
    },

    [TRAINER_OAK_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_OAK,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PROFESSOR_OAK,
        .trainerName = _("OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Oak1),
        .party = {.ItemCustomMoves = sParty_Oak1},
    },

    [TRAINER_BLAINE_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .trainerName = _("BLAINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Blaine2),
        .party = {.ItemCustomMoves = sParty_Blaine2},
    },

    [TRAINER_MIRTO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MIRTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_MIRTO,
        .trainerName = _("MIRTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mirto),
        .party = {.ItemCustomMoves = sParty_Mirto},
    },

    [TRAINER_VUELO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ORNITOLOGA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("LESLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vuelo),
        .party = {.ItemCustomMoves = sParty_Vuelo},
    },

    [TRAINER_TERREMOTO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("DANIEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Terremoto),
        .party = {.ItemCustomMoves = sParty_Terremoto},
    },

    [TRAINER_LUPA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("AMALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lupa),
        .party = {.ItemCustomMoves = sParty_Lupa},
    },

    [TRAINER_CASCO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKECOLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("ESAU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Casco),
        .party = {.ItemCustomMoves = sParty_Casco},
    },

    [TRAINER_PANUELO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
        .trainerName = _("ABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Panuelo),
        .party = {.ItemCustomMoves = sParty_Panuelo},
    },

    [TRAINER_CONTADOR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Contador),
        .party = {.ItemCustomMoves = sParty_Contador},
    },

    [TRAINER_ANDRA_7] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_ANDRA_ADMIN,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra7),
        .party = {.ItemCustomMoves = sParty_Andra7},
    },

    [TRAINER_LOLA_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Charlie),
        .party = {.ItemCustomMoves = sParty_Charlie},
    },

    [TRAINER_CMIGUEL_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MIGUEL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cmiguel3),
        .party = {.ItemCustomMoves = sParty_Cmiguel3},
    },

    [TRAINER_RICKY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("BRISEIDA"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Randall),
        .party = {.ItemCustomMoves = sParty_Randall},
    },

    [TRAINER_AQUILES] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("AQUILES"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Aquiles),
        .party = {.ItemCustomMoves = sParty_Aquiles},
    },

    [TRAINER_MAGNO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAGNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Magno),
        .party = {.ItemCustomMoves = sParty_Magno},
    },

    [TRAINER_PEGASO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO,
        .trainerName = _("PEGASO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pegaso),
        .party = {.ItemCustomMoves = sParty_Pegaso},
    },

    [TRAINER_CESAR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_CESAR,
        .trainerName = _("CESAR"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cesar),
        .party = {.ItemCustomMoves = sParty_Cesar},
    },

    [TRAINER_SALAZAR] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_MAESTRO_ANCIANO,
        .trainerName = _("M.ANCIANO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Salazar),
        .party = {.ItemCustomMoves = sParty_Salazar},
    },

    [TRAINER_ANIBAL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_ANIBAL,
        .trainerName = _("ANIBAL"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Anibal),
        .party = {.ItemCustomMoves = sParty_Anibal},
    },

    [TRAINER_JADEN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_JAREN,
        .trainerName = _("JADEN"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jaden),
        .party = {.ItemCustomMoves = sParty_Jaden},
    },

    [TRAINER_FREDO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_FREDO,
        .trainerName = _("FREDO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fredo),
        .party = {.ItemCustomMoves = sParty_Fredo},
    },

    [TRAINER_CROM] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_CROM,
        .trainerName = _("CROM"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Crom),
        .party = {.ItemCustomMoves = sParty_Crom},
    },

    [TRAINER_VALERIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_VALERIA,
        .trainerName = _("VALERIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Valeria),
        .party = {.ItemCustomMoves = sParty_Valeria},
    },

    [TRAINER_ZEUS_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ZEUS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ZEUS,
        .trainerName = _("ZEUS"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zeus1),
        .party = {.ItemCustomMoves = sParty_Zeus1},
    },

    [TRAINER_ZEUS_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ZEUS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ZEUS,
        .trainerName = _("ZEUS"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zeus2),
        .party = {.ItemCustomMoves = sParty_Zeus2},
    },

    [TRAINER_ZEUS_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ZEUS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ZEUS,
        .trainerName = _("ZEUS"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zeus3),
        .party = {.ItemCustomMoves = sParty_Zeus3},
    },

    [TRAINER_MAGMAADMIN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TATIANO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Magmaadmin),
        .party = {.ItemCustomMoves = sParty_Magmaadmin},
    },

    [TRAINER_AQUAADMIN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("TOLO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Aquaadmin),
        .party = {.ItemCustomMoves = sParty_Aquaadmin},
    },

    [TRAINER_GIOVANNI_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GIOVANNI,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_GIOVANNI,
        .trainerName = _("GIOVANNI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Giovanni1),
        .party = {.ItemCustomMoves = sParty_Giovanni1},
    },

    [TRAINER_CULTISTA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXCULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("MAKI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cultista),
        .party = {.ItemCustomMoves = sParty_Cultista},
    },

    [TRAINER_MARY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("JOSH"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wendy),
        .party = {.NoItemDefaultMoves = sParty_Wendy},
    },

    [TRAINER_KEIRA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("TIMMY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Keira),
        .party = {.NoItemDefaultMoves = sParty_Keira},
    },

    [TRAINER_BROOKE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("DAN"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jennifer),
        .party = {.NoItemDefaultMoves = sParty_Jennifer},
    },

    [TRAINER_HOPE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("CHAD"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hope),
        .party = {.NoItemDefaultMoves = sParty_Hope},
    },

    [TRAINER_SHANNON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("TYLER"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shannon),
        .party = {.NoItemDefaultMoves = sParty_Shannon},
    },

    [TRAINER_MICHELLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("EDDIE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Michelle),
        .party = {.NoItemDefaultMoves = sParty_Michelle},
    },

    [TRAINER_CAROLINE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("DILLON"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Caroline),
        .party = {.NoItemDefaultMoves = sParty_Caroline},
    },

    [TRAINER_JULIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("YASU"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Julie),
        .party = {.NoItemDefaultMoves = sParty_Julie},
    },

    [TRAINER_BROOKE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
        .trainerName = _("RICK"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke4),
        .party = {.NoItemDefaultMoves = sParty_Brooke4},
    },

    [TRAINER_BROOKE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brooke5),
        .party = {.NoItemDefaultMoves = sParty_Brooke5},
    },

    [TRAINER_PATRICIA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
        .trainerName = _("BRENT"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Daphne),
        .party = {.ItemDefaultMoves = sParty_Daphne},
    },

    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("JANICE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy2),
        .party = {.ItemDefaultMoves = sParty_Cindy2},
    },

    [TRAINER_BRIANNA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("SALLY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brianna),
        .party = {.ItemDefaultMoves = sParty_Brianna},
    },

    [TRAINER_NAOMI] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("ROBIN"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Naomi),
        .party = {.ItemDefaultMoves = sParty_Naomi},
    },

    [TRAINER_CINDY_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("CRISSY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy3),
        .party = {.ItemDefaultMoves = sParty_Cindy3},
    },

    [TRAINER_CINDY_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("MIRIAM"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy4),
        .party = {.ItemDefaultMoves = sParty_Cindy4},
    },

    [TRAINER_CINDY_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("IRIS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy5),
        .party = {.ItemDefaultMoves = sParty_Cindy5},
    },

    [TRAINER_CINDY_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
        .trainerName = _("RELI"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cindy6),
        .party = {.ItemDefaultMoves = sParty_Cindy6},
    },

    [TRAINER_MELISSA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("TREVOR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston1),
        .party = {.ItemDefaultMoves = sParty_Winston1},
    },

    [TRAINER_MOLLIE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("DUNCAN"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Garret),
        .party = {.ItemDefaultMoves = sParty_Garret},
    },

    [TRAINER_WINSTON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("HUEY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston2),
        .party = {.ItemDefaultMoves = sParty_Winston2},
    },

    [TRAINER_WINSTON_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("DYLAN"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston3),
        .party = {.ItemDefaultMoves = sParty_Winston3},
    },

    [TRAINER_WINSTON_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("PHILLIP"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston4),
        .party = {.ItemDefaultMoves = sParty_Winston4},
    },

    [TRAINER_WINSTON_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("DWAYNE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Winston5),
        .party = {.ItemDefaultMoves = sParty_Winston5},
    },

    [TRAINER_STEVE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_INGENIERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
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
        .trainerClass = TRAINER_CLASS_INGENIERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
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
        .trainerClass = TRAINER_CLASS_INGENIERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_ROCKERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ROCKER,
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
        .trainerClass = TRAINER_CLASS_ROCKERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = _("LUCA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_KateAndJoy),
        .party = {.NoItemDefaultMoves = sParty_KateAndJoy},
    },

    [TRAINER_ANNA_AND_MEG_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg1),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg1},
    },

    [TRAINER_ANNA_AND_MEG_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("NELSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg2),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg2},
    },

    [TRAINER_ANNA_AND_MEG_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("KIRK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg3),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg3},
    },

    [TRAINER_ANNA_AND_MEG_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("SHAWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg4),
        .party = {.NoItemDefaultMoves = sParty_AnnaAndMeg4},
    },

    [TRAINER_ANNA_AND_MEG_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
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
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
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
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
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
        .trainerClass = TRAINER_CLASS_JUGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
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
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
        .trainerName = _("DAISUKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jaylen),
        .party = {.ItemDefaultMoves = sParty_Jaylen},
    },

    [TRAINER_AZUL_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVALES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Azul2),
        .party = {.ItemCustomMoves = sParty_Azul2},
    },

    [TRAINER_CALVIN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKECOLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("BELIAL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Calvin2),
        .party = {.ItemCustomMoves = sParty_Calvin2},
    },

    [TRAINER_CINTAELEGIDA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("ANDERSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cintaelegida),
        .party = {.ItemCustomMoves = sParty_Cintaelegida},
    },

    [TRAINER_ROCAAFILADA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
        .trainerName = _("VLADI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rocaafilada),
        .party = {.ItemCustomMoves = sParty_Rocaafilada},
    },

    [TRAINER_GAFASELEGIDAS] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("COPIONA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gafaselegidas),
        .party = {.ItemCustomMoves = sParty_Gafaselegidas},
    },

    [TRAINER_LLAMASFERA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEABU,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("EUSINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Llamasfera),
        .party = {.ItemCustomMoves = sParty_Llamasfera},
    },

    [TRAINER_CINTAEXPERTO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
        .trainerName = _("DAMIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cintaexperto),
        .party = {.ItemCustomMoves = sParty_Cintaexperto},
    },

    [TRAINER_CHALECOASALTO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("PACO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chalecoasalto),
        .party = {.ItemCustomMoves = sParty_Chalecoasalto},
    },

    [TRAINER_WALLACE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_JOVENJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Abigail5),
        .party = {.NoItemDefaultMoves = sParty_Abigail5},
    },

    [TRAINER_PROTON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PROTON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = _("PROTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Proton),
        .party = {.ItemCustomMoves = sParty_Proton},
    },

    [TRAINER_PETREL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ADMINISTRADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("PETREL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Petrel),
        .party = {.ItemCustomMoves = sParty_Petrel},
    },

    [TRAINER_ANDRA_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ANDRA_EJECUTIVA,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra6),
        .party = {.ItemCustomMoves = sParty_Andra6},
    },

    [TRAINER_AZUL_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVALES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Azul3),
        .party = {.ItemCustomMoves = sParty_Azul3},
    },

    [TRAINER_DYLAN_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
        .trainerName = _("STEFFI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Robert3),
        .party = {.NoItemDefaultMoves = sParty_Robert3},
    },

    [TRAINER_LORELEI] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ALTOMANDO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LORELEI,
        .trainerName = _("LORELEI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lorelei),
        .party = {.ItemCustomMoves = sParty_Lorelei},
    },

    [TRAINER_BRUNO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ALTOMANDO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .trainerName = _("BRUNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bruno2),
        .party = {.ItemCustomMoves = sParty_Bruno2},
    },

    [TRAINER_AGATHA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ALTOMANDO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_AGATHA,
        .trainerName = _("AGATHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Agatha),
        .party = {.ItemCustomMoves = sParty_Agatha},
    },

    [TRAINER_LANCE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ALTOMANDO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LANCE,
        .trainerName = _("LANCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lance1),
        .party = {.ItemCustomMoves = sParty_Lance1},
    },

    [TRAINER_BROCK] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        .trainerName = _("BROCK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brock),
        .party = {.ItemCustomMoves = sParty_Brock},
    },

    [TRAINER_MISTY] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .trainerName = _("MISTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Misty),
        .party = {.ItemCustomMoves = sParty_Misty},
    },

    [TRAINER_SURGE_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_LEADER_LT_SURGE,
        .trainerName = _("LT.SURGE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Surge2),
        .party = {.ItemCustomMoves = sParty_Surge2},
    },

    [TRAINER_ERIKA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        .trainerName = _("ERIKA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Erika),
        .party = {.ItemCustomMoves = sParty_Erika},
    },

    [TRAINER_KOGA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_KOGA,
        .trainerName = _("KOGA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koga),
        .party = {.ItemCustomMoves = sParty_Koga},
    },

    [TRAINER_BLAINE_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .trainerName = _("BLAINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Blaine1),
        .party = {.ItemCustomMoves = sParty_Blaine1},
    },

    [TRAINER_SABRINA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        .trainerName = _("SABRINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sabrina),
        .party = {.ItemCustomMoves = sParty_Sabrina},
    },

    [TRAINER_LAO_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("FLINT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Laura),
        .party = {.NoItemDefaultMoves = sParty_Laura},
    },

    [TRAINER_AZUL_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVALES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Azul1),
        .party = {.ItemCustomMoves = sParty_Azul1},
    },

    [TRAINER_CAPITAN_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAPITAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CAPTAIN_EDWARD,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Capitan1),
        .party = {.ItemCustomMoves = sParty_Capitan1},
    },

    [TRAINER_SAFARI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("JAVIER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Safari),
        .party = {.NoItemDefaultMoves = sParty_Safari},
    },

    [TRAINER_AYUDANTE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ayudante1),
        .party = {.NoItemDefaultMoves = sParty_Ayudante1},
    },

    [TRAINER_AYUDANTE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ayudante2),
        .party = {.NoItemDefaultMoves = sParty_Ayudante2},
    },

    [TRAINER_AYUDANTE_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ayudante3),
        .party = {.NoItemDefaultMoves = sParty_Ayudante3},
    },

    [TRAINER_AYUDANTE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ayudante4),
        .party = {.NoItemDefaultMoves = sParty_Ayudante4},
    },

    [TRAINER_AYUDANTE_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("AYUDANT.OAK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ayudante5),
        .party = {.NoItemDefaultMoves = sParty_Ayudante5},
    },

    [TRAINER_CLUBFANS] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKECOLECTOR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("PRESIDENTE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Clubfans),
        .party = {.NoItemCustomMoves = sParty_Clubfans},
    },

    [TRAINER_BONOBICI] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("TIRIAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bonobici),
        .party = {.NoItemCustomMoves = sParty_Bonobici},
    },

    [TRAINER_GUARDA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEABU,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("SAFARI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Guarda),
        .party = {.ItemCustomMoves = sParty_Guarda},
    },

    [TRAINER_ATLAS_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ATLAS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_ADMIN_ATLAS,
        .trainerName = _("ATLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Atlas1),
        .party = {.NoItemCustomMoves = sParty_Atlas1},
    },

    [TRAINER_ANDRA_8] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ANDRA_ADMIN_JEFE,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra8),
        .party = {.ItemCustomMoves = sParty_Andra8},
    },

    [TRAINER_BILL_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BILL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BILL,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bill3),
        .party = {.ItemCustomMoves = sParty_Bill3},
    },

    [TRAINER_CULTO_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JONES,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_CULTIST_LEADER_JONES,
        .trainerName = _("JONES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Culto1),
        .party = {.ItemCustomMoves = sParty_Culto1},
    },

    [TRAINER_IMANI] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
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
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
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
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
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
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv2),
        .party = {.NoItemDefaultMoves = sParty_AmyAndLiv2},
    },

    [TRAINER_GINA_AND_MIA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
        .trainerName = _("LAMAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MiuAndYuki),
        .party = {.NoItemDefaultMoves = sParty_MiuAndYuki},
    },

    [TRAINER_AMY_AND_LIV_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GEMELAS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_TWINS,
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
        .trainerClass = TRAINER_CLASS_PAREJAGUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
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
        .trainerClass = TRAINER_CLASS_PAREJAJOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNG_COUPLE,
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
        .trainerClass = TRAINER_CLASS_GEMELAS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_TWINS,
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
        .trainerClass = TRAINER_CLASS_DUOFUERTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
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
        .trainerClass = TRAINER_CLASS_PAREJAJOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNG_COUPLE,
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
        .trainerClass = TRAINER_CLASS_HERMANOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SIS_AND_BRO,
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
        .trainerClass = TRAINER_CLASS_HERMANOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SIS_AND_BRO,
        .trainerName = _("LIL & IAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ernest1),
        .party = {.NoItemDefaultMoves = sParty_Ernest1},
    },

    [TRAINER_ENTRENAMIENTO_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento1),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento1},
    },

    [TRAINER_ENTRENAMIENTO_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento2),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento2},
    },

    [TRAINER_ENTRENAMIENTO_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento3),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento3},
    },

    [TRAINER_ENTRENAMIENTO_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento4),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento4},
    },

    [TRAINER_ENTRENAMIENTO_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento5),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento5},
    },

    [TRAINER_ENTRENAMIENTO_6] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento6),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento6},
    },

    [TRAINER_ENTRENAMIENTO_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ENTRENADOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Entrenamiento7),
        .party = {.NoItemDefaultMoves = sParty_Entrenamiento7},
    },

    [TRAINER_ERNEST_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("TERESA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Hector),
        .party = {.NoItemDefaultMoves = sParty_Hector},
    },

    [TRAINER_AZUL_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RIVALES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Azul4),
        .party = {.ItemCustomMoves = sParty_Azul4},
    },

    [TRAINER_EDWIN_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SAILOR,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SAILOR,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_CHICAFUERTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
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
        .trainerClass = TRAINER_CLASS_PLAYERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_TUBER_F,
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
        .trainerClass = TRAINER_CLASS_CRIAPOKEMON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_BREEDER,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_F,
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
        .trainerClass = TRAINER_CLASS_SRAAROMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_AROMA_LADY,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_DAMISELA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LADY,
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
        .trainerClass = TRAINER_CLASS_PINTORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_PAINTER,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_F,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac3),
        .party = {.NoItemDefaultMoves = sParty_Isaac3},
    },

    [TRAINER_ISAAC_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac4),
        .party = {.NoItemDefaultMoves = sParty_Isaac4},
    },

    [TRAINER_ISAAC_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isaac5),
        .party = {.NoItemDefaultMoves = sParty_Isaac5},
    },

    [TRAINER_LYDIA_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lydia1),
        .party = {.NoItemDefaultMoves = sParty_Lydia1},
    },

    [TRAINER_HALLE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
        .trainerName = _("DANIIL"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Halle),
        .party = {.NoItemDefaultMoves = sParty_Halle},
    },

    [TRAINER_GARRISON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("TOMMY"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson1),
        .party = {.NoItemDefaultMoves = sParty_Jackson1},
    },

    [TRAINER_LORENZO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM,
        .trainerClass = TRAINER_CLASS_CHICAFUERTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_DUOFUERTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        .trainerName = _("MIK & KIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Jackson5),
        .party = {.ItemDefaultMoves = sParty_Jackson5},
    },

    [TRAINER_CATHERINE_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SRAAROMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_AROMA_LADY,
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
        .trainerClass = TRAINER_CLASS_PLAYERA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_TUBER_F,
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
        .trainerClass = TRAINER_CLASS_GEMELAS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_TWINS,
        .trainerName = _("JOY & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sophia),
        .party = {.NoItemDefaultMoves = sParty_Sophia},
    },

    [TRAINER_CATHERINE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_PINTORA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_PAINTER,
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
        .trainerClass = TRAINER_CLASS_PINTORA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_PAINTER,
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
        .trainerClass = TRAINER_CLASS_DAMISELA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LADY,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntUnused),
        .party = {.NoItemDefaultMoves = sParty_GruntUnused},
    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_HERMANOS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SIS_AND_BRO,
        .trainerName = _("AVA & GEB"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Athena),
        .party = {.NoItemDefaultMoves = sParty_Athena},
    },

    [TRAINER_HARRISON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SRAAROMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_AROMA_LADY,
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
        .trainerClass = TRAINER_CLASS_NADADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_GEMELAS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_TWINS,
        .trainerName = _("MIU & MIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Terry),
        .party = {.NoItemDefaultMoves = sParty_Terry},
    },

    [TRAINER_NATE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_M,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_SRAAROMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_AROMA_LADY,
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
        .trainerClass = TRAINER_CLASS_PAREJAJOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNG_COUPLE,
        .trainerName = _("EVE & JON"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter7),
        .party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter7},
    },

    [TRAINER_MACEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MALABARISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
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
        .trainerClass = TRAINER_CLASS_CHICAFUERTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
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
        .trainerClass = TRAINER_CLASS_CHICAFUERTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
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
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_TAMER,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
        .trainerName = _("LOGAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst5),
        .party = {.NoItemDefaultMoves = sParty_GruntWeatherInst5},
    },

    [TRAINER_BRUNO_1_MT_CHIMNEY] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_F,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_F,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_GUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_PAREJAGUAY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        .trainerName = _("LEX & NYA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MaxieMtChimney),
        .party = {.NoItemDefaultMoves = sParty_MaxieMtChimney},
    },

    [TRAINER_TIANA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_PINTORA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_PAINTER,
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
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_DAMISELA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LADY,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_MEDIUM,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_PSYCHIC_F,
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
        .trainerClass = TRAINER_CLASS_CRIAPOKEMON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_BREEDER,
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
        .trainerClass = TRAINER_CLASS_CRIAPOKEMON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_BREEDER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_JOVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CHICA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_CAMPISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAKANTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERAJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_JOVENJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_JUGONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOSJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("SENECA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lucas2),
        .party = {.NoItemDefaultMoves = sParty_Lucas2},
    },

    [TRAINER_MAESTRO_BELLSPROUT] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_MAESTRO_BELLSPROUT,
        .trainerName = _("ANSELMO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Maestrobellsprout),
        .party = {.ItemCustomMoves = sParty_Maestrobellsprout},
    },

    [TRAINER_MIKE_2] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_JOVENJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_CAMPER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
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
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_RUINAMANIACO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOSJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOSJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_CAZABICHOSJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_DOMINGUERAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_PICNICKER,
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
        .trainerClass = TRAINER_CLASS_JOVENJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_RICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
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
        .trainerClass = TRAINER_CLASS_RICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
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
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_CABALLEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_BELLAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_BELLAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_BEAUTY,
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
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
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
        .trainerClass = TRAINER_CLASS_CHICAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_F,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_F,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
        .trainerName = _("RUBEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_ToriAndTia),
        .party = {.NoItemDefaultMoves = sParty_ToriAndTia},
    },

    [TRAINER_KIM_AND_IRIS] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_CAZABICHOSJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_BUG_CATCHER,
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
        .trainerClass = TRAINER_CLASS_JOVENJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_YOUNGSTER,
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
        .trainerClass = TRAINER_CLASS_CHICAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_LASS,
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
        .trainerClass = TRAINER_CLASS_MALABARISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_JUGGLER,
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
        .trainerClass = TRAINER_CLASS_PAREJAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("PAUL & ELSA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay2),
        .party = {.NoItemDefaultMoves = sParty_JohnAndJay2},
    },

    [TRAINER_JOHN_AND_JAY_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
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
        .trainerClass = TRAINER_CLASS_CRIAPOKEMONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
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
        .trainerClass = TRAINER_CLASS_CRIAPOKEMONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_MENTALISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_MENTALISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("JUDITH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy3),
        .party = {.NoItemDefaultMoves = sParty_LilaAndRoy3},
    },

    [TRAINER_SLOWBRO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
        .trainerName = _("LOUIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Slowbro),
        .party = {.ItemCustomMoves = sParty_Slowbro},
    },

    [TRAINER_LILA_AND_ROY_5] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
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
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
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
        .trainerClass = TRAINER_CLASS_PINTORAJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_PAINTER,
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
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
        .trainerName = _("PAIRE"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sarah),
        .party = {.ItemDefaultMoves = sParty_Sarah},
    },

    [TRAINER_DARIAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_MARINEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_CABALLEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_INGENIERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ROCKER,
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
        .trainerClass = TRAINER_CLASS_CABALLEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
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
        .trainerClass = TRAINER_CLASS_MARINEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_SUPERNECIOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
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
        .trainerClass = TRAINER_CLASS_MARINEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
        .trainerName = _("RUBEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Celina),
        .party = {.NoItemDefaultMoves = sParty_Celina},
    },

    [TRAINER_BIANCA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_ORNITOLOGOJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
        .trainerName = _("IVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wyatt),
        .party = {.NoItemDefaultMoves = sParty_Wyatt},
    },

    [TRAINER_ANGELINA] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
        .trainerName = _("SOFIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Deandre),
        .party = {.NoItemDefaultMoves = sParty_Deandre},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_CHICAFUERTEJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
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
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
        .trainerName = _("ALVARO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout3),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout3},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_CABALLEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
        .trainerName = _("TRISTAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout6),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout6},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_MARINEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_RICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
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
        .trainerClass = TRAINER_CLASS_MARINERO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_M,
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
        .trainerClass = TRAINER_CLASS_MARINEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_SAILOR,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout11),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout11},
    },

    [TRAINER_CAPITAN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAPITAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_CAPTAIN_EDWARD,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Capitan2),
        .party = {.ItemCustomMoves = sParty_Capitan2},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
        .trainerName = _("ELOY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout16),
        .party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout16},
    },

    [TRAINER_ROJO_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ESENCIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("ROJO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rojo3),
        .party = {.ItemCustomMoves = sParty_Rojo3},
    },

    [TRAINER_ELM] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ELM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_PROFESSOR_ELM,
        .trainerName = _("ELM"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elm),
        .party = {.ItemCustomMoves = sParty_Elm},
    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_SEVII,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_EXPERT_F,
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
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_FR_POKEMANIAC,
        .trainerName = _("MATIAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pete),
        .party = {.ItemCustomMoves = sParty_Pete},
    },

    [TRAINER_ISABELLE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("THOMAS"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Isabelle),
        .party = {.ItemCustomMoves = sParty_Isabelle},
    },

    [TRAINER_LADRON_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("VICTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ladron3),
        .party = {.ItemCustomMoves = sParty_Ladron3},
    },

    [TRAINER_LADRON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("FRANCIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ladron2),
        .party = {.ItemCustomMoves = sParty_Ladron2},
    },

    [TRAINER_LADRON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ladron1),
        .party = {.ItemCustomMoves = sParty_Ladron1},
    },

    [TRAINER_ATLAS_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ATLAS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_ADMIN_ATLAS,
        .trainerName = _("ATLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Atlas3),
        .party = {.ItemCustomMoves = sParty_Atlas3},
    },

    [TRAINER_ROJO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAMPEON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("ROJO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Rojo2),
        .party = {.ItemCustomMoves = sParty_Rojo2},
    },

    [TRAINER_LANCE_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EMPERADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LANCE,
        .trainerName = _("LANCE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lance2),
        .party = {.ItemCustomMoves = sParty_Lance2},
    },

    [TRAINER_CELIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_GUAYJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_FR_COOL_TRAINER_F,
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
        .trainerClass = TRAINER_CLASS_POKEMANIACOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_HGSS_POKEMANIAC,
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
        .trainerClass = TRAINER_CLASS_KIMONO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
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
        .trainerClass = TRAINER_CLASS_KIMONO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
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
        .trainerClass = TRAINER_CLASS_KIMONO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
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
        .trainerClass = TRAINER_CLASS_KIMONO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
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
        .trainerClass = TRAINER_CLASS_KIMONO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
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
        .trainerClass = TRAINER_CLASS_COMEFUEGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("SAJAD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Helene),
        .party = {.NoItemDefaultMoves = sParty_Helene},
    },

    [TRAINER_FARERO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_FARERO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
        .trainerName = _("KEPLER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Farero),
        .party = {.ItemCustomMoves = sParty_Farero},
    },

    [TRAINER_DEVAN] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("HERACLITO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Devan),
        .party = {.NoItemDefaultMoves = sParty_Devan},
    },

    [TRAINER_JOHNSON] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("DEMOCRITO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dayton),
        .party = {.NoItemDefaultMoves = sParty_Dayton},
    },

    [TRAINER_RACHEL] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
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
        .trainerClass = TRAINER_CLASS_POKEGUARDAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_POKEMON_RANGER_M,
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
        .trainerClass = TRAINER_CLASS_KARATEKAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_BLACK_BELT,
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
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_M,
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
        .trainerClass = TRAINER_CLASS_NADADORAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO,
        .trainerPic = TRAINER_PIC_FR_SWIMMER_F,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
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
        .trainerClass = TRAINER_CLASS_PESCADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("COREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Brawly3),
        .party = {.NoItemDefaultMoves = sParty_Brawly3},
    },

    [TRAINER_AGATHA_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ALTOMANDO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_AGATHA,
        .trainerName = _("AGATHA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Agatha2),
        .party = {.ItemCustomMoves = sParty_Agatha2},
    },

    [TRAINER_CULTO_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DIOS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CULTIST_LEADER_JONES,
        .trainerName = _("JONES"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Culto3),
        .party = {.ItemCustomMoves = sParty_Culto3},
    },

    [TRAINER_ZEUS_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ZEUS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ZEUS,
        .trainerName = _("ZEUS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Zeus4),
        .party = {.ItemCustomMoves = sParty_Zeus4},
    },

    [TRAINER_WATTSON_3] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
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
        .trainerClass = TRAINER_CLASS_NINJA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("SUSUMU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Wattson5),
        .party = {.NoItemDefaultMoves = sParty_Wattson5},
    },

    [TRAINER_CULTO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JONES,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CULTIST_LEADER_JONES,
        .trainerName = _("JONES"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Culto2),
        .party = {.ItemCustomMoves = sParty_Culto2},
    },

    [TRAINER_ESENCIA_HOOH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ESENCIA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_REY_UNOWN,
        .trainerName = _("REY UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esenciahooh),
        .party = {.ItemCustomMoves = sParty_Esenciahooh},
    },

    [TRAINER_ESENCIA_LUGIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ESENCIA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_REY_UNOWN,
        .trainerName = _("REY UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencialugia),
        .party = {.ItemCustomMoves = sParty_Esencialugia},
    },

    [TRAINER_ESENCIA_ZIGARDE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ESENCIA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_REY_UNOWN,
        .trainerName = _("REY UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esenciazigarde),
        .party = {.ItemCustomMoves = sParty_Esenciazigarde},
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

    [TRAINER_ESENCIA_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GOLD_UNOWN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencia1),
        .party = {.ItemCustomMoves = sParty_Esencia1},
    },

    [TRAINER_ESENCIA_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GOLD_UNOWN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencia2),
        .party = {.ItemCustomMoves = sParty_Esencia2},
    },

    [TRAINER_ESENCIA_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GOLD_UNOWN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencia3),
        .party = {.ItemCustomMoves = sParty_Esencia3},
    },

    [TRAINER_ESENCIA_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GOLD_UNOWN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencia4),
        .party = {.ItemCustomMoves = sParty_Esencia4},
    },

    [TRAINER_ESENCIA_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ESENCIA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GOLD_UNOWN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencia5),
        .party = {.ItemCustomMoves = sParty_Esencia5},
    },

    [TRAINER_ESENCIA_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GOLD_UNOWN,
        .trainerName = _("G-UNOWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Esencia6),
        .party = {.ItemCustomMoves = sParty_Esencia6},
    },

    [TRAINER_RECLUTA_BALL_1] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Reclutaball1),
        .party = {.NoItemDefaultMoves = sParty_Reclutaball1},
    },

    [TRAINER_RECLUTA_BALL_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Reclutaball2),
        .party = {.ItemCustomMoves = sParty_Reclutaball2},
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

    [TRAINER_GRANJERO_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LIZA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Granjero1),
        .party = {.ItemCustomMoves = sParty_Granjero1},
    },

    [TRAINER_GRANJERO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Granjero2),
        .party = {.ItemCustomMoves = sParty_Granjero2},
    },

    [TRAINER_LADRON_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("VICTOR"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ladron4),
        .party = {.ItemCustomMoves = sParty_Ladron4},
    },

    [TRAINER_LADRON_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("FRANCIS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ladron5),
        .party = {.ItemCustomMoves = sParty_Ladron5},
    },

    [TRAINER_LADRON_6] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("MARCOS"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ladron6),
        .party = {.ItemCustomMoves = sParty_Ladron6},
    },

    [TRAINER_SHAKURA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FR_AROMA_LADY,
        .trainerName = _("SHAKURA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Shakura),
        .party = {.ItemCustomMoves = sParty_Shakura},
    },

    [TRAINER_ANGELO] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
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
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Anabel),
        .party = {.ItemCustomMoves = sParty_Anabel},
    },

    [TRAINER_PEGASO_DISCIPULO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SINGULAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HGSS_BIRD_KEEPER,
        .trainerName = _("HORACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pegasodiscipulo),
        .party = {.ItemCustomMoves = sParty_Pegasodiscipulo},
    },

    [TRAINER_ELM_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ELM,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PROFESSOR_ELM,
        .trainerName = _("ELM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Elm2),
        .party = {.ItemCustomMoves = sParty_Elm2},
    },

    [TRAINER_AQUILES_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("AQUILES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Aquiles2),
        .party = {.ItemCustomMoves = sParty_Aquiles2},
    },

    [TRAINER_PRESIDENTE_SILPH] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PRESIDENTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("SILPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Presidentesilph),
        .party = {.ItemCustomMoves = sParty_Presidentesilph},
    },

    [TRAINER_MAGNO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("LUCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Magno2),
        .party = {.ItemCustomMoves = sParty_Magno2},
    },

    [TRAINER_HELIO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Helio),
        .party = {.ItemCustomMoves = sParty_Helio},
    },

    [TRAINER_LYSSON] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("LYSSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lysson),
        .party = {.ItemCustomMoves = sParty_Lysson},
    },

    [TRAINER_LUSAMINE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("LUSAMINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Lusamine),
        .party = {.ItemCustomMoves = sParty_Lusamine},
    },

    [TRAINER_CHAIRMAN_ROSE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Chairmanrose),
        .party = {.ItemCustomMoves = sParty_Chairmanrose},
    },

    [TRAINER_GIOVANNI_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GIOVANNI,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("GIOVANNI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Giovanni2),
        .party = {.ItemCustomMoves = sParty_Giovanni2},
    },

    [TRAINER_PRESIDENTE_DEVON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Presidentedevon2),
        .party = {.ItemCustomMoves = sParty_Presidentedevon2},
    },

    [TRAINER_CMIGUEL_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MIGUEL_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cmiguel4),
        .party = {.ItemCustomMoves = sParty_Cmiguel4},
    },

    [TRAINER_BILL_4] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_BILL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BILL,
        .trainerName = _("BILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Bill4),
        .party = {.ItemCustomMoves = sParty_Bill4},
    },

    [TRAINER_EUSINE] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EUSINE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ADMIN,
        .trainerName = _("EUSINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Eusine),
        .party = {.ItemCustomMoves = sParty_Eusine},
    },

    [TRAINER_ANDRA_9] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_ANDRA_ADMIN_JEFE,
        .trainerName = _("ANDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Andra9),
        .party = {.ItemCustomMoves = sParty_Andra9},
    },

    [TRAINER_DIANTA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("DIANTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Dianta),
        .party = {.ItemCustomMoves = sParty_Dianta},
    },

    [TRAINER_CINTIA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CINTIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cintia),
        .party = {.ItemCustomMoves = sParty_Cintia},
    },

    [TRAINER_PABLO_5] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SECTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pablo5),
        .party = {.NoItemCustomMoves = sParty_Pablo5},
    },

    [TRAINER_KOJI_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("SECTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji2),
        .party = {.NoItemCustomMoves = sParty_Koji2},
    },

    [TRAINER_KOJI_3] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("SECTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji3),
        .party = {.ItemCustomMoves = sParty_Koji3},
    },

    [TRAINER_KOJI_4] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("SECTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji4),
        .party = {.NoItemCustomMoves = sParty_Koji4},
    },

    [TRAINER_KOJI_5] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CULTISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CULTISTA,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("SECTA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Koji5),
        .party = {.ItemCustomMoves = sParty_Koji5},
    },

    [TRAINER_CRISTIN_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("BARTOLO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin2),
        .party = {.NoItemCustomMoves = sParty_Cristin2},
    },

    [TRAINER_CRISTIN_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("KARL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin3),
        .party = {.NoItemCustomMoves = sParty_Cristin3},
    },

    [TRAINER_CRISTIN_4] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin4),
        .party = {.NoItemCustomMoves = sParty_Cristin4},
    },

    [TRAINER_CRISTIN_5] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Cristin5),
        .party = {.NoItemCustomMoves = sParty_Cristin5},
    },

    [TRAINER_CAMPEON_FANTASMA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXCAMPEON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("JOHTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Campeonfantasma),
        .party = {.ItemCustomMoves = sParty_Campeonfantasma},
    },

    [TRAINER_CAMPEON_VENENO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXCAMPEON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("JOHTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Campeonveneno),
        .party = {.ItemCustomMoves = sParty_Campeonveneno},
    },

    [TRAINER_FERNANDO_4] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando4),
        .party = {.NoItemCustomMoves = sParty_Fernando4},
    },

    [TRAINER_FERNANDO_5] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("AUGUSTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Fernando5),
        .party = {.NoItemCustomMoves = sParty_Fernando5},
    },

    [TRAINER_SAWYER_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("JAVIER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer2),
        .party = {.NoItemCustomMoves = sParty_Sawyer2},
    },

    [TRAINER_SAWYER_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SABIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("GASPAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer3),
        .party = {.NoItemCustomMoves = sParty_Sawyer3},
    },

    [TRAINER_SAWYER_4] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer4),
        .party = {.NoItemCustomMoves = sParty_Sawyer4},
    },

    [TRAINER_SAWYER_5] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("TYSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Sawyer5),
        .party = {.NoItemCustomMoves = sParty_Sawyer5},
    },

    [TRAINER_GABRIELLE_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("GABRIEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle2),
        .party = {.NoItemCustomMoves = sParty_Gabrielle2},
    },

    [TRAINER_GABRIELLE_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("CHAMBERS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle3),
        .party = {.NoItemCustomMoves = sParty_Gabrielle3},
    },

    [TRAINER_GABRIELLE_4] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("STEVEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle4),
        .party = {.NoItemCustomMoves = sParty_Gabrielle4},
    },

    [TRAINER_GABRIELLE_5] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("TOM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Gabrielle5),
        .party = {.NoItemCustomMoves = sParty_Gabrielle5},
    },

    [TRAINER_THALIA_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("BERNARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia2),
        .party = {.NoItemCustomMoves = sParty_Thalia2},
    },

    [TRAINER_THALIA_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("MARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia3),
        .party = {.NoItemCustomMoves = sParty_Thalia3},
    },

    [TRAINER_THALIA_4] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MONTANEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia4),
        .party = {.NoItemCustomMoves = sParty_Thalia4},
    },

    [TRAINER_THALIA_5] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MONTANEROHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TOMAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Thalia5),
        .party = {.NoItemCustomMoves = sParty_Thalia5},
    },

    [TRAINER_MARIELA] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DUDU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Mariela),
        .party = {.NoItemCustomMoves = sParty_Mariela},
    },

    [TRAINER_ALVARO] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alvaro),
        .party = {.NoItemCustomMoves = sParty_Alvaro},
    },

    [TRAINER_EVERETT] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MONTANEROHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Everett),
        .party = {.NoItemCustomMoves = sParty_Everett},
    },

    [TRAINER_RED] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Red),
        .party = {.NoItemCustomMoves = sParty_Red},
    },

    [TRAINER_LEAF] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Leaf),
        .party = {.NoItemCustomMoves = sParty_Leaf},
    },

    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BECKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_BrendanLinkPlaceholder),
        .party = {.NoItemCustomMoves = sParty_BrendanLinkPlaceholder},
    },

    [TRAINER_MAY_PLACEHOLDER] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MONTANEROHOENN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("BRYAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_MayLinkPlaceholder),
        .party = {.NoItemCustomMoves = sParty_MayLinkPlaceholder},
    },

    [TRAINER_CIENTIFICO_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DEVON_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_CIENTIFICO1),
        .party = {.NoItemCustomMoves = sParty_CIENTIFICO1},
    },

    [TRAINER_CRIMINAL] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DEVON_CIENTIFICO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_CRIMINAL),
        .party = {.NoItemCustomMoves = sParty_CRIMINAL},
    },

    [TRAINER_CIENTIFICO_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DEVON_CIENTIFICO,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_CIENTIFICO3),
        .party = {.NoItemCustomMoves = sParty_CIENTIFICO3},
    },

    [TRAINER_EJECUTIVO_DEVON_1] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ADMINDEVON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("ZAFIRO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ejecutivodevon1),
        .party = {.ItemCustomMoves = sParty_Ejecutivodevon1},
    },

    [TRAINER_TRAINER_1] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("BRYAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER1),
        .party = {.NoItemCustomMoves = sParty_TRAINER1},
    },

    [TRAINER_TRAINER_2] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("NATTI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER2),
        .party = {.NoItemCustomMoves = sParty_TRAINER2},
    },

    [TRAINER_TRAINER_3] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("CARLOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER3),
        .party = {.NoItemCustomMoves = sParty_TRAINER3},
    },

    [TRAINER_EJECUTIVO_DEVON_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ADMINISTRADOR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("DEVON G2"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Ejecutivodevon2),
        .party = {.ItemCustomMoves = sParty_Ejecutivodevon2},
    },

    [TRAINER_PEGASO_2] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO,
        .trainerName = _("PEGASO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Pegaso2),
        .party = {.ItemCustomMoves = sParty_Pegaso2},
    },

    [TRAINER_PETRA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("PETRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Petra),
        .party = {.ItemCustomMoves = sParty_Petra},
    },

    [TRAINER_MARCIAL] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("MARCIAL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Marcial),
        .party = {.ItemCustomMoves = sParty_Marcial},
    },

    [TRAINER_ERICO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("ERICO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Erico),
        .party = {.ItemCustomMoves = sParty_Erico},
    },

    [TRAINER_CANDELA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("CANDELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Candela),
        .party = {.ItemCustomMoves = sParty_Candela},
    },

    [TRAINER_NORMAN] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("NORMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Norman),
        .party = {.ItemCustomMoves = sParty_Norman},
    },

    [TRAINER_ALANA] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("ALANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Alana),
        .party = {.ItemCustomMoves = sParty_Alana},
    },

    [TRAINER_VITOLETI] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("VITO&LETI"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Vitoleti),
        .party = {.ItemCustomMoves = sParty_Vitoleti},
    },

    [TRAINER_GALANO] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER13"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_Galano),
        .party = {.ItemCustomMoves = sParty_Galano},
    },

    [TRAINER_TRAINER_14] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DEVON_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER14),
        .party = {.ItemCustomMoves = sParty_TRAINER14},
    },

    [TRAINER_TRAINER_15] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DEVON_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER15),
        .party = {.ItemCustomMoves = sParty_TRAINER15},
    },

    [TRAINER_TRAINER_16] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER16"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER16),
        .party = {.ItemCustomMoves = sParty_TRAINER16},
    },

    [TRAINER_TRAINER_17] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAESTRO_DUN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_MAESTRO_BELLSPROUT,
        .trainerName = _("DUN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER17),
        .party = {.ItemCustomMoves = sParty_TRAINER17},
    },

    [TRAINER_TRAINER_18] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("GECHIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER18),
        .party = {.ItemCustomMoves = sParty_TRAINER18},
    },

    [TRAINER_TRAINER_19] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GIOVANNI,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_GIOVANNI,
        .trainerName = _("GIOVANNI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER19),
        .party = {.ItemCustomMoves = sParty_TRAINER19},
    },

    [TRAINER_TRAINER_20] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANDRA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_ADMIN_ANDRA,
        .trainerName = _("TRAINER20"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER20),
        .party = {.ItemCustomMoves = sParty_TRAINER20},
    },

    [TRAINER_TRAINER_21] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PROTON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_C_MIGUEL,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER21),
        .party = {.NoItemDefaultMoves = sParty_TRAINER21},
    },

    [TRAINER_TRAINER_22] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEABU,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("FERNAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER22),
        .party = {.NoItemCustomMoves = sParty_TRAINER22},
    },

    [TRAINER_TRAINER_23] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEABU,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("DANIELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER23),
        .party = {.NoItemCustomMoves = sParty_TRAINER23},
    },

    [TRAINER_TRAINER_24] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEABU,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("KIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER24),
        .party = {.NoItemCustomMoves = sParty_TRAINER24},
    },

    [TRAINER_TRAINER_25] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POKEABU,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("JAIME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER25),
        .party = {.NoItemCustomMoves = sParty_TRAINER25},
    },

    [TRAINER_TRAINER_26] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SEVII,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("ZINNIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER26),
        .party = {.ItemCustomMoves = sParty_TRAINER26},
    },

    [TRAINER_TRAINER_27] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("AUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER27),
        .party = {.NoItemCustomMoves = sParty_TRAINER27},
    },

    [TRAINER_TRAINER_28] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("ADAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER28),
        .party = {.NoItemCustomMoves = sParty_TRAINER28},
    },

    [TRAINER_TRAINER_29] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("JAXON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER29),
        .party = {.NoItemCustomMoves = sParty_TRAINER29},
    },

    [TRAINER_TRAINER_30] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("OWEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER30),
        .party = {.NoItemCustomMoves = sParty_TRAINER30},
    },

    [TRAINER_TRAINER_31] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("AXEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER31),
        .party = {.NoItemCustomMoves = sParty_TRAINER31},
    },

    [TRAINER_TRAINER_32] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("ARIEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER32),
        .party = {.NoItemCustomMoves = sParty_TRAINER32},
    },

    [TRAINER_TRAINER_33] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("SALMA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER33),
        .party = {.NoItemCustomMoves = sParty_TRAINER33},
    },

    [TRAINER_TRAINER_34] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("CAMILA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER34),
        .party = {.NoItemCustomMoves = sParty_TRAINER34},
    },

    [TRAINER_TRAINER_35] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("GISELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER35),
        .party = {.NoItemCustomMoves = sParty_TRAINER35},
    },

    [TRAINER_TRAINER_36] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("ROBBIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER36),
        .party = {.NoItemCustomMoves = sParty_TRAINER36},
    },

    [TRAINER_TRAINER_37] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("ALEXIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER37),
        .party = {.NoItemCustomMoves = sParty_TRAINER37},
    },

    [TRAINER_TRAINER_38] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXORCISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = _("XIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER38),
        .party = {.NoItemCustomMoves = sParty_TRAINER38},
    },

    [TRAINER_TRAINER_39] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LIDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        .trainerName = _("AZUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER39),
        .party = {.ItemCustomMoves = sParty_TRAINER39},
    },

    [TRAINER_TRAINER_40] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("TRAINER40"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER40),
        .party = {.NoItemCustomMoves = sParty_TRAINER40},
    },

    [TRAINER_TRAINER_41] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER41"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER41),
        .party = {.NoItemCustomMoves = sParty_TRAINER41},
    },

    [TRAINER_TRAINER_42] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER42"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER42),
        .party = {.NoItemCustomMoves = sParty_TRAINER42},
    },

    [TRAINER_TRAINER_43] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER43"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER43),
        .party = {.NoItemCustomMoves = sParty_TRAINER43},
    },

    [TRAINER_TRAINER_44] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER44"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER44),
        .party = {.NoItemCustomMoves = sParty_TRAINER44},
    },

    [TRAINER_TRAINER_45] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TRAINER45"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER45),
        .party = {.NoItemCustomMoves = sParty_TRAINER45},
    },

    [TRAINER_TRAINER_46] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("TRAINER46"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER46),
        .party = {.NoItemCustomMoves = sParty_TRAINER46},
    },

    [TRAINER_TRAINER_47] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("TRAINER47"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER47),
        .party = {.NoItemCustomMoves = sParty_TRAINER47},
    },

    [TRAINER_TRAINER_48] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TRAINER48"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER48),
        .party = {.NoItemCustomMoves = sParty_TRAINER48},
    },

    [TRAINER_TRAINER_49] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER49"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER49),
        .party = {.NoItemCustomMoves = sParty_TRAINER49},
    },

    [TRAINER_TRAINER_50] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER50"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER50),
        .party = {.NoItemCustomMoves = sParty_TRAINER50},
    },

    [TRAINER_TRAINER_51] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("TRAINER51"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER51),
        .party = {.NoItemCustomMoves = sParty_TRAINER51},
    },

    [TRAINER_TRAINER_52] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("TRAINER52"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER52),
        .party = {.NoItemCustomMoves = sParty_TRAINER52},
    },

    [TRAINER_TRAINER_53] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRAINER53"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER53),
        .party = {.NoItemCustomMoves = sParty_TRAINER53},
    },

    [TRAINER_TRAINER_54] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER54"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER54),
        .party = {.NoItemCustomMoves = sParty_TRAINER54},
    },

    [TRAINER_TRAINER_55] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("TRAINER55"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER55),
        .party = {.NoItemCustomMoves = sParty_TRAINER55},
    },

    [TRAINER_TRAINER_56] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("TRAINER56"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER56),
        .party = {.NoItemCustomMoves = sParty_TRAINER56},
    },

    [TRAINER_TRAINER_57] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("TRAINER57"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER57),
        .party = {.NoItemCustomMoves = sParty_TRAINER57},
    },

    [TRAINER_TRAINER_58] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("TRAINER58"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER58),
        .party = {.NoItemCustomMoves = sParty_TRAINER58},
    },

    [TRAINER_TRAINER_59] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("TRAINER59"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER59),
        .party = {.NoItemCustomMoves = sParty_TRAINER59},
    },

    [TRAINER_TRAINER_60] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("TRAINER60"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER60),
        .party = {.NoItemCustomMoves = sParty_TRAINER60},
    },

    [TRAINER_TRAINER_61] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRAINER61"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER61),
        .party = {.NoItemCustomMoves = sParty_TRAINER61},
    },

    [TRAINER_TRAINER_62] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER62"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER62),
        .party = {.NoItemCustomMoves = sParty_TRAINER62},
    },

    [TRAINER_TRAINER_63] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER63"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER63),
        .party = {.NoItemCustomMoves = sParty_TRAINER63},
    },

    [TRAINER_TRAINER_64] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER64"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER64),
        .party = {.NoItemCustomMoves = sParty_TRAINER64},
    },

    [TRAINER_TRAINER_65] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER65"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER65),
        .party = {.NoItemCustomMoves = sParty_TRAINER65},
    },

    [TRAINER_TRAINER_66] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER66"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER66),
        .party = {.NoItemCustomMoves = sParty_TRAINER66},
    },

    [TRAINER_TRAINER_67] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER67"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER67),
        .party = {.NoItemCustomMoves = sParty_TRAINER67},
    },

    [TRAINER_TRAINER_68] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER68"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER68),
        .party = {.NoItemCustomMoves = sParty_TRAINER68},
    },

    [TRAINER_TRAINER_69] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER69"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER69),
        .party = {.NoItemCustomMoves = sParty_TRAINER69},
    },

    [TRAINER_TRAINER_70] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER70"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER70),
        .party = {.NoItemCustomMoves = sParty_TRAINER70},
    },

    [TRAINER_TRAINER_71] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER71"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER71),
        .party = {.NoItemCustomMoves = sParty_TRAINER71},
    },

    [TRAINER_TRAINER_72] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER72"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER72),
        .party = {.NoItemCustomMoves = sParty_TRAINER72},
    },

    [TRAINER_TRAINER_73] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER73"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER73),
        .party = {.NoItemCustomMoves = sParty_TRAINER73},
    },

    [TRAINER_TRAINER_74] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER74"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER74),
        .party = {.NoItemCustomMoves = sParty_TRAINER74},
    },

    [TRAINER_TRAINER_75] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER75"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER75),
        .party = {.NoItemCustomMoves = sParty_TRAINER75},
    },

    [TRAINER_TRAINER_76] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EUSINE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("EUSINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER76),
        .party = {.ItemCustomMoves = sParty_TRAINER76},
    },

    [TRAINER_TRAINER_77] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("DREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER77),
        .party = {.NoItemCustomMoves = sParty_TRAINER77},
    },

    [TRAINER_TRAINER_78] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("BAKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER78),
        .party = {.NoItemCustomMoves = sParty_TRAINER78},
    },

    [TRAINER_TRAINER_79] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("DAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER79),
        .party = {.NoItemCustomMoves = sParty_TRAINER79},
    },

    [TRAINER_TRAINER_80] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("SCOTT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER80),
        .party = {.NoItemCustomMoves = sParty_TRAINER80},
    },

    [TRAINER_TRAINER_81] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ROLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER81),
        .party = {.NoItemCustomMoves = sParty_TRAINER81},
    },

    [TRAINER_TRAINER_82] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("DUFORT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER82),
        .party = {.NoItemCustomMoves = sParty_TRAINER82},
    },

    [TRAINER_TRAINER_83] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("DUKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER83),
        .party = {.NoItemCustomMoves = sParty_TRAINER83},
    },

    [TRAINER_TRAINER_84] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("SAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER84),
        .party = {.NoItemCustomMoves = sParty_TRAINER84},
    },

    [TRAINER_TRAINER_85] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("CHRIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER85),
        .party = {.NoItemCustomMoves = sParty_TRAINER85},
    },

    [TRAINER_TRAINER_86] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("KREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER86),
        .party = {.ItemCustomMoves = sParty_TRAINER86},
    },

    [TRAINER_TRAINER_87] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CABALLEROJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
        .trainerName = _("AMOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER87),
        .party = {.ItemCustomMoves = sParty_TRAINER87},
    },

    [TRAINER_TRAINER_88] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER88),
        .party = {.ItemCustomMoves = sParty_TRAINER88},
    },

    [TRAINER_TRAINER_89] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER89),
        .party = {.ItemCustomMoves = sParty_TRAINER89},
    },

    [TRAINER_TRAINER_90] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("TRAINER90"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER90),
        .party = {.NoItemCustomMoves = sParty_TRAINER90},
    },

    [TRAINER_TRAINER_91] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER91),
        .party = {.NoItemCustomMoves = sParty_TRAINER91},
    },

    [TRAINER_TRAINER_92] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER92),
        .party = {.NoItemCustomMoves = sParty_TRAINER92},
    },

    [TRAINER_TRAINER_93] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER93),
        .party = {.NoItemCustomMoves = sParty_TRAINER93},
    },

    [TRAINER_TRAINER_94] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER94),
        .party = {.NoItemCustomMoves = sParty_TRAINER94},
    },

    [TRAINER_TRAINER_95] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER95),
        .party = {.NoItemCustomMoves = sParty_TRAINER95},
    },

    [TRAINER_TRAINER_96] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER96),
        .party = {.NoItemCustomMoves = sParty_TRAINER96},
    },

    [TRAINER_TRAINER_97] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER97),
        .party = {.NoItemCustomMoves = sParty_TRAINER97},
    },

    [TRAINER_TRAINER_98] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER98),
        .party = {.NoItemCustomMoves = sParty_TRAINER98},
    },

    [TRAINER_TRAINER_99] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER99),
        .party = {.NoItemCustomMoves = sParty_TRAINER99},
    },

    [TRAINER_TRAINER_100] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIAHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER100),
        .party = {.NoItemCustomMoves = sParty_TRAINER100},
    },

    [TRAINER_TRAINER_101] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER101),
        .party = {.NoItemCustomMoves = sParty_TRAINER101},
    },

    [TRAINER_TRAINER_102] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER102),
        .party = {.NoItemCustomMoves = sParty_TRAINER102},
    },

    [TRAINER_TRAINER_103] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CIENTIFICOHOENN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER103),
        .party = {.NoItemCustomMoves = sParty_TRAINER103},
    },

    [TRAINER_TRAINER_104] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ADMINISTRADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("DEVON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER104),
        .party = {.ItemCustomMoves = sParty_TRAINER104},
    },

    [TRAINER_TRAINER_105] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTAJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("LIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER105),
        .party = {.NoItemCustomMoves = sParty_TRAINER105},
    },

    [TRAINER_TRAINER_106] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("ALLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER106),
        .party = {.NoItemCustomMoves = sParty_TRAINER106},
    },

    [TRAINER_TRAINER_107] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER107),
        .party = {.NoItemCustomMoves = sParty_TRAINER107},
    },

    [TRAINER_TRAINER_108] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("NIKOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER108),
        .party = {.ItemCustomMoves = sParty_TRAINER108},
    },

    [TRAINER_TRAINER_109] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("COLBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER109),
        .party = {.ItemCustomMoves = sParty_TRAINER109},
    },

    [TRAINER_TRAINER_110] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("LUCIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER110),
        .party = {.NoItemCustomMoves = sParty_TRAINER110},
    },

    [TRAINER_TRAINER_111] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("ROGER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER111),
        .party = {.NoItemCustomMoves = sParty_TRAINER111},
    },

    [TRAINER_TRAINER_112] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER112),
        .party = {.NoItemCustomMoves = sParty_TRAINER112},
    },

    [TRAINER_TRAINER_113] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("REED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER113),
        .party = {.ItemCustomMoves = sParty_TRAINER113},
    },

    [TRAINER_TRAINER_114] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("HUGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER114),
        .party = {.ItemCustomMoves = sParty_TRAINER114},
    },

    [TRAINER_TRAINER_115] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PRESIDENTE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("CONNER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER115),
        .party = {.ItemCustomMoves = sParty_TRAINER115},
    },

    [TRAINER_TRAINER_116] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("GREGORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER116),
        .party = {.ItemCustomMoves = sParty_TRAINER116},
    },

    [TRAINER_TRAINER_117] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_DOMADORJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("LEWIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER117),
        .party = {.ItemCustomMoves = sParty_TRAINER117},
    },

    [TRAINER_TRAINER_118] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SEVII,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("MORFEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER118),
        .party = {.ItemCustomMoves = sParty_TRAINER118},
    },

    [TRAINER_TRAINER_119] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER119),
        .party = {.NoItemCustomMoves = sParty_TRAINER119},
    },

    [TRAINER_TRAINER_120] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER120),
        .party = {.NoItemCustomMoves = sParty_TRAINER120},
    },

    [TRAINER_TRAINER_121] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER121),
        .party = {.NoItemCustomMoves = sParty_TRAINER121},
    },

    [TRAINER_TRAINER_122] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER122),
        .party = {.NoItemCustomMoves = sParty_TRAINER122},
    },

    [TRAINER_TRAINER_123] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER123),
        .party = {.NoItemCustomMoves = sParty_TRAINER123},
    },

    [TRAINER_TRAINER_124] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER124),
        .party = {.NoItemCustomMoves = sParty_TRAINER124},
    },

    [TRAINER_TRAINER_125] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER125),
        .party = {.NoItemCustomMoves = sParty_TRAINER125},
    },

    [TRAINER_TRAINER_126] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER126),
        .party = {.NoItemCustomMoves = sParty_TRAINER126},
    },

    [TRAINER_TRAINER_127] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER127),
        .party = {.NoItemCustomMoves = sParty_TRAINER127},
    },

    [TRAINER_TRAINER_128] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER128),
        .party = {.NoItemCustomMoves = sParty_TRAINER128},
    },

    [TRAINER_TRAINER_129] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER129),
        .party = {.NoItemCustomMoves = sParty_TRAINER129},
    },

    [TRAINER_TRAINER_130] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("SOLDADO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER130),
        .party = {.NoItemCustomMoves = sParty_TRAINER130},
    },

    [TRAINER_TRAINER_131] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LADRONJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("COREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER131),
        .party = {.NoItemCustomMoves = sParty_TRAINER131},
    },

    [TRAINER_TRAINER_132] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON2,
        .trainerName = _("TAABAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER132),
        .party = {.ItemCustomMoves = sParty_TRAINER132},
    },

    [TRAINER_TRAINER_133] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON3,
        .trainerName = _("OVERQWILL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER133),
        .party = {.ItemCustomMoves = sParty_TRAINER133},
    },

    [TRAINER_TRAINER_134] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON1,
        .trainerName = _("IKARY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER134),
        .party = {.ItemCustomMoves = sParty_TRAINER134},
    },

    [TRAINER_TRAINER_135] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON1,
        .trainerName = _("IKARY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER135),
        .party = {.ItemCustomMoves = sParty_TRAINER135},
    },

    [TRAINER_TRAINER_136] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON4,
        .trainerName = _("AKUERIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER136),
        .party = {.ItemCustomMoves = sParty_TRAINER136},
    },

    [TRAINER_TRAINER_137] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON5,
        .trainerName = _("DUN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER137),
        .party = {.ItemCustomMoves = sParty_TRAINER137},
    },

    [TRAINER_TRAINER_138] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER138),
        .party = {.ItemCustomMoves = sParty_TRAINER138},
    },

    [TRAINER_TRAINER_139] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER139),
        .party = {.ItemCustomMoves = sParty_TRAINER139},
    },

    [TRAINER_TRAINER_140] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER140),
        .party = {.ItemCustomMoves = sParty_TRAINER140},
    },

    [TRAINER_TRAINER_141] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER141),
        .party = {.ItemCustomMoves = sParty_TRAINER141},
    },

    [TRAINER_TRAINER_142] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER142),
        .party = {.ItemCustomMoves = sParty_TRAINER142},
    },

    [TRAINER_TRAINER_143] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER143),
        .party = {.ItemCustomMoves = sParty_TRAINER143},
    },

    [TRAINER_TRAINER_144] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXPERIMENTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FAKEMON6,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER144),
        .party = {.ItemCustomMoves = sParty_TRAINER144},
    },

    [TRAINER_TRAINER_145] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ANCIENT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GHOST,
        .trainerName = _("GHOST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER145),
        .party = {.ItemCustomMoves = sParty_TRAINER145},
    },

    [TRAINER_TRAINER_146] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MIGUEL_2,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER146),
        .party = {.NoItemCustomMoves = sParty_TRAINER146},
    },

    [TRAINER_TRAINER_147] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HYPNO,
        .trainerName = _("HYPNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER147),
        .party = {.ItemCustomMoves = sParty_TRAINER147},
    },

    [TRAINER_TRAINER_148] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HYPNO,
        .trainerName = _("HYPNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER148),
        .party = {.ItemCustomMoves = sParty_TRAINER148},
    },

    [TRAINER_TRAINER_149] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HYPNO,
        .trainerName = _("HYPNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER149),
        .party = {.ItemCustomMoves = sParty_TRAINER149},
    },

    [TRAINER_TRAINER_150] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SALVAJE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HYPNO,
        .trainerName = _("HYPNO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER150),
        .party = {.ItemCustomMoves = sParty_TRAINER150},
    },

    [TRAINER_TRAINER_151] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_AVES,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO,
        .trainerName = _("ZAPDOS-P"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER151),
        .party = {.ItemCustomMoves = sParty_TRAINER151},
    },

    [TRAINER_TRAINER_152] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PROTON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("FRANK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER152),
        .party = {.ItemCustomMoves = sParty_TRAINER152},
    },

    [TRAINER_TRAINER_153] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ADMINISTRADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("FRANK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER153),
        .party = {.ItemCustomMoves = sParty_TRAINER153},
    },

    [TRAINER_TRAINER_154] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PROTON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER154),
        .party = {.ItemCustomMoves = sParty_TRAINER154},
    },

    [TRAINER_TRAINER_155] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PROTON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER155),
        .party = {.ItemCustomMoves = sParty_TRAINER155},
    },

    [TRAINER_TRAINER_156] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("CRUZ"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER156),
        .party = {.NoItemCustomMoves = sParty_TRAINER156},
    },

    [TRAINER_TRAINER_157] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("HUGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER157),
        .party = {.NoItemCustomMoves = sParty_TRAINER157},
    },

    [TRAINER_TRAINER_158] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("FABIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER158),
        .party = {.NoItemCustomMoves = sParty_TRAINER158},
    },

    [TRAINER_TRAINER_159] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("RUBEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER159),
        .party = {.NoItemCustomMoves = sParty_TRAINER159},
    },

    [TRAINER_TRAINER_160] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("RAYCO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER160),
        .party = {.NoItemCustomMoves = sParty_TRAINER160},
    },

    [TRAINER_TRAINER_161] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_CALVOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MATONJOHTO,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        .trainerName = _("ROI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER161),
        .party = {.NoItemCustomMoves = sParty_TRAINER161},
    },

    [TRAINER_TRAINER_162] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER162),
        .party = {.NoItemCustomMoves = sParty_TRAINER162},
    },

    [TRAINER_TRAINER_163] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER163),
        .party = {.NoItemCustomMoves = sParty_TRAINER163},
    },

    [TRAINER_TRAINER_164] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER164),
        .party = {.NoItemCustomMoves = sParty_TRAINER164},
    },

    [TRAINER_TRAINER_165] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("GINES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER165),
        .party = {.NoItemCustomMoves = sParty_TRAINER165},
    },

    [TRAINER_TRAINER_166] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("NINO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER166),
        .party = {.NoItemCustomMoves = sParty_TRAINER166},
    },

    [TRAINER_TRAINER_167] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ASTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER167),
        .party = {.NoItemCustomMoves = sParty_TRAINER167},
    },

    [TRAINER_TRAINER_168] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("POLI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER168),
        .party = {.NoItemCustomMoves = sParty_TRAINER168},
    },

    [TRAINER_TRAINER_169] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_GENTLEMAN,
        .trainerName = _("TRIFON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER169),
        .party = {.NoItemCustomMoves = sParty_TRAINER169},
    },

    [TRAINER_TRAINER_170] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("TOM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER170),
        .party = {.NoItemCustomMoves = sParty_TRAINER170},
    },

    [TRAINER_TRAINER_171] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
        .trainerName = _("ROBERTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER171),
        .party = {.NoItemCustomMoves = sParty_TRAINER171},
    },

    [TRAINER_TRAINER_172] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("NINO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER172),
        .party = {.NoItemCustomMoves = sParty_TRAINER172},
    },

    [TRAINER_TRAINER_173] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("ROGER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER173),
        .party = {.NoItemCustomMoves = sParty_TRAINER173},
    },

    [TRAINER_TRAINER_174] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("KEVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER174),
        .party = {.NoItemCustomMoves = sParty_TRAINER174},
    },

    [TRAINER_TRAINER_175] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("MARTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER175),
        .party = {.NoItemCustomMoves = sParty_TRAINER175},
    },

    [TRAINER_TRAINER_176] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("ESTEFAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER176),
        .party = {.NoItemCustomMoves = sParty_TRAINER176},
    },

    [TRAINER_TRAINER_177] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PESCADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_FISHERMAN,
        .trainerName = _("REMO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER177),
        .party = {.NoItemCustomMoves = sParty_TRAINER177},
    },

    [TRAINER_TRAINER_178] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
        .trainerName = _("BALDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER178),
        .party = {.NoItemCustomMoves = sParty_TRAINER178},
    },

    [TRAINER_TRAINER_179] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ORNITOLOGO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_BIRD_KEEPER,
        .trainerName = _("PAOLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER179),
        .party = {.NoItemCustomMoves = sParty_TRAINER179},
    },

    [TRAINER_TRAINER_180] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
        .trainerName = _("JOSUE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER180),
        .party = {.NoItemCustomMoves = sParty_TRAINER180},
    },

    [TRAINER_TRAINER_181] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_JUGADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_GAMER,
        .trainerName = _("ALEX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER181),
        .party = {.NoItemCustomMoves = sParty_TRAINER181},
    },

    [TRAINER_TRAINER_182] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_FR_HIKER,
        .trainerName = _("PEPIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER182),
        .party = {.NoItemCustomMoves = sParty_TRAINER182},
    },

    [TRAINER_TRAINER_183] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_POLICIA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_HGSS_OFFICER,
        .trainerName = _("RADIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER183),
        .party = {.NoItemCustomMoves = sParty_TRAINER183},
    },

    [TRAINER_TRAINER_184] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_RECLUTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("ALTO RANGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER184),
        .party = {.NoItemCustomMoves = sParty_TRAINER184},
    },

    [TRAINER_TRAINER_185] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PROTON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("TEAM ROCKET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER185),
        .party = {.NoItemCustomMoves = sParty_TRAINER185},
    },

    [TRAINER_TRAINER_186] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("NAIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER186),
        .party = {.NoItemCustomMoves = sParty_TRAINER186},
    },

    [TRAINER_TRAINER_187] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("JOANIX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER187),
        .party = {.NoItemCustomMoves = sParty_TRAINER187},
    },

    [TRAINER_TRAINER_188] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("ENEAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER188),
        .party = {.NoItemCustomMoves = sParty_TRAINER188},
    },

    [TRAINER_TRAINER_189] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("MOISES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER189),
        .party = {.NoItemCustomMoves = sParty_TRAINER189},
    },

    [TRAINER_TRAINER_190] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("EDGAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER190),
        .party = {.NoItemCustomMoves = sParty_TRAINER190},
    },

    [TRAINER_TRAINER_191] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("ASHUR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER191),
        .party = {.NoItemCustomMoves = sParty_TRAINER191},
    },

    [TRAINER_TRAINER_192] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("SAUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER192),
        .party = {.NoItemCustomMoves = sParty_TRAINER192},
    },

    [TRAINER_TRAINER_193] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("UXIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER193),
        .party = {.NoItemCustomMoves = sParty_TRAINER193},
    },

    [TRAINER_TRAINER_194] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_ADMINISTRADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("PETREL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER194),
        .party = {.ItemCustomMoves = sParty_TRAINER194},
    },

    [TRAINER_TRAINER_195] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_KOGA,
        .trainerName = _("KOGA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER195),
        .party = {.ItemCustomMoves = sParty_TRAINER195},
    },

    [TRAINER_TRAINER_196] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_KANTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_LT_SURGE,
        .trainerName = _("LT.SURGE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER196),
        .party = {.ItemCustomMoves = sParty_TRAINER196},
    },

    [TRAINER_TRAINER_197] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("OMAR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER197),
        .party = {.NoItemCustomMoves = sParty_TRAINER197},
    },

    [TRAINER_TRAINER_198] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("IRUEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER198),
        .party = {.NoItemCustomMoves = sParty_TRAINER198},
    },

    [TRAINER_TRAINER_199] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("BENTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER199),
        .party = {.NoItemCustomMoves = sParty_TRAINER199},
    },

    [TRAINER_TRAINER_200] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("OTTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER200),
        .party = {.NoItemCustomMoves = sParty_TRAINER200},
    },

     [TRAINER_TRAINER_201] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ENZO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER201),
        .party = {.NoItemCustomMoves = sParty_TRAINER201},
    },

     [TRAINER_TRAINER_202] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("TEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER202),
        .party = {.NoItemCustomMoves = sParty_TRAINER202},
    },

     [TRAINER_TRAINER_203] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("MATEU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER203),
        .party = {.NoItemCustomMoves = sParty_TRAINER203},
    },

     [TRAINER_TRAINER_204] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ARTUR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER204),
        .party = {.NoItemCustomMoves = sParty_TRAINER204},
    },

     [TRAINER_TRAINER_205] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ROI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER205),
        .party = {.NoItemCustomMoves = sParty_TRAINER205},
    },

    [TRAINER_TRAINER_206] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("JULIEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER206),
        .party = {.NoItemCustomMoves = sParty_TRAINER206},
    },

    [TRAINER_TRAINER_207] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("ELIAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER207),
        .party = {.NoItemCustomMoves = sParty_TRAINER207},
    },

[TRAINER_TRAINER_208] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("TADEU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER208),
        .party = {.NoItemCustomMoves = sParty_TRAINER208},
    },

    [TRAINER_TRAINER_209] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("FILIPE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER209),
        .party = {.NoItemCustomMoves = sParty_TRAINER209},
    },

    [TRAINER_TRAINER_210] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("EDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER210),
        .party = {.NoItemCustomMoves = sParty_TRAINER210},
    },

    [TRAINER_TRAINER_211] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("JURGEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER211),
        .party = {.NoItemCustomMoves = sParty_TRAINER211},
    },

    [TRAINER_TRAINER_212] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("TETSUO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER212),
        .party = {.NoItemCustomMoves = sParty_TRAINER212},
    },

    [TRAINER_TRAINER_213] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("MATEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER213),
        .party = {.ItemCustomMoves = sParty_TRAINER213},
    },

    [TRAINER_TRAINER_214] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOKANTO,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("JOAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER214),
        .party = {.ItemCustomMoves = sParty_TRAINER214},
    },

    [TRAINER_TRAINER_215] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MOTORISTA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("VICIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER215),
        .party = {.ItemCustomMoves = sParty_TRAINER215},
    },

    [TRAINER_TRAINER_216] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("EXPLOSIVOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER216),
        .party = {.ItemCustomMoves = sParty_TRAINER216},
    },

    [TRAINER_TRAINER_217] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAESTRO_TORRE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("MING"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER217),
        .party = {.ItemCustomMoves = sParty_TRAINER217},
    },

    [TRAINER_TRAINER_218] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAESTRO_TORRE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("MAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER218),
        .party = {.ItemCustomMoves = sParty_TRAINER218},
    },

    [TRAINER_TRAINER_219] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MAESTRO_TORRE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("SHEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER219),
        .party = {.ItemCustomMoves = sParty_TRAINER219},
    },

    [TRAINER_TRAINER_220] =
    {
        .partyFlags = F_TRAINER_PARTY_HELD_ITEM | F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_EXCAMPEON,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("LUNG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER220),
        .party = {.ItemCustomMoves = sParty_TRAINER220},
    },

    [TRAINER_TRAINER_221] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("IGNACIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER221),
        .party = {.NoItemCustomMoves = sParty_TRAINER221},
    },

    [TRAINER_TRAINER_222] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER222),
        .party = {.NoItemCustomMoves = sParty_TRAINER222},
    },

    [TRAINER_TRAINER_223] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_MECANICOJOHTO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO,
        .trainerPic = TRAINER_PIC_ENGINEER,
        .trainerName = _("MARC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER223),
        .party = {.NoItemCustomMoves = sParty_TRAINER223},
    },

    [TRAINER_TRAINER_224] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("HEGESIAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER224),
        .party = {.NoItemCustomMoves = sParty_TRAINER224},
    },

    [TRAINER_TRAINER_225] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("EUDOXO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER225),
        .party = {.NoItemCustomMoves = sParty_TRAINER225},
    },

    [TRAINER_TRAINER_226] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("CLAUDIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER226),
        .party = {.NoItemCustomMoves = sParty_TRAINER226},
    },

    [TRAINER_TRAINER_227] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("TIMEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER227),
        .party = {.NoItemCustomMoves = sParty_TRAINER227},
    },

    [TRAINER_TRAINER_228] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("EUSEBIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER228),
        .party = {.NoItemCustomMoves = sParty_TRAINER228},
    },

    [TRAINER_TRAINER_229] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_PENSADOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_PENSADOR,
        .trainerPic = TRAINER_PIC_PENSADOR,
        .trainerName = _("PILATOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER229),
        .party = {.NoItemCustomMoves = sParty_TRAINER229},
    },

    [TRAINER_TRAINER_230] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_SUPERNECIO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("GERO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER230),
        .party = {.NoItemCustomMoves = sParty_TRAINER230},
    },

    [TRAINER_TRAINER_231] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER231"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER231),
        .party = {.NoItemCustomMoves = sParty_TRAINER231},
    },

    [TRAINER_TRAINER_232] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER232"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER232),
        .party = {.NoItemCustomMoves = sParty_TRAINER232},
    },

    [TRAINER_TRAINER_233] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER233"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER233),
        .party = {.NoItemCustomMoves = sParty_TRAINER233},
    },

    [TRAINER_TRAINER_234] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER234"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER234),
        .party = {.NoItemCustomMoves = sParty_TRAINER234},
    },

    [TRAINER_TRAINER_235] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER235"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER235),
        .party = {.NoItemCustomMoves = sParty_TRAINER235},
    },

    [TRAINER_TRAINER_236] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER236"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER236),
        .party = {.NoItemCustomMoves = sParty_TRAINER236},
    },

    [TRAINER_TRAINER_237] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER237"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER237),
        .party = {.NoItemCustomMoves = sParty_TRAINER237},
    },

    [TRAINER_TRAINER_238] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER238"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER238),
        .party = {.NoItemCustomMoves = sParty_TRAINER238},
    },

    [TRAINER_TRAINER_239] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER239"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER239),
        .party = {.NoItemCustomMoves = sParty_TRAINER239},
    },

    [TRAINER_TRAINER_240] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER240"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER240),
        .party = {.NoItemCustomMoves = sParty_TRAINER240},
    },

    [TRAINER_TRAINER_241] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER241"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER241),
        .party = {.NoItemCustomMoves = sParty_TRAINER241},
    },

    [TRAINER_TRAINER_242] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER242"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER242),
        .party = {.NoItemCustomMoves = sParty_TRAINER242},
    },

    [TRAINER_TRAINER_243] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER243"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER243),
        .party = {.NoItemCustomMoves = sParty_TRAINER243},
    },

    [TRAINER_TRAINER_244] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER244"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER244),
        .party = {.NoItemCustomMoves = sParty_TRAINER244},
    },

    [TRAINER_TRAINER_245] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER245"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER245),
        .party = {.NoItemCustomMoves = sParty_TRAINER245},
    },

    [TRAINER_TRAINER_246] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER246"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER246),
        .party = {.NoItemCustomMoves = sParty_TRAINER246},
    },

    [TRAINER_TRAINER_247] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER247"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER247),
        .party = {.NoItemCustomMoves = sParty_TRAINER247},
    },

    [TRAINER_TRAINER_248] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER248"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER248),
        .party = {.NoItemCustomMoves = sParty_TRAINER248},
    },

    [TRAINER_TRAINER_249] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER249"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER249),
        .party = {.NoItemCustomMoves = sParty_TRAINER249},
    },

    [TRAINER_TRAINER_250] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER250"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER250),
        .party = {.NoItemCustomMoves = sParty_TRAINER250},
    },

    [TRAINER_TRAINER_251] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER251"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER251),
        .party = {.NoItemCustomMoves = sParty_TRAINER251},
    },

    [TRAINER_TRAINER_252] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER252"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER252),
        .party = {.NoItemCustomMoves = sParty_TRAINER252},
    },

    [TRAINER_TRAINER_253] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER253"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER253),
        .party = {.NoItemCustomMoves = sParty_TRAINER253},
    },

    [TRAINER_TRAINER_254] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER254"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER254),
        .party = {.NoItemCustomMoves = sParty_TRAINER254},
    },

    [TRAINER_TRAINER_255] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER255"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER255),
        .party = {.NoItemCustomMoves = sParty_TRAINER255},
    },

    [TRAINER_TRAINER_256] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER256"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER256),
        .party = {.NoItemCustomMoves = sParty_TRAINER256},
    },

    [TRAINER_TRAINER_257] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER257"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER257),
        .party = {.NoItemCustomMoves = sParty_TRAINER257},
    },

    [TRAINER_TRAINER_258] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER258"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER258),
        .party = {.NoItemCustomMoves = sParty_TRAINER258},
    },

    [TRAINER_TRAINER_259] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER259"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER259),
        .party = {.NoItemCustomMoves = sParty_TRAINER259},
    },

    [TRAINER_TRAINER_260] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER260"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER260),
        .party = {.NoItemCustomMoves = sParty_TRAINER260},
    },

    [TRAINER_TRAINER_261] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER261"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER261),
        .party = {.NoItemCustomMoves = sParty_TRAINER261},
    },

    [TRAINER_TRAINER_262] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER262"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER262),
        .party = {.NoItemCustomMoves = sParty_TRAINER262},
    },

    [TRAINER_TRAINER_263] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER263"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER263),
        .party = {.NoItemCustomMoves = sParty_TRAINER263},
    },

    [TRAINER_TRAINER_264] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER264"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER264),
        .party = {.NoItemCustomMoves = sParty_TRAINER264},
    },

    [TRAINER_TRAINER_265] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER265"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER265),
        .party = {.NoItemCustomMoves = sParty_TRAINER265},
    },

    [TRAINER_TRAINER_266] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER266"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER266),
        .party = {.NoItemCustomMoves = sParty_TRAINER266},
    },

    [TRAINER_TRAINER_267] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER267"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER267),
        .party = {.NoItemCustomMoves = sParty_TRAINER267},
    },

    [TRAINER_TRAINER_268] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER268"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER268),
        .party = {.NoItemCustomMoves = sParty_TRAINER268},
    },

    [TRAINER_TRAINER_269] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER269"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER269),
        .party = {.NoItemCustomMoves = sParty_TRAINER269},
    },

    [TRAINER_TRAINER_270] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER270"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER270),
        .party = {.NoItemCustomMoves = sParty_TRAINER270},
    },

    [TRAINER_TRAINER_271] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER271"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER271),
        .party = {.NoItemCustomMoves = sParty_TRAINER271},
    },

    [TRAINER_TRAINER_272] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER272"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER272),
        .party = {.NoItemCustomMoves = sParty_TRAINER272},
    },

    [TRAINER_TRAINER_273] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER273"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER273),
        .party = {.NoItemCustomMoves = sParty_TRAINER273},
    },

    [TRAINER_TRAINER_274] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER274"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER274),
        .party = {.NoItemCustomMoves = sParty_TRAINER274},
    },

    [TRAINER_TRAINER_275] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER275"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER275),
        .party = {.NoItemCustomMoves = sParty_TRAINER275},
    },

    [TRAINER_TRAINER_276] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER276"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER276),
        .party = {.NoItemCustomMoves = sParty_TRAINER276},
    },

    [TRAINER_TRAINER_277] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER277"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER277),
        .party = {.NoItemCustomMoves = sParty_TRAINER277},
    },

    [TRAINER_TRAINER_278] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER278"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER278),
        .party = {.NoItemCustomMoves = sParty_TRAINER278},
    },

    [TRAINER_TRAINER_279] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER279"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER279),
        .party = {.NoItemCustomMoves = sParty_TRAINER279},
    },

    [TRAINER_TRAINER_280] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER280"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER280),
        .party = {.NoItemCustomMoves = sParty_TRAINER280},
    },

    [TRAINER_TRAINER_281] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER281"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER281),
        .party = {.NoItemCustomMoves = sParty_TRAINER281},
    },

    [TRAINER_TRAINER_282] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER282"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER282),
        .party = {.NoItemCustomMoves = sParty_TRAINER282},
    },

    [TRAINER_TRAINER_283] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER283"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER283),
        .party = {.NoItemCustomMoves = sParty_TRAINER283},
    },

    [TRAINER_TRAINER_284] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER284"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER284),
        .party = {.NoItemCustomMoves = sParty_TRAINER284},
    },

    [TRAINER_TRAINER_285] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER285"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER285),
        .party = {.NoItemCustomMoves = sParty_TRAINER285},
    },

    [TRAINER_TRAINER_286] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER286"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER286),
        .party = {.NoItemCustomMoves = sParty_TRAINER286},
    },

    [TRAINER_TRAINER_287] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER287"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER287),
        .party = {.NoItemCustomMoves = sParty_TRAINER287},
    },

    [TRAINER_TRAINER_288] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER288"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER288),
        .party = {.NoItemCustomMoves = sParty_TRAINER288},
    },

    [TRAINER_TRAINER_289] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER289"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER289),
        .party = {.NoItemCustomMoves = sParty_TRAINER289},
    },

    [TRAINER_TRAINER_290] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER290"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER290),
        .party = {.NoItemCustomMoves = sParty_TRAINER290},
    },

    [TRAINER_TRAINER_291] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER291"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER291),
        .party = {.NoItemCustomMoves = sParty_TRAINER291},
    },

    [TRAINER_TRAINER_292] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER292"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER292),
        .party = {.NoItemCustomMoves = sParty_TRAINER292},
    },

    [TRAINER_TRAINER_293] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER293"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER293),
        .party = {.NoItemCustomMoves = sParty_TRAINER293},
    },

    [TRAINER_TRAINER_294] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER294"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER294),
        .party = {.NoItemCustomMoves = sParty_TRAINER294},
    },

    [TRAINER_TRAINER_295] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER295"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER295),
        .party = {.NoItemCustomMoves = sParty_TRAINER295},
    },

    [TRAINER_TRAINER_296] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER296"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER296),
        .party = {.NoItemCustomMoves = sParty_TRAINER296},
    },

    [TRAINER_TRAINER_297] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER297"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER297),
        .party = {.NoItemCustomMoves = sParty_TRAINER297},
    },

    [TRAINER_TRAINER_298] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER298"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER298),
        .party = {.NoItemCustomMoves = sParty_TRAINER298},
    },

    [TRAINER_TRAINER_299] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER299"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER299),
        .party = {.NoItemCustomMoves = sParty_TRAINER299},
    },

    [TRAINER_TRAINER_300] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER300"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER300),
        .party = {.NoItemCustomMoves = sParty_TRAINER300},
    },

[TRAINER_TRAINER_301] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER301"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER301),
        .party = {.NoItemCustomMoves = sParty_TRAINER301},
    },

     [TRAINER_TRAINER_302] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER302"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER302),
        .party = {.NoItemCustomMoves = sParty_TRAINER302},
    },

     [TRAINER_TRAINER_303] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER303"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER303),
        .party = {.NoItemCustomMoves = sParty_TRAINER303},
    },

     [TRAINER_TRAINER_304] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER304"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER304),
        .party = {.NoItemCustomMoves = sParty_TRAINER304},
    },

     [TRAINER_TRAINER_305] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER305"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER305),
        .party = {.NoItemCustomMoves = sParty_TRAINER305},
    },

    [TRAINER_TRAINER_306] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER306"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER306),
        .party = {.NoItemCustomMoves = sParty_TRAINER306},
    },

    [TRAINER_TRAINER_307] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER307"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER307),
        .party = {.NoItemCustomMoves = sParty_TRAINER307},
    },

[TRAINER_TRAINER_308] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER308"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER308),
        .party = {.NoItemCustomMoves = sParty_TRAINER308},
    },

    [TRAINER_TRAINER_309] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER309"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER309),
        .party = {.NoItemCustomMoves = sParty_TRAINER309},
    },

    [TRAINER_TRAINER_310] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER310"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER310),
        .party = {.NoItemCustomMoves = sParty_TRAINER310},
    },

    [TRAINER_TRAINER_311] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER311"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER311),
        .party = {.NoItemCustomMoves = sParty_TRAINER311},
    },

    [TRAINER_TRAINER_312] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER312"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER312),
        .party = {.NoItemCustomMoves = sParty_TRAINER312},
    },

    [TRAINER_TRAINER_313] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER313"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER313),
        .party = {.NoItemCustomMoves = sParty_TRAINER313},
    },

    [TRAINER_TRAINER_314] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER314"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER314),
        .party = {.NoItemCustomMoves = sParty_TRAINER314},
    },

    [TRAINER_TRAINER_315] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER315"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER315),
        .party = {.NoItemCustomMoves = sParty_TRAINER315},
    },

    [TRAINER_TRAINER_316] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER316"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER316),
        .party = {.NoItemCustomMoves = sParty_TRAINER316},
    },

    [TRAINER_TRAINER_317] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER317"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER317),
        .party = {.NoItemCustomMoves = sParty_TRAINER317},
    },

    [TRAINER_TRAINER_318] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER318"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER318),
        .party = {.NoItemCustomMoves = sParty_TRAINER318},
    },

    [TRAINER_TRAINER_319] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER319"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER319),
        .party = {.NoItemCustomMoves = sParty_TRAINER319},
    },

    [TRAINER_TRAINER_320] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER320"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER320),
        .party = {.NoItemCustomMoves = sParty_TRAINER320},
    },

    [TRAINER_TRAINER_321] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER321"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER321),
        .party = {.NoItemCustomMoves = sParty_TRAINER321},
    },

    [TRAINER_TRAINER_322] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER322"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER322),
        .party = {.NoItemCustomMoves = sParty_TRAINER322},
    },

    [TRAINER_TRAINER_323] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER323"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER323),
        .party = {.NoItemCustomMoves = sParty_TRAINER323},
    },

    [TRAINER_TRAINER_324] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER324"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER324),
        .party = {.NoItemCustomMoves = sParty_TRAINER324},
    },

    [TRAINER_TRAINER_325] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER325"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER325),
        .party = {.NoItemCustomMoves = sParty_TRAINER325},
    },

    [TRAINER_TRAINER_326] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER326"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER326),
        .party = {.NoItemCustomMoves = sParty_TRAINER326},
    },

    [TRAINER_TRAINER_327] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER327"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER327),
        .party = {.NoItemCustomMoves = sParty_TRAINER327},
    },

    [TRAINER_TRAINER_328] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER328"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER328),
        .party = {.NoItemCustomMoves = sParty_TRAINER328},
    },

    [TRAINER_TRAINER_329] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER329"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER329),
        .party = {.NoItemCustomMoves = sParty_TRAINER329},
    },

    [TRAINER_TRAINER_330] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER330"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER330),
        .party = {.NoItemCustomMoves = sParty_TRAINER330},
    },

    [TRAINER_TRAINER_331] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER331"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER331),
        .party = {.NoItemCustomMoves = sParty_TRAINER331},
    },

    [TRAINER_TRAINER_332] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER332"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER332),
        .party = {.NoItemCustomMoves = sParty_TRAINER332},
    },

    [TRAINER_TRAINER_333] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER333"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER333),
        .party = {.NoItemCustomMoves = sParty_TRAINER333},
    },

    [TRAINER_TRAINER_334] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER334"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER334),
        .party = {.NoItemCustomMoves = sParty_TRAINER334},
    },

    [TRAINER_TRAINER_335] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER335"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER335),
        .party = {.NoItemCustomMoves = sParty_TRAINER335},
    },

    [TRAINER_TRAINER_336] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER336"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER336),
        .party = {.NoItemCustomMoves = sParty_TRAINER336},
    },

    [TRAINER_TRAINER_337] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER337"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER337),
        .party = {.NoItemCustomMoves = sParty_TRAINER337},
    },

    [TRAINER_TRAINER_338] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER338"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER338),
        .party = {.NoItemCustomMoves = sParty_TRAINER338},
    },

    [TRAINER_TRAINER_339] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER339"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER339),
        .party = {.NoItemCustomMoves = sParty_TRAINER339},
    },

    [TRAINER_TRAINER_340] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER340"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER340),
        .party = {.NoItemCustomMoves = sParty_TRAINER340},
    },

    [TRAINER_TRAINER_341] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER341"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER341),
        .party = {.NoItemCustomMoves = sParty_TRAINER341},
    },

    [TRAINER_TRAINER_342] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER342"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER342),
        .party = {.NoItemCustomMoves = sParty_TRAINER342},
    },

    [TRAINER_TRAINER_343] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER343"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER343),
        .party = {.NoItemCustomMoves = sParty_TRAINER343},
    },

    [TRAINER_TRAINER_344] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER344"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER344),
        .party = {.NoItemCustomMoves = sParty_TRAINER344},
    },

    [TRAINER_TRAINER_345] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER345"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER345),
        .party = {.NoItemCustomMoves = sParty_TRAINER345},
    },

    [TRAINER_TRAINER_346] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER346"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER346),
        .party = {.NoItemCustomMoves = sParty_TRAINER346},
    },

    [TRAINER_TRAINER_347] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER347"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER347),
        .party = {.NoItemCustomMoves = sParty_TRAINER347},
    },

    [TRAINER_TRAINER_348] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER348"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER348),
        .party = {.NoItemCustomMoves = sParty_TRAINER348},
    },

    [TRAINER_TRAINER_349] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER349"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER349),
        .party = {.NoItemCustomMoves = sParty_TRAINER349},
    },

    [TRAINER_TRAINER_350] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER350"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER350),
        .party = {.NoItemCustomMoves = sParty_TRAINER350},
    },

    [TRAINER_TRAINER_351] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER351"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER351),
        .party = {.NoItemCustomMoves = sParty_TRAINER351},
    },

    [TRAINER_TRAINER_352] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER352"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER352),
        .party = {.NoItemCustomMoves = sParty_TRAINER352},
    },

    [TRAINER_TRAINER_353] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER353"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER353),
        .party = {.NoItemCustomMoves = sParty_TRAINER353},
    },

    [TRAINER_TRAINER_354] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER354"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER354),
        .party = {.NoItemCustomMoves = sParty_TRAINER354},
    },

    [TRAINER_TRAINER_355] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER355"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER355),
        .party = {.NoItemCustomMoves = sParty_TRAINER355},
    },

    [TRAINER_TRAINER_356] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER356"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER356),
        .party = {.NoItemCustomMoves = sParty_TRAINER356},
    },

    [TRAINER_TRAINER_357] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER357"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER357),
        .party = {.NoItemCustomMoves = sParty_TRAINER357},
    },

    [TRAINER_TRAINER_358] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER358"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER358),
        .party = {.NoItemCustomMoves = sParty_TRAINER358},
    },

    [TRAINER_TRAINER_359] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER359"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER359),
        .party = {.NoItemCustomMoves = sParty_TRAINER359},
    },

    [TRAINER_TRAINER_360] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER360"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER360),
        .party = {.NoItemCustomMoves = sParty_TRAINER360},
    },

    [TRAINER_TRAINER_361] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER361"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER361),
        .party = {.NoItemCustomMoves = sParty_TRAINER361},
    },

    [TRAINER_TRAINER_362] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER362"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER362),
        .party = {.NoItemCustomMoves = sParty_TRAINER362},
    },

    [TRAINER_TRAINER_363] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER363"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER363),
        .party = {.NoItemCustomMoves = sParty_TRAINER363},
    },

    [TRAINER_TRAINER_364] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER364"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER364),
        .party = {.NoItemCustomMoves = sParty_TRAINER364},
    },

    [TRAINER_TRAINER_365] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER365"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER365),
        .party = {.NoItemCustomMoves = sParty_TRAINER365},
    },

    [TRAINER_TRAINER_366] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER366"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER366),
        .party = {.NoItemCustomMoves = sParty_TRAINER366},
    },

    [TRAINER_TRAINER_367] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER367"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER367),
        .party = {.NoItemCustomMoves = sParty_TRAINER367},
    },

    [TRAINER_TRAINER_368] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER368"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER368),
        .party = {.NoItemCustomMoves = sParty_TRAINER368},
    },

    [TRAINER_TRAINER_369] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER369"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER369),
        .party = {.NoItemCustomMoves = sParty_TRAINER369},
    },

    [TRAINER_TRAINER_370] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER370"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER370),
        .party = {.NoItemCustomMoves = sParty_TRAINER370},
    },

    [TRAINER_TRAINER_371] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER371"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER371),
        .party = {.NoItemCustomMoves = sParty_TRAINER371},
    },

    [TRAINER_TRAINER_372] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER372"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER372),
        .party = {.NoItemCustomMoves = sParty_TRAINER372},
    },

    [TRAINER_TRAINER_373] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER373"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER373),
        .party = {.NoItemCustomMoves = sParty_TRAINER373},
    },

    [TRAINER_TRAINER_374] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER374"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER374),
        .party = {.NoItemCustomMoves = sParty_TRAINER374},
    },

    [TRAINER_TRAINER_375] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER375"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER375),
        .party = {.NoItemCustomMoves = sParty_TRAINER375},
    },

    [TRAINER_TRAINER_376] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER376"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER376),
        .party = {.NoItemCustomMoves = sParty_TRAINER376},
    },

    [TRAINER_TRAINER_377] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER377"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER377),
        .party = {.NoItemCustomMoves = sParty_TRAINER377},
    },

    [TRAINER_TRAINER_378] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER378"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER378),
        .party = {.NoItemCustomMoves = sParty_TRAINER378},
    },

    [TRAINER_TRAINER_379] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER379"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER379),
        .party = {.NoItemCustomMoves = sParty_TRAINER379},
    },

    [TRAINER_TRAINER_380] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER380"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER380),
        .party = {.NoItemCustomMoves = sParty_TRAINER380},
    },

    [TRAINER_TRAINER_381] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER381"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER381),
        .party = {.NoItemCustomMoves = sParty_TRAINER381},
    },

    [TRAINER_TRAINER_382] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER382"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER382),
        .party = {.NoItemCustomMoves = sParty_TRAINER382},
    },

    [TRAINER_TRAINER_383] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER383"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER383),
        .party = {.NoItemCustomMoves = sParty_TRAINER383},
    },

    [TRAINER_TRAINER_384] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER384"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER384),
        .party = {.NoItemCustomMoves = sParty_TRAINER384},
    },

    [TRAINER_TRAINER_385] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER385"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER385),
        .party = {.NoItemCustomMoves = sParty_TRAINER385},
    },

    [TRAINER_TRAINER_386] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER386"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER386),
        .party = {.NoItemCustomMoves = sParty_TRAINER386},
    },

    [TRAINER_TRAINER_387] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER387"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER387),
        .party = {.NoItemCustomMoves = sParty_TRAINER387},
    },

    [TRAINER_TRAINER_388] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER388"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER388),
        .party = {.NoItemCustomMoves = sParty_TRAINER388},
    },

    [TRAINER_TRAINER_389] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER389"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER389),
        .party = {.NoItemCustomMoves = sParty_TRAINER389},
    },

    [TRAINER_TRAINER_390] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER390"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER390),
        .party = {.NoItemCustomMoves = sParty_TRAINER390},
    },

    [TRAINER_TRAINER_391] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER391"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER391),
        .party = {.NoItemCustomMoves = sParty_TRAINER391},
    },

    [TRAINER_TRAINER_392] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER392"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER392),
        .party = {.NoItemCustomMoves = sParty_TRAINER392},
    },

    [TRAINER_TRAINER_393] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER393"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER393),
        .party = {.NoItemCustomMoves = sParty_TRAINER393},
    },

    [TRAINER_TRAINER_394] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER394"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER394),
        .party = {.NoItemCustomMoves = sParty_TRAINER394},
    },

    [TRAINER_TRAINER_395] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER395"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER395),
        .party = {.NoItemCustomMoves = sParty_TRAINER395},
    },

    [TRAINER_TRAINER_396] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER396"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER396),
        .party = {.NoItemCustomMoves = sParty_TRAINER396},
    },

    [TRAINER_TRAINER_397] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER397"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER397),
        .party = {.NoItemCustomMoves = sParty_TRAINER397},
    },

    [TRAINER_TRAINER_398] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER398"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER398),
        .party = {.NoItemCustomMoves = sParty_TRAINER398},
    },

    [TRAINER_TRAINER_399] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER399"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER399),
        .party = {.NoItemCustomMoves = sParty_TRAINER399},
    },

    [TRAINER_TRAINER_400] =
    {
        .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PEGASO_2,
        .trainerName = _("TRAINER400"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = ARRAY_COUNT(sParty_TRAINER400),
        .party = {.NoItemCustomMoves = sParty_TRAINER400},
    },

};
