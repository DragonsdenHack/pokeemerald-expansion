const u8 gTrainerClassNames[][13] = {
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_HIKER] = _("MONTAÑERO"),
    [TRAINER_CLASS_TEAM_AQUA] = _("EQUIPO AQUA"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("CRIAPOKÉMON"),
    [TRAINER_CLASS_COOLTRAINER] = _("ENTRE.GUAY"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("ORNITÓLOGO"),
    [TRAINER_CLASS_COLLECTOR] = _("POKÉCOLECTOR"),
    [TRAINER_CLASS_SWIMMER_M] = _("NADADOR"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("EQUIPO MAGMA"),
    [TRAINER_CLASS_EXPERT] = _("POKEABU"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("AQUA ADMIN"),
    [TRAINER_CLASS_BLACK_BELT] = _("KARATEKA"),
    [TRAINER_CLASS_AQUA_LEADER] = _("LIDER AQUA"),
    [TRAINER_CLASS_HEX_MANIAC] = _("HEX MANIAC"),
    [TRAINER_CLASS_AROMA_LADY] = _("CHICA AROMA"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("RUINAMANÍACO"),
    [TRAINER_CLASS_INTERVIEWER] = _("INTERVIEWER"),
    [TRAINER_CLASS_TUBER_F] = _("PLAYERA"),
    [TRAINER_CLASS_TUBER_M] = _("PLAYERO"),
    [TRAINER_CLASS_LADY] = _("DAMISELA"),
    [TRAINER_CLASS_BEAUTY] = _("BELLA"),
    [TRAINER_CLASS_RICH_BOY] = _("RICH BOY"),
    [TRAINER_CLASS_POKEMANIAC] = _("POKéMANIACO"),
    [TRAINER_CLASS_GUITARIST] = _("GUITARRISTA"),
    [TRAINER_CLASS_KINDLER] = _("FOGONERO"),
    [TRAINER_CLASS_CAMPER] = _("CAMPISTA"),
    [TRAINER_CLASS_PICNICKER] = _("DOMINGUERA"),
    [TRAINER_CLASS_BUG_MANIAC] = _("BICHOMANIACO"),
    [TRAINER_CLASS_PSYCHIC] = _("MÉDIUM"),
    [TRAINER_CLASS_GENTLEMAN] = _("CABALLERO"),
    [TRAINER_CLASS_ELITE_FOUR] = _("ELITE FOUR"),
    [TRAINER_CLASS_LEADER] = _("CÓNSUL"),
    [TRAINER_CLASS_SCHOOL_KID] = _("ESCOLAR"),
    [TRAINER_CLASS_SR_AND_JR] = _("ESTUDIANTES"),
    [TRAINER_CLASS_WINSTRATE] = _("WINSTRATE"),
    [TRAINER_CLASS_POKEFAN] = _("POKéFAN"),
    [TRAINER_CLASS_YOUNGSTER] = _("JOVEN"),
    [TRAINER_CLASS_CHAMPION] = _("CHAMPION"),
    [TRAINER_CLASS_FISHERMAN] = _("PESCADOR"),
    [TRAINER_CLASS_TRIATHLETE] = _("TRIATLETA"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("DOMADRAGÓN"),
    [TRAINER_CLASS_NINJA_BOY] = _("NINJA BOY"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("LUCHADORA"),
    [TRAINER_CLASS_PARASOL_LADY] = _("DAMA PARASOL"),
    [TRAINER_CLASS_SWIMMER_F] = _("NADADORA"),
    [TRAINER_CLASS_TWINS] = _("GEMELAS"),
    [TRAINER_CLASS_SAILOR] = _("MARINERO"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("COOLTRAINER"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("MAGMA ADMIN"),
    [TRAINER_CLASS_RIVAL] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_BUG_CATCHER] = _("CAZABICHOS"),
    [TRAINER_CLASS_PKMN_RANGER] = _("POKÉGUARDA"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("LIDER MAGMA"),
    [TRAINER_CLASS_LASS] = _("CHICA"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("PAREJA JOVEN"),
    [TRAINER_CLASS_OLD_COUPLE] = _("PAREJA MAYOR"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("HERMANOS"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("SALON MAIDEN"),
    [TRAINER_CLASS_DOME_ACE] = _("DOME ACE"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("PALACE MAVEN"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("ARENA TYCOON"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("FACTORY HEAD"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("REINA SIERPE"),
    [TRAINER_CLASS_PYRAMID_KING] = _("PYRAMID KING"),
    [TRAINER_CLASS_RS_PROTAG] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_EMPERADOR] = _("EMPERADOR"),
    [TRAINER_CLASS_ALTOMANDO] = _("ALTO MANDO"),
    [TRAINER_CLASS_CULTISTA] = _("CULTISTA"),
    [TRAINER_CLASS_PRESIDENTE] = _("PRESIDENTE"),
    [TRAINER_CLASS_GIOVANNI] = _("JEFE ROCKET"),
    [TRAINER_CLASS_ANDRA] = _("RIVAL"),
    [TRAINER_CLASS_MIGUEL] = _("POKEMANIACO"),
    [TRAINER_CLASS_ATLAS] = _("ADMIN.JEFE"),
    [TRAINER_CLASS_OAK] = _("INVESTIGADOR"),
    [TRAINER_CLASS_KANTO] = _("LIDER KANTO"),
    [TRAINER_CLASS_JOHTO] = _("LIDER JOHTO"),
    [TRAINER_CLASS_SEVII] = _("EXLIDER SETE"),
    [TRAINER_CLASS_PROTON] = _("EJECUTIVO"),
    [TRAINER_CLASS_RECLUTA] = _("RECLUTA"),
    [TRAINER_CLASS_ADMINISTRADOR] = _("ROCKET ADMIN"),
    [TRAINER_CLASS_ZEUS] = _("VIAJERO"),
    [TRAINER_CLASS_JONES] = _("ESOTERICO"),
    [TRAINER_CLASS_DIOS] = _("DIOS"),
    [TRAINER_CLASS_RIVALES] = _("ENTRENADOR"),
    [TRAINER_CLASS_ESENCIA] = _("LEYENDA"),
    [TRAINER_CLASS_AVES] = _("AVE SAGRADA"),
    [TRAINER_CLASS_CAPITAN] = _("CAPITAN"),
    [TRAINER_CLASS_EXCAMPEON] = _("EXCAMPEON"),
    [TRAINER_CLASS_CAMPEON] = _("CAMPEON"),
    [TRAINER_CLASS_LIDER] = _("LIDER"),
    [TRAINER_CLASS_SINGULAR] = _("ENTRENADOR"),
    [TRAINER_CLASS_BILL] = _("COLECTOR"),
    [TRAINER_CLASS_ANCIENT] = _("LEYENDA"),
    [TRAINER_CLASS_POLICIA] = _("POLICIA"),
    [TRAINER_CLASS_DOMADOR] = _("DOMADOR"),
    [TRAINER_CLASS_PESCADOR] = _("PESCADOR"),
    [TRAINER_CLASS_GUAY] = _("ENTRE.GUAY"),
    [TRAINER_CLASS_FUJI] = _("CRIAPOKEMON"),
    [TRAINER_CLASS_PAREJAGUAY] = _("PAREJA GUAY"),
    [TRAINER_CLASS_CIENTIFICO] = _("CIENTIFICO"),
    [TRAINER_CLASS_TRABAJADOR] = _("TRABAJADOR"),
    [TRAINER_CLASS_ORNITOLOGA] = _("ORNITOLOGA"),
    [TRAINER_CLASS_EXORCISTA] = _("EXORCISTA"),
    [TRAINER_CLASS_POKECOLECTOR] = _("POKECOLECTOR"),
    [TRAINER_CLASS_EXCULTISTA] = _("EXCULTISTA"),
    [TRAINER_CLASS_JOVEN] = _("JOVEN"),
    [TRAINER_CLASS_CAZABICHOS] = _("CAZABICHOS"),
    [TRAINER_CLASS_CHICA] = _("CHICA"),
    [TRAINER_CLASS_NINJA] = _("NINJA"),
    [TRAINER_CLASS_MARINERO] = _("MARINERO"),
    [TRAINER_CLASS_CAMPISTA] = _("CAMPISTA"),
    [TRAINER_CLASS_DOMINGUERA] = _("DOMINGUERA"),
    [TRAINER_CLASS_SUPERNECIO] = _("SUPERNECIO"),
    [TRAINER_CLASS_MOTORISTA] = _("MOTORISTA"),
    [TRAINER_CLASS_LADRONJOHTO] = _("LADRON"),
    [TRAINER_CLASS_LADRON] = _("LADRON"),
    [TRAINER_CLASS_SABIO] = _("SABIO"),
    [TRAINER_CLASS_INGENIERO] = _("INGENIERO"),
    [TRAINER_CLASS_NADADOR] = _("NADADOR"),
    [TRAINER_CLASS_CALVO] = _("CALVO"),
    [TRAINER_CLASS_GUAYJOHTO] = _("ENTRE.GUAY"),
    [TRAINER_CLASS_JUGADOR] = _("JUGADOR"),
    [TRAINER_CLASS_BELLA] = _("BELLA"),
    [TRAINER_CLASS_NADADORA] = _("NADADORA"),
    [TRAINER_CLASS_MEDIUM] = _("MEDIUM"),
    [TRAINER_CLASS_ROCKERO] = _("ROCKERO"),
    [TRAINER_CLASS_JUGLAR] = _("JUGLAR"),
    [TRAINER_CLASS_ORNITOLOGO] = _("ORNITOLOGO"),
    [TRAINER_CLASS_KARATEKAJOHTO] = _("KARATEKA"),
    [TRAINER_CLASS_MONTANEROJOHTO] = _("MONTAÑERO"),
    [TRAINER_CLASS_POKEABU] = _("POKEABU"),
    [TRAINER_CLASS_JOVENJOHTO] = _("JOVEN"),
    [TRAINER_CLASS_DOMADORJOHTO] = _("DOMADOR"),
    [TRAINER_CLASS_POKEMANIACOJOHTO] = _("POKEMANIACO"),
    [TRAINER_CLASS_PESCADORJOHTO] = _("PESCADOR"),
    [TRAINER_CLASS_ORNITOLOGOJOHTO] = _("ORNITOLOGO"),
    [TRAINER_CLASS_DOMINGUERAJOHTO] = _("DOMINGUERA"),
    [TRAINER_CLASS_GEMELAS] = _("GEMELAS"),
    [TRAINER_CLASS_PAREJAJOVEN] = _("PAREJA JOVEN"),
    [TRAINER_CLASS_DUOFUERTE] = _("DUO FUERTE"),
    [TRAINER_CLASS_HERMANOS] = _("HERMANOS"),
    [TRAINER_CLASS_RUINAMANIACO] = _("RUINAMANIACO"),
    [TRAINER_CLASS_CHICAFUERTE] = _("CHICA FUERTE"),
    [TRAINER_CLASS_PLAYERA] = _("PLAYERA"),
    [TRAINER_CLASS_CRIAPOKEMON] = _("CRIAPOKEMON"),
    [TRAINER_CLASS_POKEGUARDA] = _("POKEGUARDA"),
    [TRAINER_CLASS_SRAAROMA] = _("SRA.AROMA"),
    [TRAINER_CLASS_DAMISELA] = _("DAMISELA"),
    [TRAINER_CLASS_PINTORA] = _("PINTORA"),
    [TRAINER_CLASS_POKEGUARDAJOHTO] = _("POKEGUARDA"),
    [TRAINER_CLASS_MALABARISTA] = _("MALABARISTA"),
    [TRAINER_CLASS_JUGONJOHTO] = _("JUGON"),
    [TRAINER_CLASS_CAZABICHOSJOHTO] = _("CAZABICHOS"),
    [TRAINER_CLASS_PENSADOR] = _("PENSADOR"),
    [TRAINER_CLASS_MECANICOJOHTO] = _("MECANICO"),
    [TRAINER_CLASS_RUINAMANIACOJOHTO] = _("RUINAMANIACO"),
    [TRAINER_CLASS_NADADORJOHTO] = _("NADADOR"),
    [TRAINER_CLASS_RICO] = _("RICO"),
    [TRAINER_CLASS_CALVOJOHTO] = _("CALVO"),
    [TRAINER_CLASS_SUPERNECIOJOHTO] = _("SUPERNECIO"),
    [TRAINER_CLASS_CABALLEROJOHTO] = _("CABALLERO"),
    [TRAINER_CLASS_BELLAJOHTO] = _("BELLA"),
    [TRAINER_CLASS_CHICAJOHTO] = _("CHICA"),
    [TRAINER_CLASS_MALABARISTAJOHTO] = _("MALABARISTA"),
    [TRAINER_CLASS_PAREJAJOHTO] = _("PAREJA"),
    [TRAINER_CLASS_CRIAPOKEMONJOHTO] = _("CRIAPOKEMON"),
    [TRAINER_CLASS_MENTALISTAJOHTO] = _("MENTALISTA"),
    [TRAINER_CLASS_PINTORAJOHTO] = _("PINTORA"),
    [TRAINER_CLASS_MARINEROJOHTO] = _("MARINERO"),
    [TRAINER_CLASS_NADADORAJOHTO] = _("NADADORA"),
    [TRAINER_CLASS_CHICAFUERTEJOHTO] = _("CHICA FUERTE"),
    [TRAINER_CLASS_ELM] = _("PROF.PKMN"),
    [TRAINER_CLASS_KIMONO] = _("CHICA KIMONO"),
    [TRAINER_CLASS_COMEFUEGO] = _("COMEFUEGO"),
    [TRAINER_CLASS_FARERO] = _("FARERO"),
    [TRAINER_CLASS_MONTANEROHOENN] = _("MONTAÑERO"),
    [TRAINER_CLASS_CIENTIFICOHOENN] = _("CIENTIFICO"),
    [TRAINER_CLASS_MAESTRO] = _("GRAN MAESTRO"),
    [TRAINER_CLASS_MOTORISTAJOHTO] = _("MOTORISTA"),
    [TRAINER_CLASS_CIENTIFICOJOHTO] = _("CIENTIFICO"),
    [TRAINER_CLASS_POLICIAHOENN] = _("POLICIA"),
    [TRAINER_CLASS_SALVAJE] = _("SALVAJE"),
    [TRAINER_CLASS_EXPERIMENTO] = _("EXPERIMENTO"),
    [TRAINER_CLASS_MIRTO] = _("CAMPEON"),
    [TRAINER_CLASS_MIGUEL_1] = _("C.DEVON"),
    [TRAINER_CLASS_MIGUEL_2] = _("C.DEVON"),
    [TRAINER_CLASS_DEVON_CIENTIFICO] = _("CIENTÍFICO"),
    [TRAINER_CLASS_EUSINE] = _("VIAJERO"),
    [TRAINER_CLASS_MAESTRO_DUN] = _("GRAN MAESTRO"),
    [TRAINER_CLASS_ADMINDEVON] = _("DEVON ADMIN"),
    [TRAINER_CLASS_MAESTRO_TORRE] = _("MAESTRO DUN"),
    [TRAINER_CLASS_COLEGIAL] = _("COLEGIAL"),
    [TRAINER_CLASS_MAESTRA] = _("MAESTRA"),
    [TRAINER_CLASS_POKEFAN_2] = _("POKÉFAN"),
    [TRAINER_CLASS_POLICIA_DEVON] = _("POLICÍA"),
    [TRAINER_CLASS_ELECTRICISTA_HOENN] = _("ELECTRICISTA"),
    [TRAINER_CLASS_KARATEKA_HOENN] = _("KARATEKA"),
    [TRAINER_CLASS_LEADER_HOENN] = _("LÍDER"),
    [TRAINER_CLASS_DOCTOR] = _("DOCTOR"),
    [TRAINER_CLASS_PROPIETARIA] = _("PROPIETARIA"),
    [TRAINER_CLASS_DOMADOR_HOENN] = _("DOMADOR"),
    [TRAINER_CLASS_NINJA_HOENN] = _("CHICO NINJA")

};
