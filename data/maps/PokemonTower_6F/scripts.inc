PokemonTower_6F_MapScripts::
	.byte 0

PokemonTower6F_1::
end



PokemonTower6F_2::
end



PokemonTower6F_3::
end



PokemonTower6F_4::
end



PokemonTower6F_5::
end



PokemonTower6F_EventScript_Channeler::
	trainerbattle_single TRAINER_SHARON, PokemonTower6F_Text_ChannelerIntro, PokemonTower6F_Text_ChannelerDefeated
	msgbox PokemonTower6F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler2::
	trainerbattle_single TRAINER_BRENDA, PokemonTower6F_Text_Channeler2Intro, PokemonTower6F_Text_Channeler2Defeated
	msgbox PokemonTower6F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler3::
	trainerbattle_single TRAINER_NIKKI, PokemonTower6F_Text_Channeler3Intro, PokemonTower6F_Text_Channeler3Defeated
	msgbox PokemonTower6F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_Combate_Fuji::
lock
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_1
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
delay 20
msgbox PokemonTower_6F_Combate_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_3
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
delay 20
msgbox PokemonTower_6F_Combate_Fuji_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_2
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_2
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_1
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_5
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_1
waitmovement 0x0
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FUJI_1, PokemonTower_6F_Combate_Fuji_Texto_9
delay 15
playse SE_PIN
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_3
waitmovement 0x0
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
delay 20
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 7
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_8
waitmovement 0x0
delay 40
playfanfare MUS_OBTAIN_ITEM
msgbox PokemonTower_6F_Combate_Fuji_Texto_10 MSGBOX_DEFAULT
waitfanfare
delay 40
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 11
applymovement 11, PokemonTower_6F_Combate_Fuji_Move_9
msgbox PokemonTower_6F_Combate_Fuji_Texto_11 MSGBOX_AUTOCLOSE
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_10
waitmovement 0x0
applymovement 11, PokemonTower_6F_Combate_Fuji_Move_11
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
fadescreen 1
delay 20
removeobject 6
removeobject 11
removeobject 8
removeobject 9
removeobject 10
fadescreen 0
setvar VAR_UNUSED_0x40F7, 48
release
end

PokemonTower_6F_Combate_Fuji_Texto_1:
.string "RECLUTAS: ¡Vaya con el viejete, no\n"
	.string "hemos podido abatirte siquiera los\l"
	.string "3 al mismo tiempo!$"

PokemonTower_6F_Combate_Fuji_Texto_2:
.string "FUJI: Inconscientes, le habéis\n"
	.string "privado a este CUBONE de su figura\l"
	.string "materna, y todo por dinero, el\l"
	.string "daño ya es irreparable, abandonad\l"
	.string "este lugar antes de que sea tarde.$"

PokemonTower_6F_Combate_Fuji_Texto_3:
.string "RECLUTAS: ¡Vamos ese MAROWAK se\n"
	.string "interpuso en nuestro camino!\l"
	.string "¡Nos forzó a acabar con su vida,\l"
	.string "nada más!$"

PokemonTower_6F_Combate_Fuji_Texto_4:
.string "FUJI: Ya veo, el resultado es lo\n"
	.string "único que cuenta, ¿no?\l"
	.string "Bien, entonces os diré lo que\l"
	.string "vamos a hacer, mi HAUNTER lanzará\l"
	.string "su PESADILLA sobre vosotros, al\l"
	.string "tiempo que os quedáis sin todos\l"
	.string "los cráneos ya robados, tal vez la\l"
	.string "única forma de que recapacitéis\l"
	.string "sea arrebatándoos todo cuanto\l"
	.string "valoráis.$"

PokemonTower_6F_Combate_Fuji_Texto_5:
.string "RECLUTAS: E--Espere anciano, no\n"
	.string "hay necesidad de...$"

PokemonTower_6F_Combate_Fuji_Texto_6:
.string "RECLUTAS: ¡¡ALTO RANGO {PLAYER}!!\n"
	.string "¡Qué oportuno!$"

PokemonTower_6F_Combate_Fuji_Texto_7:
.string "FUJI: Un joven como tú no debería\n"
	.string "desperdiciar su vida sirviendo a\l"
	.string "estos propósitos, ¿{PLAYER}?\l"
	.string "Vamos recapacita...$"

PokemonTower_6F_Combate_Fuji_Texto_8:
.string "FUJI: Ya veo, no me queda otra que\n"
	.string "desarmarte igual que hice con tus\l"
	.string "socios...por la paz de este lugar.$"

PokemonTower_6F_Combate_Fuji_Texto_9:
.string "Te he fallado CUBONE, perdóname...$"

PokemonTower_6F_Combate_Fuji_Texto_10:
.string "({PLAYER} le entregó a FUJI el\n"
	.string "CUBONE).$"

PokemonTower_6F_Combate_Fuji_Texto_11:
.string "PROTÓN: Sabías que este día iba a\n"
	.string "llegar FUJI, no puedes huir\l"
	.string "eternamente de tu pasado.$"

PokemonTower_6F_Combate_Fuji_Texto_12:
.string "PROTÓN: Buen trabajo {PLAYER}, todo\n"
	.string "va según lo planeado, FUJI y yo\l"
	.string "vamos al último piso, donde\l"
	.string "podamos charlar tranquilamente,\l"
	.string "confío en ti para que ni la más\l"
	.string "mínima mota de polvo se cuele en\l"
	.string "esa reunión.$"

