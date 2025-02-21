RockTunnel_2F_MapScripts::
	.byte 0

RockTunnel2F_2::
end



RockTunnel2F_3::
end



RockTunnel2F_4::
end



RockTunnel2F_5::
end



RockTunnel2F_6::
end



RockTunnel2F_7::
end



RockTunnel2F_8::
end



RockTunnel2F_9::
end



RockTunnel2F_10::
end



RockTunnel2F_11::
end



RockTunnel2F_12::
end



RockTunnel2F_15::
end



RockTunnel2F_22::
lock     
faceplayer     
msgbox RockTunnel2F_Text_22, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_22:
	.string "ARBOK, PERSIAN, TAUROS or SANDSLASH\n"
	.string "are so appreciated POKÉMON for TAMERS\l"
	.string "like me, but there is not any with a\l"
	.string "KANGASKHAN, do you even imagine how\l"
	.string "successfully will be my shows with that\l"
	.string "POKÉMON under my whip control?$"



RockTunnel2F_28::
lock     
faceplayer     
msgbox RockTunnel2F_Text_28, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_28:
	.string "Do you imagine a BUG CATCHER with a\n"
	.string "KANGASKHAN? All the prejudices labeling\l"
	.string "us as weaklings would finish!$"



RockTunnel2F_EventScript_Necio::
	trainerbattle_single TRAINER_RODNEY, RockTunnel2F_Text_NecioIntro, RockTunnel2F_Text_NecioDefeated
	msgbox RockTunnel2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker::
	trainerbattle_single TRAINER_ATSUSHI, RockTunnel2F_Text_HikerIntro, RockTunnel2F_Text_HikerDefeated
	msgbox RockTunnel2F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica::
	trainerbattle_single TRAINER_SPENCER, RockTunnel2F_Text_ChicaIntro, RockTunnel2F_Text_ChicaDefeated
	msgbox RockTunnel2F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica2::
	trainerbattle_single TRAINER_ROLAND, RockTunnel2F_Text_Chica2Intro, RockTunnel2F_Text_Chica2Defeated
	msgbox RockTunnel2F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio2::
	trainerbattle_single TRAINER_RICHARD, RockTunnel2F_Text_Necio2Intro, RockTunnel2F_Text_Necio2Defeated
	msgbox RockTunnel2F_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio3::
	trainerbattle_single TRAINER_HERMAN, RockTunnel2F_Text_Necio3Intro, RockTunnel2F_Text_Necio3Defeated
	msgbox RockTunnel2F_Text_Necio3PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker2::
	trainerbattle_single TRAINER_KIRK, RockTunnel2F_Text_Hiker2Intro, RockTunnel2F_Text_Hiker2Defeated
	msgbox RockTunnel2F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, RockTunnel2F_Text_Hiker3Intro, RockTunnel2F_Text_Hiker3Defeated
	msgbox RockTunnel2F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_2F_Combate_Miguel_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.1
waitmovement 0x0
goto RockTunnel_2F_Combate_Miguel

RockTunnel_2F_Combate_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.2
waitmovement 0x0
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RockTunnel_2F_Combate_Miguel_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 12
delay 30
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
playse SE_BALL_OPEN
waitse
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
removeobject 13
delay 20
playse SE_BALL
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 12
msgbox RockTunnel_2F_Combate_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_1
waitmovement 0x0
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_3 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.2
waitmovement 0x0
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.1
waitmovement 0x0
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_3
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_8 MSGBOX_AUTOCLOSE
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.2
waitmovement 0X0
delay 15
playse MUS_RG_SILPH
msgbox RockTunnel_2F_Combate_Miguel_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_9.2 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.3
waitmovement 0x0
clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
trainerbattle_no_intro TRAINER_CMIGUEL_1, RockTunnel_2F_Combate_Miguel_Texto_10
playse SE_BREAKABLE_DOOR
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.4
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_2
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_12 MSGBOX_AUTOCLOSE
playse MUS_RG_ROCKET_HIDEOUT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 29
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_7
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_6
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_8
waitmovement 0x0
playfanfare MUS_OBTAIN_BADGE
msgbox RockTunnel_2F_Combate_Miguel_Texto_14 MSGBOX_DEFAULT
waitfanfare
msgbox RockTunnel_2F_Combate_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_10
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_11
waitmovement 0x0
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 29
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
waitmovement 0x0
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_12
waitmovement 0x0
playse MUS_RG_MT_MOON
fadedefaultbgm
msgbox RockTunnel_2F_Combate_Miguel_Texto_17 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
removeobject 13
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_11.1
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_11.3
waitmovement 0x0
waitse
setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
removeobject 14
setvar VAR_UNUSED_0x40F7, 43
release
end

