MahoganyTown_Gym_MapScripts::
	.byte 0

MahoganyTownGym1::
end



MahoganyTownGym2::
end



MahoganyTownGym4::
end



MahoganyTownGym5::
end



MahoganyTownGym6::
end



MahoganyTownGym7::
end



MahoganyTownGym_EventScript_Guay::
	trainerbattle_single TRAINER_BRYAN, MahoganyTownGym_Text_GuayIntro, MahoganyTownGym_Text_GuayDefeated
	msgbox MahoganyTownGym_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MahoganyTownGym_Text_Guay2Intro, MahoganyTownGym_Text_Guay2Defeated
	msgbox MahoganyTownGym_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay3::
	trainerbattle_single TRAINER_ISABELLA, MahoganyTownGym_Text_Guay3Intro, MahoganyTownGym_Text_Guay3Defeated
	msgbox MahoganyTownGym_Text_Guay3PostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay4::
	trainerbattle_single TRAINER_GRUNT_JAGGED_PASS, MahoganyTownGym_Text_Guay4Intro, MahoganyTownGym_Text_Guay4Defeated
	msgbox MahoganyTownGym_Text_Guay4PostBattle, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_Combate_Fredo::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 164
goto_if_gt MahoganyTown_Gym_Combate_Fredo_2
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_1 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_2 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FREDO, MahoganyTown_Gym_Combate_Fredo_Texto_7
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_8 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_FRIGIBAX, 25, ITEM_NONE
waitfanfare
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox MahoganyTown_Gym_Combate_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM84
msgbox MahoganyTown_Gym_Combate_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox MahoganyTown_Gym_Combate_Texto_11.3 MSGBOX_NPC
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
setvar VAR_UNUSED_0x40F7, 165
release
end

MahoganyTown_Gym_Combate_Texto_11.1:
.string "Mmm... mereces esta MT, sin duda.$"

MahoganyTown_Gym_Combate_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT60 VAHO\n"
	.string "GELIDO de manos de ANIBAL!!$"

MahoganyTown_Gym_Combate_Texto_11.3:
.string "VAHO GELIDO siempre golpeará crítico,\n"
	.string "asegurándote siempre causar un buen\l"
	.string "daño.$"




MahoganyTown_Gym_Combate_Fredo_2::
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_12 MSGBOX_AUTOCLOSE
release
end

MahoganyTown_Gym_Combate_Fredo_Texto_1:
.string "FREDO: Oh, {PLAYER}, así que\n"
	.string "quieres retarme.$"

MahoganyTown_Gym_Combate_Fredo_Texto_2:
.string "Déjame decirte que llevo metido en\n"
	.string "el mundo de los POKÉMON TIPO HIELO\l"
	.string "desde hace 50 años, esa ALTO MANDO\l"
	.string "que tenéis en KANTO no ha\l"
	.string "alcanzado a ver la punta del\l"
	.string "iceberg de lo que yo he visto,\l"
	.string "¿entiendes?$"

MahoganyTown_Gym_Combate_Fredo_Texto_3:
.string "Muchos cambios se avecinan en\n"
	.string "JOHTO, solo espero poder estar a\l"
	.string "la altura y adaptarme a ellos.\l"
	.string "Espero poder ver la región\l"
	.string "prosperar junto con KANTO de una\l"
	.string "vez.$"

MahoganyTown_Gym_Combate_Fredo_Texto_4:
.string "...$"

MahoganyTown_Gym_Combate_Fredo_Texto_5:
.string "{PLAYER}, algo debes de haber hecho\n"
	.string "bien para, a tu corta edad, ocupar\l"
	.string "el lugar que ocupas en el TEAM\l"
	.string "ROCKET. Mereces que dé mi 100%.$"

MahoganyTown_Gym_Combate_Fredo_Texto_6:
.string "Nadie en décadas ha podido apagar\n"
	.string "la imperturbable voluntad de mis\l"
	.string "más antiguos compañeros de viaje.\l"
	.string "¡{PLAYER}!\l"
	.string "¡Vamos a ver el vínculo que has\l"
	.string "ido forjando con tu equipo!$"

MahoganyTown_Gym_Combate_Fredo_Texto_7:
.string "Esta vez sí que he jugado todas\n"
	.string "mis bazas... de verdad.$"

MahoganyTown_Gym_Combate_Fredo_Texto_8:
.string "Nadie ha estado cerca de poner\n"
	.string "este equipo en problemas, mucho\l"
	.string "menos a mis singulares MAMOSWINE\l"
	.string "y ARTICUNO. Creí que en KANTO solo\l"
	.string "había ENTRENADORES decentes, pero\l"
	.string "ninguno extraordinario. Me has\l"
	.string "demostrado que el mundo es mucho\l"
	.string "más amplio de lo que pensaba.$"

MahoganyTown_Gym_Combate_Fredo_Texto_9:
.string "Ten este POKÉMON, no podrás\n"
	.string "encontrarlo en ningún lugar de\l"
	.string "KANTO o JOHTO, y puede serte de\l"
	.string "utilidad.$"

MahoganyTown_Gym_Combate_Fredo_Texto_10:
.string "¡¡OBTUVISTE UN FRIGIBAX AL Nv.25!!$"

MahoganyTown_Gym_Combate_Fredo_Texto_11:
	.string "Hace décadas que guardo el secreto de\n"
	.string "este POKÉMON, el único\l"
	.string "PSEUDOLEGENDARIO del TIPO HIELO que\l"
	.string "verás. Si lo entrenas bien, muy pocos\l"
	.string "podrán igualar su poder físico.$"

MahoganyTown_Gym_Combate_Fredo_Texto_12:
.string "La primavera llega cuando se\n"
	.string "derriten el hielo y la nieve.\l"
	.string "Tú y tus POKÉMON pasaréis juntos\l"
	.string "muchos años, espero que disfrutéis\l"
	.string "de ese viaje. Confío en que ambos\l"
	.string "podamos ver a JOHTO florecer como\l"
	.string "nunca antes lo hizo.$"


MahoganyGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 164
goto_if_gt MahoganyGym_Gym_Dude_2
msgbox MahoganyGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

MahoganyGym_Gym_Dude_2::
msgbox MahoganyGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

MahoganyGym_Gym_Dude_Texto_1:
.string "¿De verdad vas a enfrentarte a\n"
	.string "FREDO en un combate de verdad?\l"
	.string "Déjame darte un consejo, ataca tú\l"
	.string "antes de que lo haga él, la\l"
	.string "ofensiva de sus POKÉMON TIPO HIELO\l"
	.string "es implacable. Deberás hacer uso\l"
	.string "de movimientos TIPO FUEGO, LUCHA o\l"
	.string "ROCA combinando rapidez y\l"
	.string "potencia.\l"
	.string "¡Suerte!$"

MahoganyGym_Gym_Dude_Texto_2:
.string "¡Lo has logrado!\n"
	.string "¡Has derrotado al hombre de hielo,\l"
	.string "creí que nadie podía con ese\l"
	.string "ARTICUNO tan especial!$"


MahoganyGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 130
goto_if_gt MahoganyGym_Estatua_2
msgbox MahoganyGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

MahoganyGym_Estatua_2::
msgbox MahoganyGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


MahoganyGym_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PUEBLO CAOBA: FREDO\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "(¡Está vacío!)$"

MahoganyGym_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PUEBLO CAOBA: FREDO\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "{PLAYER}$"