PokemonTower_6F_Combate_Fuji_Move_1:
walk_in_place_left
step_end

PokemonTower_6F_Combate_Fuji_Move_2:
walk_in_place_right
step_end

PokemonTower_6F_Combate_Fuji_Move_3:
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_4:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fuji_Move_5:
walk_left
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_6:
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_7:
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_8:
walk_in_place_up
step_end

PokemonTower_6F_Combate_Fuji_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_10:
walk_right
walk_right
walk_right
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_11:
walk_left
walk_in_place_up
step_end

PokemonTower_6F_Cultistas::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 12
playse SE_PIN
special HealPlayerParty
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Cultistas_Move_1
applymovement 12, PokemonTower_6F_Cultistas_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower_6F_Cultistas_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower_6F_Cultistas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3 
msgbox PokemonTower_6F_Cultistas_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, PokemonTower_6F_Cultistas_Texto_6
msgbox PokemonTower_6F_Cultistas_Texto_7 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_2.1
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_6F_Cultistas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_11 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
delay 20
applymovement 12, PokemonTower_6F_Cultistas_Move_2.2
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_12 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 12
fadescreen 0
setvar VAR_UNUSED_0x40F7, 49
release
end

PokemonTower_6F_Cultistas_Move_2.2:
face_left
delay_8
delay_8
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2.1:
face_up
step_end

PokemonTower_6F_Cultistas_Texto_1:
.string "????: De modo que tú eres el tipo\n"
	.string "que ha estado causando todo este\l"
	.string "alboroto en este lugar sagrado.$"

PokemonTower_6F_Cultistas_Texto_2:
.string "... ...$"

PokemonTower_6F_Cultistas_Texto_3:
.string "Hmm... Ciertamente, esperaba otra cosa.\n"
	.string "No pareces estar atado por las mismas\l"
	.string "cadenas que dominan la vida de la gran\l"
	.string "mayoría.$"

PokemonTower_6F_Cultistas_Texto_4:
.string "A pesar del pobre entorno que domina la\n"
	.string "KANTO actual, tu voluntad permanece\l"
	.string "intacta. Más aún, tu potencialidad no\l"
	.string "se ha malogrado.$"

PokemonTower_6F_Cultistas_Texto_5:
.string "Pero... nada te exhime de lo que acabas\n"
	.string "de hacer. Deberás explicarte en el\l"
	.string "campo de batalla.$"

PokemonTower_6F_Cultistas_Texto_6:
.string "Ya veo... nada es lo que parece.$"

PokemonTower_6F_Cultistas_Texto_7:
.string "Entonces tus actos responden a un fin\n"
	.string "mayor... No es la primera vez que oigo\l"
	.string "eso, pero está claro que estás en una\l"
	.string "capa de la realidad superior a la que\l"
	.string "pensaba.$"

PokemonTower_6F_Cultistas_Texto_8:
.string "Déjame darte un consejo, chico. Mantén\n"
	.string "esa esencia que te carateriza, no\l"
	.string "dejes que nadie la corrompa.$"

PokemonTower_6F_Cultistas_Texto_9:
.string "Eres bueno, pero no tanto como crees;\n"
	.string "podrías ser magnífico si te mantienes\l"
	.string "en el camino que dicte tu voluntad.$"

PokemonTower_6F_Cultistas_Texto_10:
.string "Solo entonces... podrás ver KANTO y\n"
	.string "PUEBLO LAVANDA en todo su esplendor.$"

PokemonTower_6F_Cultistas_Texto_11:
.string "Este mundo es mucho más amplio que los\n"
	.string "yugos que someten KANTO, solo espero\l"
	.string "que puedas vivir para verlo. Deja que\l"
	.string "cure a tu equipo POKÉMON.$"

PokemonTower_6F_Cultistas_Texto_12:
.string "Prosigue tu camino.$"

PokemonTower_6F_Cultistas_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_3:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_4:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_5:
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_6:
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_7:
face_left
step_end

PokemonTower_6F_Cultistas_Move_8:
walk_right
step_end

PokemonTower_6F_Combate_Fantasma_Marowak::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
delay 40
trainerbattle_no_intro TRAINER_GHOST, PokemonTower_6F_Combate_Fantasma_Marowak_Texto_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
delay 60
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
waitmovement 0x0
delay 20
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_POKENAV_OFF
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
setvar VAR_UNUSED_0x40F7, 50
release
end

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_1:
.string "Tú...has...provocado...esto...$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_2:
.string "... ... ... ...$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_3:
.string "¡El espíritu de MAROWAK se ha\n"
	.string "desatado y está plagando de GHOSTS\l"
	.string "la TORRE!$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_4:
.string "AZUL: ¡{PLAYER}!\n"
	.string "¡ROJO acaba de derrotarme!\l"
	.string "¡Oh, pensaba que estaba vez podría\l"
	.string "maldita sea!\l"
	.string "¡Avisa a PROTÓN y salid de ahí\l"
	.string "cuanto antes!$"

PokemonTower_6F_Combate_Fantasma_Marowak_Move_1:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fantasma_Marowak_Move_2:
walk_in_place_right
walk_in_place_up
walk_in_place_left
walk_in_place_down
step_end