RockTunnel_2F_Combate_Miguel_Move_2.3:
walk_left
step_end

RockTunnel_2F_Combate_Miguel_Move_2.4:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

RockTunnel_2F_Combate_Miguel_Move_11.1:
face_down
lock_facing_direction
walk_up
unlock_facing_direction
step_end

RockTunnel_2F_Combate_Miguel_Move_2.2:
walk_in_place_left
step_end

RockTunnel_2F_Combate_Miguel_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_left
step_end

RockTunnel_2F_Combate_Miguel_Texto_1:
.string "????: ¡Al fin!\n"
	.string "¡De modo que los rumores\l"
	.string "eran ciertos!\l"
	.string "¡Tengo al POKÉMON MATERNAL delante\l"
	.string "mis narices, a un solo movimiento\l"
	.string "de apropiármelo!$"

RockTunnel_2F_Combate_Miguel_Texto_2:
.string "¡Perfecto! ¡Con este KANGASKHAN, mi\n"
	.string "colección de raros y fuertes\l"
	.string "POKÉMON está casi completa!$"

RockTunnel_2F_Combate_Miguel_Texto_3:
.string "¿Se te ha perdido algo?\n"
	.string "Mala suerte, ROCKET. Yo lo he visto\l"
	.string "primero, así que este KANGASKHAN\l"
	.string "pertence ya a mi equipo POKÉMON,\l"
	.string "si me discul{PAUSE 15}…{PAUSE 15}$"

RockTunnel_2F_Combate_Miguel_Texto_4:
.string "¡Un momento!\n"
	.string "¡Tú eres ese ROCKET con el que\l"
	.string "hice la apuesta de los FÓSILES\l"
	.string "en el MT.MOON!$"

RockTunnel_2F_Combate_Miguel_Texto_5:
.string "He de admitir que tuviste mala\n"
	.string "fortuna, y yo mucha{PAUSE 5}…{PAUSE 5}$"

RockTunnel_2F_Combate_Miguel_Texto_6:
.string "Ese necio podrá ser todo lo fuerte\n"
	.string "que quiera, pero es un negado en\l"
	.string "el trato social, aceptaría sin\l"
	.string "negarlo cualquier limite o trato\l"
	.string "que le propusieras a pesar de\l"
	.string "contar con el poder de sus\l"
	.string "POKÉMON.$"
	
RockTunnel_2F_Combate_Miguel_Texto_6.1:
	.string "Bastaron un par de palabras, alegando\n"
	.string "la propiedad de esos FÓSILES, y el\l"
	.string "soltarle algún que otro dato útil\l"
	.string "como dónde revivirlos.\l"
	.string "Así, pude convencerlo para que los\l"
	.string "compartiera, cuando pudo perfectamente\l"
	.string "quedarse con los dos, ¡jah!$"

RockTunnel_2F_Combate_Miguel_Texto_7:
.string "Definitivamente estás gafado, ROCKET.\n"
	.string "Pierdes tu oportunidad en el MT.MOON, y\l"
	.string "ahora presencias como atrapo al preciado\l"
	.string "KANGASKHAN delante de tus narices.$"

RockTunnel_2F_Combate_Miguel_Texto_8:
	.string "What? Is nobody going anywhere and\n"
	.string "that KANGASKHAN is yours?$"

