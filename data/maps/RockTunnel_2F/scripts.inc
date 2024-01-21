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
msgbox RockTunnel_2F_Combate_Miguel_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 12
delay 30
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
delay 15
playse SE_BALL_OPEN
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
removeobject 13
delay 20
playse SE_BALL
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 12
msgbox RockTunnel_2F_Combate_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_1
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_4 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_5 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_6 MSGBOX_AUTOCLOSE
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
playse MUS_RG_SILPH
msgbox RockTunnel_2F_Combate_Miguel_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CMIGUEL_1, RockTunnel_2F_Combate_Miguel_Texto_10
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
delay 20
setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
fadescreen 1
delay 20
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 43
release
end

RockTunnel_2F_Combate_Miguel_Texto_1:
	.string "Finally! So the rumors were true! I have\n"
	.string "the MATERNAL POKÉMON in front of me, I\l"
	.string "am just at one-step away from catching\l"
	.string "it!$"

RockTunnel_2F_Combate_Miguel_Texto_2:
	.string "Perfect! With this POKÉMON my\n"
	.string "collection of strong and uncommon\l"
	.string "POKÉMON will be almost finished!$"

RockTunnel_2F_Combate_Miguel_Texto_3:
.string "¿Se te ha perdido algo?\n"
	.string "Mala suerte ROCKET, yo lo he visto\l"
	.string "primero, así que este KANGASKHAN\l"
	.string "pertence ya a mi equipo POKÉMON,\l"
	.string "si me discul...$"

RockTunnel_2F_Combate_Miguel_Texto_4:
.string "¡Un momento!\n"
	.string "¡Tú eres ese ROCKET con el que\l"
	.string "hice la apuesta de los FÓSILES en\l"
	.string "el MT.MOON!$"

RockTunnel_2F_Combate_Miguel_Texto_5:
.string "He de admitir que tuviste mala\n"
	.string "fortuna, y yo mucha...$"

RockTunnel_2F_Combate_Miguel_Texto_6:
.string "Ese necio podrá ser todo lo fuerte\n"
	.string "que quiera, pero es un negado en\l"
	.string "el trato social, aceptaría sin\l"
	.string "negarlo cualquier limite o trato\l"
	.string "que le propusieras a pesar de\l"
	.string "contar con el poder de sus\l"
	.string "POKÉMON, por suerte bastaron un\l"
	.string "par de palabras alegando mi\l"
	.string "propiedad de esos dos FÓSILES, y\l"
	.string "soltarle algún que otro dato útil\l"
	.string "como dónde revivir esos FÓSILES\l"
	.string "para convencerlo de compartirlos\l"
	.string "conmigo, cuando pudo perfectamente\l"
	.string "quedarse con los dos, ¡Jah!$"

RockTunnel_2F_Combate_Miguel_Texto_7:
.string "Definitivamente estás gafado\n"
	.string "RECLUTA, pierdes tu oportunidad en\l"
	.string "el MT.MOON en el último momento, y\l"
	.string "ahora presencias como atrapo al\l"
	.string "preciado KANGASKHAN delante de tus\l"
	.string "narices.$"

RockTunnel_2F_Combate_Miguel_Texto_8:
.string "¿Cómo?\n"
	.string "¿Nadie va a ir a ningún lado y ese\l"
	.string "KANGASKHAN se queda contigo?$"

RockTunnel_2F_Combate_Miguel_Texto_9:
.string "Pobre iluso, crees que soy el\n"
	.string "mismo de ese entonces, para tu\l"
	.string "información he estado entrenando\l"
	.string "en los despachos secretos de la\l"
	.string "todopoderosa SILPH, donde han\l"
	.string "optimizado el potencial de mis\l"
	.string "POKÉMON, todos los ENTRENADORES de\l"
	.string "los alrededores son como hormigas\l"
	.string "al lado mía, qué desafortunado,\l"
	.string "nunca se te ha dado ROCKET.\l"
	.string "¡Nunca estuviste ni en el momento,\l"
	.string "ni en el lugar ni en las\l"
	.string "circunstancias propicias!$"

RockTunnel_2F_Combate_Miguel_Texto_10:
.string "¡Pero qué clase de tomadura de\n"
	.string "pelo es esta!$"

RockTunnel_2F_Combate_Miguel_Texto_11:
.string "¡En SILPH me dijeron que con la\n"
	.string "última actualización el nivel de\l"
	.string "mi equipo podría tumbar hasta a un\l"
	.string "LÍDER DE GIMNASIO!\l"
	.string "¡Me han estafado!$"

RockTunnel_2F_Combate_Miguel_Texto_12:
.string "????: Y lo dice aquél que ha\n"
	.string "construido su actual equipo a base\l"
	.string "de estafar a la gente.$"

RockTunnel_2F_Combate_Miguel_Texto_13:
.string "PROTÓN: Excelente trabajo {PLAYER},\n"
	.string "acabas de desarmar a un peligroso\l"
	.string "entrenador junto con el\l"
	.string "KANGASKHAN, me aseguraré de\l"
	.string "ponerlo en su lugar antes de que\l"
	.string "escape usando la CUERDA HUIDA,\l"
	.string "este canalla se las sabe todas.$"

