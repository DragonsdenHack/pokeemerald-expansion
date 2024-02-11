const u8 gTrainerClassNames[][13] = {
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_HIKER] = _("HIKER"),
    [TRAINER_CLASS_TEAM_AQUA] = _("TEAM AQUA"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("{PKMN} BREEDER"),
    [TRAINER_CLASS_COOLTRAINER] = _("COOLTRAINER"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("BIRD KEEPER"),
    [TRAINER_CLASS_COLLECTOR] = _("COLLECTOR"),
    [TRAINER_CLASS_SWIMMER_M] = _("SWIMMER♂"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("TEAM MAGMA"),
    [TRAINER_CLASS_EXPERT] = _("EXPERT"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("AQUA ADMIN"),
    [TRAINER_CLASS_BLACK_BELT] = _("BLACK BELT"),
    [TRAINER_CLASS_AQUA_LEADER] = _("AQUA LEADER"),
    [TRAINER_CLASS_HEX_MANIAC] = _("HEX MANIAC"),
    [TRAINER_CLASS_AROMA_LADY] = _("AROMA LADY"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("RUIN MANIAC"),
    [TRAINER_CLASS_INTERVIEWER] = _("INTERVIEWER"),
    [TRAINER_CLASS_TUBER_F] = _("TUBER"),
    [TRAINER_CLASS_TUBER_M] = _("TUBER"),
    [TRAINER_CLASS_LADY] = _("LADY"),
    [TRAINER_CLASS_BEAUTY] = _("BEAUTY"),
    [TRAINER_CLASS_RICH_BOY] = _("RICH BOY"),
    [TRAINER_CLASS_POKEMANIAC] = _("POKéMANIAC"),
    [TRAINER_CLASS_GUITARIST] = _("GUITARIST"),
    [TRAINER_CLASS_KINDLER] = _("KINDLER"),
    [TRAINER_CLASS_CAMPER] = _("CAMPER"),
    [TRAINER_CLASS_PICNICKER] = _("PICNICKER"),
    [TRAINER_CLASS_BUG_MANIAC] = _("BUG MANIAC"),
    [TRAINER_CLASS_PSYCHIC] = _("PSYCHIC"),
    [TRAINER_CLASS_GENTLEMAN] = _("CABALLERO"),
    [TRAINER_CLASS_ELITE_FOUR] = _("ELITE FOUR"),
    [TRAINER_CLASS_LEADER] = _("CONSUL"),
    [TRAINER_CLASS_SCHOOL_KID] = _("SCHOOL KID"),
    [TRAINER_CLASS_SR_AND_JR] = _("SR. AND JR."),
    [TRAINER_CLASS_WINSTRATE] = _("WINSTRATE"),
    [TRAINER_CLASS_POKEFAN] = _("POKéFAN"),
    [TRAINER_CLASS_YOUNGSTER] = _("YOUNGSTER"),
    [TRAINER_CLASS_CHAMPION] = _("CHAMPION"),
    [TRAINER_CLASS_FISHERMAN] = _("FISHERMAN"),
    [TRAINER_CLASS_TRIATHLETE] = _("TRIATHLETE"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("DRAGON TAMER"),
    [TRAINER_CLASS_NINJA_BOY] = _("NINJA BOY"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("BATTLE GIRL"),
    [TRAINER_CLASS_PARASOL_LADY] = _("PARASOL LADY"),
    [TRAINER_CLASS_SWIMMER_F] = _("SWIMMER♀"),
    [TRAINER_CLASS_TWINS] = _("TWINS"),
    [TRAINER_CLASS_SAILOR] = _("SAILOR"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("COOLTRAINER"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("MAGMA ADMIN"),
    [TRAINER_CLASS_RIVAL] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_BUG_CATCHER] = _("BUG CATCHER"),
    [TRAINER_CLASS_PKMN_RANGER] = _("{PKMN} RANGER"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("LIDER MAGMA"),
    [TRAINER_CLASS_LASS] = _("LASS"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("YOUNG COUPLE"),
    [TRAINER_CLASS_OLD_COUPLE] = _("OLD COUPLE"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("SIS AND BRO"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("SALON MAIDEN"),
    [TRAINER_CLASS_DOME_ACE] = _("DOME ACE"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("PALACE MAVEN"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("ARENA TYCOON"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("FACTORY HEAD"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("PIKE QUEEN"),
    [TRAINER_CLASS_PYRAMID_KING] = _("PYRAMID KING"),
    [TRAINER_CLASS_RS_PROTAG] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_EMPERADOR] = _("EMPEROR"),
    [TRAINER_CLASS_ALTOMANDO] = _("ELITE FOUR"),
    [TRAINER_CLASS_CULTISTA] = _("CULTIST"),
    [TRAINER_CLASS_PRESIDENTE] = _("PRESIDENT"),
    [TRAINER_CLASS_GIOVANNI] = _("BOSS ROCKET"),
    [TRAINER_CLASS_ANDRA] = _("RIVAL"),
    [TRAINER_CLASS_MIGUEL] = _("POKEMANIAC"),
    [TRAINER_CLASS_ATLAS] = _("ADM. MANAGER"),
    [TRAINER_CLASS_OAK] = _("INVESTIGATOR"),
    [TRAINER_CLASS_KANTO] = _("KANTO LEADER"),
    [TRAINER_CLASS_JOHTO] = _("JOHTO LEADER"),
    [TRAINER_CLASS_SEVII] = _("EX-LEADER"),
    [TRAINER_CLASS_PROTON] = _("EXECUTIVE"),
    [TRAINER_CLASS_RECLUTA] = _("GRUNT"),
    [TRAINER_CLASS_ADMINISTRADOR] = _("ROCKET ADMIN"),
    [TRAINER_CLASS_ZEUS] = _("TRAVELLER"),
    [TRAINER_CLASS_JONES] = _("ESOTERIC"),
    [TRAINER_CLASS_DIOS] = _("GOD"),
    [TRAINER_CLASS_RIVALES] = _("TRAINER"),
    [TRAINER_CLASS_ESENCIA] = _("LEGEND"),
    [TRAINER_CLASS_AVES] = _("SACRED BIRD"),
    [TRAINER_CLASS_CAPITAN] = _("CAPTAIN"),
    [TRAINER_CLASS_EXCAMPEON] = _("EX-CHAMPION"),
    [TRAINER_CLASS_CAMPEON] = _("CHAMPION"),
    [TRAINER_CLASS_LIDER] = _("LEADER"),
    [TRAINER_CLASS_SINGULAR] = _("TRAINER"),
    [TRAINER_CLASS_BILL] = _("COLLECTOR"),
    [TRAINER_CLASS_ANCIENT] = _("LEGEND"),
    [TRAINER_CLASS_POLICIA] = _("OFFICER"),
    [TRAINER_CLASS_DOMADOR] = _("TAMER"),
    [TRAINER_CLASS_PESCADOR] = _("FISHERMAN"),
    [TRAINER_CLASS_GUAY] = _("COOLTRAINER"),
    [TRAINER_CLASS_FUJI] = _("{PKMN} BREEDER"),
    [TRAINER_CLASS_PAREJAGUAY] = _("COOL COUPLE"),
    [TRAINER_CLASS_CIENTIFICO] = _("SCIENTIST"),
    [TRAINER_CLASS_TRABAJADOR] = _("WORKER"),
    [TRAINER_CLASS_ORNITOLOGA] = _("BIRD KEEPER"),
    [TRAINER_CLASS_EXORCISTA] = _("EXORCISTA"),
    [TRAINER_CLASS_POKECOLECTOR] = _("COLLECTOR"),
    [TRAINER_CLASS_EXCULTISTA] = _("EX-CULTIST"),
    [TRAINER_CLASS_JOVEN] = _("YOUNGSTER"),
    [TRAINER_CLASS_CAZABICHOS] = _("BUG CATCHER"),
    [TRAINER_CLASS_CHICA] = _("GIRL"),
    [TRAINER_CLASS_NINJA] = _("NINJA BOY"),
    [TRAINER_CLASS_MARINERO] = _("SAILOR"),
    [TRAINER_CLASS_CAMPISTA] = _("CAMPER"),
    [TRAINER_CLASS_DOMINGUERA] = _("PICNICKER"),
    [TRAINER_CLASS_SUPERNECIO] = _("SUPER NERD"),
    [TRAINER_CLASS_MOTORISTA] = _("BIKER"),
    [TRAINER_CLASS_LADRONJOHTO] = _("BURGLAR"),
    [TRAINER_CLASS_LADRON] = _("BURGLAR"),
    [TRAINER_CLASS_SABIO] = _("SAGE"),
    [TRAINER_CLASS_INGENIERO] = _("ENGINEER"),
    [TRAINER_CLASS_NADADOR] = _("SWIMMER"),
    [TRAINER_CLASS_CALVO] = _("CUE BALL"),
    [TRAINER_CLASS_GUAYJOHTO] = _("COOLTRAINER"),
    [TRAINER_CLASS_JUGADOR] = _("PLAYER"),
    [TRAINER_CLASS_BELLA] = _("LADY"),
    [TRAINER_CLASS_NADADORA] = _("SWIMMER"),
    [TRAINER_CLASS_MEDIUM] = _("MEDIUM"),
    [TRAINER_CLASS_ROCKERO] = _("ROCKER"),
    [TRAINER_CLASS_JUGLAR] = _("JUGLAR"),
    [TRAINER_CLASS_ORNITOLOGO] = _("BIRD KEEPER"),
    [TRAINER_CLASS_KARATEKAJOHTO] = _("BLACK BELT"),
    [TRAINER_CLASS_MONTANEROJOHTO] = _("HIKER"),
    [TRAINER_CLASS_POKEABU] = _("EXPERT"),
    [TRAINER_CLASS_JOVENJOHTO] = _("YOUNGSTER"),
    [TRAINER_CLASS_DOMADORJOHTO] = _("TAMER"),
    [TRAINER_CLASS_POKEMANIACOJOHTO] = _("POKEMANIAC"),
    [TRAINER_CLASS_PESCADORJOHTO] = _("FISHERMAN"),
    [TRAINER_CLASS_ORNITOLOGOJOHTO] = _("BIRD KEEPER"),
    [TRAINER_CLASS_DOMINGUERAJOHTO] = _("PICNICKER"),
    [TRAINER_CLASS_GEMELAS] = _("TWINS"),
    [TRAINER_CLASS_PAREJAJOVEN] = _("YOUNG COUPLE"),
    [TRAINER_CLASS_DUOFUERTE] = _("STRONG DUO"),
    [TRAINER_CLASS_HERMANOS] = _("BROTHERS"),
    [TRAINER_CLASS_RUINAMANIACO] = _("RUINAMANIAC"),
    [TRAINER_CLASS_CHICAFUERTE] = _("STRONG LADY"),
    [TRAINER_CLASS_PLAYERA] = _("TUBER"),
    [TRAINER_CLASS_CRIAPOKEMON] = _("{PKMN} BREEDER"),
    [TRAINER_CLASS_POKEGUARDA] = _("{PKMN} RANGER"),
    [TRAINER_CLASS_SRAAROMA] = _("AROMA LADY"),
    [TRAINER_CLASS_DAMISELA] = _("LADY"),
    [TRAINER_CLASS_PINTORA] = _("PAINTER"),
    [TRAINER_CLASS_POKEGUARDAJOHTO] = _("{PKMN} RANGER"),
    [TRAINER_CLASS_MALABARISTA] = _("JUGGLER"),
    [TRAINER_CLASS_JUGONJOHTO] = _("GAMER"),
    [TRAINER_CLASS_CAZABICHOSJOHTO] = _("BUG CATCHER"),
    [TRAINER_CLASS_PENSADOR] = _("SAGE"),
    [TRAINER_CLASS_MECANICOJOHTO] = _("MECHANIC"),
    [TRAINER_CLASS_RUINAMANIACOJOHTO] = _("RUINAMANIACO"),
    [TRAINER_CLASS_NADADORJOHTO] = _("SWIMMER"),
    [TRAINER_CLASS_RICO] = _("RICH"),
    [TRAINER_CLASS_CALVOJOHTO] = _("CUE BALL"),
    [TRAINER_CLASS_SUPERNECIOJOHTO] = _("SUPERNERD"),
    [TRAINER_CLASS_CABALLEROJOHTO] = _("GENTLEMAN"),
    [TRAINER_CLASS_BELLAJOHTO] = _("LADY"),
    [TRAINER_CLASS_CHICAJOHTO] = _("GIRL"),
    [TRAINER_CLASS_MALABARISTAJOHTO] = _("JUGGLER"),
    [TRAINER_CLASS_PAREJAJOHTO] = _("COUPLE"),
    [TRAINER_CLASS_CRIAPOKEMONJOHTO] = _("{PKMN} BREEDER"),
    [TRAINER_CLASS_MENTALISTAJOHTO] = _("MEDIUM"),
    [TRAINER_CLASS_PINTORAJOHTO] = _("PAINTER"),
    [TRAINER_CLASS_MARINEROJOHTO] = _("SAILOR"),
    [TRAINER_CLASS_NADADORAJOHTO] = _("SWIMMER"),
    [TRAINER_CLASS_CHICAFUERTEJOHTO] = _("STRONG LADY"),
    [TRAINER_CLASS_ELM] = _("{PKMN} PROFESSOR"),
    [TRAINER_CLASS_KIMONO] = _("KIMONO GIRL"),
    [TRAINER_CLASS_COMEFUEGO] = _("FIREBREATHER"),
    [TRAINER_CLASS_FARERO] = _("L. KEEPER"),
    [TRAINER_CLASS_MONTANEROHOENN] = _("HIKER"),
    [TRAINER_CLASS_CIENTIFICOHOENN] = _("SCIENTIST"),
    [TRAINER_CLASS_MAESTRO] = _("OLD MASTER"),
    [TRAINER_CLASS_MOTORISTAJOHTO] = _("BIKER"),
    [TRAINER_CLASS_CIENTIFICOJOHTO] = _("SCIENTIST"),
    [TRAINER_CLASS_POLICIAHOENN] = _("OFFICER"),
    [TRAINER_CLASS_SALVAJE] = _("WILD"),
    [TRAINER_CLASS_EXPERIMENTO] = _("EXPERIMENT"),
    [TRAINER_CLASS_MIRTO] = _("CHAMPION"),
    [TRAINER_CLASS_MIGUEL_1] = _("D.SCIENTIST"),
    [TRAINER_CLASS_MIGUEL_2] = _("D.SCIENTIST"),
    [TRAINER_CLASS_DEVON_CIENTIFICO] = _("SCIENTIST"),
    [TRAINER_CLASS_EUSINE] = _("TRAVELLER"),
    [TRAINER_CLASS_MAESTRO_DUN] = _("DUN MASTER"),
    [TRAINER_CLASS_ADMINDEVON] = _("DEVON ADMIN"),
    [TRAINER_CLASS_MAESTRO_TORRE] = _("DUN MASTER"),
    [TRAINER_CLASS_COLEGIAL] = _("SCHOOL KID"),
    [TRAINER_CLASS_MAESTRA] = _("TEACHER"),
    [TRAINER_CLASS_POKEFAN_2] = _("POKÉFAN")

};