RockTunnel_2F_Combate_Miguel_Texto_9:
.string "Pobre iluso, ¿crees que soy el\n"
	.string "mismo de ese entonces? Para tu\l"
	.string "información, he estado entrenando\l"
	.string "en los despachos secretos de la\l"
	.string "todopoderosa SILPH, ahí han\l"
	.string "optimizado el potencial de mis\l"
	.string "POKÉMON.$"
	
RockTunnel_2F_Combate_Miguel_Texto_9.1:
	.string "Todos los ENTRENADORES que ves\n"
	.string "aquí son como hormigas para mí.\l"
	.string "Qué desafortunado, ROCKET.$"

RockTunnel_2F_Combate_Miguel_Texto_9.2:
	.string "¡Nunca estuviste ni en el momento,\n"
	.string "ni en el lugar ni en las\l"
	.string "circunstancias propicias!$"

RockTunnel_2F_Combate_Miguel_Texto_10:
.string "¿¡Pero qué clase de tomadura de\n"
	.string "pelo es esta!?$"

RockTunnel_2F_Combate_Miguel_Texto_11:
.string "¡En SILPH me dijeron que con la\n"
	.string "última actualización, el nivel de\l"
	.string "mi equipo podría tumbar hasta a un\l"
	.string "LÍDER DE GIMNASIO!\l"
	.string "¡Me han estafado!$"

RockTunnel_2F_Combate_Miguel_Texto_12:
	.string "????: And it's said by someone who built\n"
	.string "his current team by scamming people.$"

RockTunnel_2F_Combate_Miguel_Texto_13:
.string "PROTÓN: Excelente trabajo, {PLAYER}.\n"
	.string "Acabas de desarmar a un peligroso\l"
	.string "ENTRENADOR, junto con el KANGASKHAN.\l"
	.string "Me aseguraré deponerlo en su lugar\l"
	.string "antes de que huya con CUERDA HUIDA,\l"
	.string "este canalla se las sabe todas.$"

RockTunnel_2F_Combate_Miguel_Texto_14:
.string "-PROTÓN LE QUITÓ TODOS LOS POKÉMON\n"
	.string "A CIENTÍFICO MIGUEL.-$"

RockTunnel_2F_Combate_Miguel_Texto_15:
.string "CIENTÍFICO: Grrrrrrrr{PAUSE 5}…{PAUSE 5}$"

RockTunnel_2F_Combate_Miguel_Texto_16:
.string "PROTÓN: De modo que el rumor era\n"
	.string "cierto, quién diría que en esta\l"
	.string "cueva pudiera habitar un\l"
	.string "KANGASKHAN…$"

RockTunnel_2F_Combate_Miguel_Texto_16.1:
	.string "En fin, vuelvo al cuartel\n"
	.string "inmediatamente, {PLAYER}, la\l"
	.string "importancia de lo que llevo\l"
	.string "conmigo así lo exije. Tú también\l"
	.string "deberías de regresar cuanto antes,\l"
	.string "GIOVANNI estará esperándote, listo\l"
	.string "para recompensarte y preguntarte por\l"
	.string "los detalles de la misión.\l"
	.string "¡Salve GIOVANNI!$"

RockTunnel_2F_Combate_Miguel_Texto_17:
.string "CIENTÍFICO: No tienes perdón, he\n"
	.string "perdido en cuestión de segundos el\l"
	.string "equipo que me llevó años construir.$"

RockTunnel_2F_Combate_Miguel_Texto_17.1:
	.string "¡Recuerda mis palabras, {PLAYER}!\n"
	.string "¡No descansaré hasta verte caer!$"

RockTunnel_2F_Combate_Miguel_Move_1:
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_1.1:
walk_down
walk_in_place_right
step_end

RockTunnel_2F_Combate_Miguel_Move_1.2:
walk_in_place_right
step_end

RockTunnel_2F_Combate_Miguel_Move_2:
emote_exclamation_mark
step_end

RockTunnel_2F_Combate_Miguel_Move_3:
walk_in_place_up
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_4:
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

RockTunnel_2F_Combate_Miguel_Move_6:
walk_in_place_down
step_end