RockTunnel_2F_Combate_Miguel_Texto_14:
.string "(PROTÓN LE QUITÓ TODOS LOS POKÉMON\n"
	.string "A CIENTÍFICO MIGUEL).$"

RockTunnel_2F_Combate_Miguel_Texto_15:
.string "CIENTÍFICO: Grrrrrrrr...$"

RockTunnel_2F_Combate_Miguel_Texto_16:
.string "PROTÓN: De modo que el rumor era\n"
	.string "cierto, quién diría que en esta\l"
	.string "cueva pudiera habitar un\l"
	.string "KANGASKHAN...\l"
	.string "En fin, vuelvo al cuartel\l"
	.string "inmediatamente {PLAYER}, la\l"
	.string "importancia de lo que llevo\l"
	.string "conmigo así lo exije, tú también\l"
	.string "deberías de regresar cuanto antes,\l"
	.string "GIOVANNI estará esperándote\l"
	.string "encantado de recompensarte y\l"
	.string "preguntarte por los detalles de la\l"
	.string "misión.\l"
	.string "¡Salve GIOVANNI!$"

RockTunnel_2F_Combate_Miguel_Texto_17:
.string "CIENTÍFICO: No tienes perdón, he\n"
	.string "perdido en cuestión de segundos el\l"
	.string "equipo que me llevó años\l"
	.string "construir.\l"
	.string "¡Recuerda mis palabras {PLAYER}!\l"
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
.string "¡Obtuviste MT71 ROCA AFILADA\n"
	.string "de manos de ENTRENADOR!$"

RockTunnel_2F_Entrenador_Especial_Texto_1:
.string "AVALANCHA es un gran movimiento,\n"
	.string "pero a veces peca de falta de\l"
	.string "potencia, y de ese efecto de\l"
	.string "retroceso no se verán beneficiados\l"
	.string "los tipo ROCA como GOLEM o RHYDON\l"
	.string "por su pésima velocidad, hace rato\l"
	.string "que busco un ENTRENADOR digno de\l"
	.string "enfrentarme, no sabes cuánto llevo\l"
	.string "entrenando en esta cueva, esos\l"
	.string "MONTAÑEROS y POKEMANÍACOS me\l"
	.string "aburren ya por su bajo nivel, solo\l"
	.string "lucharé contra alguien que tenga\l"
	.string "las 8 MEDALLAS de GIMNASIO, si tú\l"
	.string "las tienes y me derrotas, te daré\l"
	.string "algo aún más contundente que\l"
	.string "AVALANCHA.$"

RockTunnel_2F_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

RockTunnel_2F_Entrenador_Especial_Texto_3:
.string "No, parece que tú tampoco estás\n"
	.string "listo, seguiré entrenando aquí en\l"
	.string "solitario hasta que aparezca un\l"
	.string "rival digno.$"

RockTunnel_2F_Entrenador_Especial_Texto_4:
.string "ROCA AFILADA cuenta con 100 de\n"
	.string "POTENCIA y 80 de PRECISIÓN, a\l"
	.string "pesar de su mejorable PRECISIÓN,\l"
	.string "tiene alto índice de crítico, y es\l"
	.string "una cobertura perfecta para\l"
	.string "TERREMOTO, POKÉMON como RHYDON,\l"
	.string "GOLEM, AERODACTYL, o incluso\l"
	.string "MACHAMP harán destrozos con este\l"
	.string "movimiento.$"

RockTunnel_2F_Entrenador_Especial_Texto_5:
.string "¿Eso es lo que creo que es?\n"
	.string "¡Debes de ser muy fuerte para\l"
	.string "haber derrotado a todos los\l"
	.string "LÍDERES!\l"
	.string "¡Mi equipo está ansioso por\l"
	.string "conocer su límites de una vez!$"

RockTunnel_2F_Entrenador_Especial_Texto_6:
.string "Entonces, ¿aceptas el reto?$"

RockTunnel_2F_Entrenador_Especial_Texto_7:
.string "Veremos si eres capaz de sacarme\n"
	.string "de la monotonía de este lugar.$"

RockTunnel_2F_Entrenador_Especial_Texto_8:
.string "¡Ha sido lo mejor que he visto\n"
	.string "desde que estoy aquí!$"

RockTunnel_2F_Entrenador_Especial_Texto_9:
.string "Vaya, definitivamente, sí que\n"
	.string "tienes el nivel de los mejores\l"
	.string "ENTRENADORES de esta región, lo\l"
	.string "prometido es deuda, aquí tienes.$"

RockTunnel_2F_Entrenador_Especial_Texto_10:
.string "Me temo que tendré que seguir\n"
	.string "conformándome con derrotar a los\l"
	.string "mismo MONTAÑEROS y POKEMANÍACOS de\l"
	.string "nuevo...$"