RockTunnel_2F_Combate_Miguel_Move_7:
walk_in_place_up
step_end

RockTunnel_2F_Combate_Miguel_Move_8:
walk_right
walk_right
walk_down
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_9:
walk_left
walk_up
walk_left
face_down
step_end

RockTunnel_2F_Combate_Miguel_Move_10:
face_up
step_end

RockTunnel_2F_Combate_Miguel_Move_11:
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
walk_down
walk_down
step_end

RockTunnel_2F_Combate_Miguel_Move_11.3:
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
walk_down
walk_down
step_end

RockTunnel_2F_Combate_Miguel_Move_12:
walk_left
walk_left
step_end

RockTunnel_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE123_STATE, 0
goto_if_gt RockTunnel_2F_Entrenador_Especial_3
msgbox RockTunnel_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RockTunnel_2F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt RockTunnel_2F_Entrenador_Especial_2
msgbox RockTunnel_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Entrenador_Especial_2::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RockTunnel_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox RockTunnel_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ROCAAFILADA, RockTunnel_2F_Entrenador_Especial_Texto_8
msgbox RockTunnel_2F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM56
msgbox RockTunnel_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox RockTunnel_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE123_STATE, 1
release
end

RockTunnel_2F_Entrenador_Especial_2_No::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end




RockTunnel_2F_Entrenador_Especial_3::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Entrenador_Especial_Texto_1.1:
	.string "You obtained TM71 STONE EDGE from a\n"
	.string "TRAINER!$"

RockTunnel_2F_Entrenador_Especial_Texto_1:
	.string "ROCK SLIDE is a great move, but\n"
	.string "sometimes its power is not enough, and\l"
	.string "that flinch bonus is not worthy many of\l"
	.string "ROCK-types as GOLEM or RHYDON due\l"
	.string "their poor speed, It's been a while\l"
	.string "since I've been looking for a TRAINER\l"
	.string "worthy of battling me. You have no idea\l"
	.string "how long I've been training in this cave,\l"
	.string "those HIKERS and POKÉMANIACS already\l"
	.string "bore me due their low level, I will fight\l"
	.string "you against someone that have the 8\l"
	.string "GYM BADGES, if you have them and defeat\l"
	.string "me, I will give you something even more\l"
	.string "devastating than ROCK SLIDE.$"

RockTunnel_2F_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

RockTunnel_2F_Entrenador_Especial_Texto_3:
	.string "Nah, seems like that you are not ready\n"
	.string "enough yet, I will keep training alone\l"
	.string "here until a worthy opponent appears.$"

RockTunnel_2F_Entrenador_Especial_Texto_4:
	.string "STONE EDGE has 100 of POWER and 80 of\n"
	.string "ACCURATE, although it improvable\l"
	.string "ACCURATION, it has an high critical-hit\l"
	.string "chance, and it is perfect coverage for\l"
	.string "EARTHQUAKE, POKÉMON as RHYDON, GOLEM,\l"
	.string "AERODACTYL, or even MACHAMP will\l"
	.string "destroy battles with this movement.$"

RockTunnel_2F_Entrenador_Especial_Texto_5:
	.string "Is it what I think it is? You must be\n"
	.string "very strong to defeat all LEADERS! My\l"
	.string "team is excited to discover its limits\l"
	.string "at once!$"

RockTunnel_2F_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

RockTunnel_2F_Entrenador_Especial_Texto_7:
	.string "Let's see if you are able to get me out\n"
	.string "of my boredom.$"

RockTunnel_2F_Entrenador_Especial_Texto_8:
	.string "It was the best fight I had since I\n"
	.string "came here!$"

RockTunnel_2F_Entrenador_Especial_Texto_9:
	.string "Hell, definitely, you have the skill of\n"
	.string "the best TRAINERS on this region, as I\l"
	.string "said, here you have.$"

RockTunnel_2F_Entrenador_Especial_Texto_10:
	.string "Sadly, I'll have to keep training with\n"
	.string "the same HIKERS and POKÉMANIACS\l"
	.string "again…$"
