AzaleaCarbonS2_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, AzaleaCarbonS2_OnFrame
	.byte 0

AzaleaCarbonS2_OnFrame:
map_script_2 VAR_TEMP_0, 0, AzaleaCarbonS2_Seteo_Metatiles
	.2byte 0

AzaleaCarbonS2_3::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_3:
.string "Ahora tenemos vías de tren, conexiones\n"
.string "marítimas y expansión global. ¿Por qué\l"
.string "esto iba a ser diferente?$"




AzaleaCarbonS2_5::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_5:
.string "Todo está dispuesto, en cuanto las\n"
.string "máquinas empiecen a trabajar,\l"
.string "facturaremos una cantidad inmensa.\l"
.string "Hay mucha demanda.$"





AzaleaCarbonS2_9::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_9, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_9:
.string "Hemos restaurado por completo el\n"
.string "pequeño sótano en el que fabricaban el\l"
.string "CARBÓN. La inversión ha sido grande,\l"
.string "pero este lugar ahora sí que parece un\l"
.string "lugar de trabajo de verdad, ¿no crees?$"



AzaleaCarbonS2_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_110, AzaleaCarbonS2_Text_ObreroIntro, AzaleaCarbonS2_Text_ObreroDefeated
	msgbox AzaleaCarbonS2_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS2_EventScript_Obrero2::
	trainerbattle_single TRAINER_TRAINER_111, AzaleaCarbonS2_Text_Obrero2Intro, AzaleaCarbonS2_Text_Obrero2Defeated
	msgbox AzaleaCarbonS2_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS2_EventScript_Obrero3::
	trainerbattle_single TRAINER_TRAINER_112, AzaleaCarbonS2_Text_Obrero3Intro, AzaleaCarbonS2_Text_Obrero3Defeated
	msgbox AzaleaCarbonS2_Text_Obrero3PostBattle, MSGBOX_AUTOCLOSE
	end

AzaleaCarbonS2_Primer_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 5
goto_if_gt AzaleaCarbonS2_Primer_Combate_2
msgbox AzaleaCarbonS2_Primer_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Primer_Combate_Texto_2 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS2_Primer_Combate_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_113, AzaleaCarbonS2_Primer_Combate_Texto_4
msgbox AzaleaCarbonS2_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
applymovement 10, AzaleaCarbonS1_Primer_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 13, 24, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 15, 16, 0x29B, FALSE
setmetatile 15, 15, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_FORTREE_CITY_STATE, 6
release
end

AzaleaCarbonS2_Primer_Combate_2::
msgbox AzaleaCarbonS2_Primer_Combate_Texto_6 MSGBOX_AUTOCLOSE
release
end


AzaleaCarbonS2_Primer_Combate_Texto_1:
.string "Ni un paso más.$"

AzaleaCarbonS2_Primer_Combate_Texto_2:
.string "Este negocio es demasiado rentable\n"
	.string "como para echarse a perder por\l"
	.string "sentimentalismos.$"

AzaleaCarbonS2_Primer_Combate_Texto_3:
.string "No importa quién seas, de ningún modo\n"
	.string "puedes ganar. ¡Ni legalmente ni por la\l"
	.string "fuerza!$"

AzaleaCarbonS2_Primer_Combate_Texto_4:
.string "Oh… Por la fuerza parece que sí…$"

AzaleaCarbonS2_Primer_Combate_Texto_5:
.string "Bah, qué más dá, sigue merodeando por\n"
	.string "aquí, es lo único que puedes hacer.$"

AzaleaCarbonS2_Primer_Combate_Texto_6:
.string "Lo único que puedes hacer es merodear\n"
	.string "por aquí, tómatelo como ruta turística\l"
	.string "si te apetece.$"

AzaleaCarbonS2_Segundo_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 6
goto_if_gt AzaleaCarbonS2_Segundo_Combate_2
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_114, AzaleaCarbonS2_Segundo_Combate_Texto_2
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_3 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, AzaleaCarbonS2_Segundo_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 16, 3, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 34, 12, 0x29B, FALSE
setmetatile 34, 11, 0x29B, FALSE
setmetatile 35, 12, 0x29F, FALSE
setmetatile 35, 11, 0x29F, FALSE
special DrawWholeMapView
delay 20
applymovement 11, AzaleaCarbonS2_Segundo_Combate_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 7
release
end

AzaleaCarbonS2_Segundo_Combate_2::
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS2_Segundo_Combate_Move_2:
face_up
step_end

AzaleaCarbonS2_Segundo_Combate_Move_1:
face_player
step_end

AzaleaCarbonS2_Segundo_Combate_Texto_5:
.string "Si quieres ver a mi JEFE, adelante. Eres\n"
	.string "inofensivo para nosotros.$"

AzaleaCarbonS2_Segundo_Combate_Texto_1:
.string "Aunque nos derrotes a todos, no nos\n"
	.string "iremos de aquí. Lo sabes, ¿verdad? Es\l"
	.string "lo bueno de las sociedades civilizadas,\l"
	.string "como lo es ahora JOHTO.$"

AzaleaCarbonS2_Segundo_Combate_Texto_2:
.string "¡Jah! ¡Tu victoria no ha servido para\n"
	.string "nada!$"

AzaleaCarbonS2_Segundo_Combate_Texto_3:
.string "Por suerte para nosotros, los tiempos\n"
	.string "en los que cualquier ENTRENADOR podía\l"
	.string "obtener cualquier cosa con un equipo\l"
	.string "más fuerte han acabado. Ese estúpido\l"
	.string "código moral ya no tiene ningún valor\l"
	.string "aquí.$"

AzaleaCarbonS2_Segundo_Combate_Texto_4:
.string "Gente como tú, o esos ancianos, estáis\n"
	.string "condenados a la extinción.$"

AzaleaCarbonS2_Combate_Final_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_2
waitmovement 0x0
goto AzaleaCarbonS2_Combate_Final

AzaleaCarbonS2_Combate_Final_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_3
waitmovement 0x0
goto AzaleaCarbonS2_Combate_Final

AzaleaCarbonS2_Combate_Final::
msgbox AzaleaCarbonS2_Combate_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Combate_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_4
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_5
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Segundo_Combate_Move_2
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Combate_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, AzaleaCarbonS2_Segundo_Combate_Move_6
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_4
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_5
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox AzaleaCarbonS2_Combate_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_7
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_115, AzaleaCarbonS2_Combate_Final_Texto_11
msgbox AzaleaCarbonS2_Combate_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Combate_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_BREAKABLE_DOOR
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_8
waitmovement 0x0
delay 5
msgbox AzaleaCarbonS2_Combate_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Segundo_Combate_Move_2
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_4
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_5
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_17 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Combate_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_7
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_19 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Combate_Final_Texto_20 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Combate_Final_Texto_21 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox AzaleaCarbonS2_Combate_Final_Texto_22 MSGBOX_DEFAULT
givemon SPECIES_LITTEN, 15, ITEM_NONE
waitfanfare
setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
setvar VAR_FORTREE_CITY_STATE, 8
release
end

AzaleaCarbonS2_Jefe_Despues_Combate::
lock
faceplayer
msgbox AzaleaCarbonS2_Jefe_Despues_Combate_Texto_1 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS2_Jefe_Despues_Combate_Texto_1:
.string "¿Crees que los ancianos olvidarán esto\n"
	.string "y me permitirán ver ese POKÉMON tan\l"
	.string "especial?$"


AzaleaCarbonS2_Combate_Final_Move_8:
lock_facing_direction
walk_up
walk_up
unlock_facing_direction
step_end

AzaleaCarbonS2_Combate_Final_Move_7:
walk_slow_down
walk_slow_down
step_end

AzaleaCarbonS2_Segundo_Combate_Move_6:
face_down
step_end

AzaleaCarbonS2_Combate_Final_Move_4:
face_right
step_end

AzaleaCarbonS2_Combate_Final_Move_5:
walk_in_place_down
step_end

AzaleaCarbonS2_Combate_Final_Move_1:
walk_in_place_up
step_end

AzaleaCarbonS2_Combate_Final_Move_2:
walk_right
walk_up
step_end

AzaleaCarbonS2_Combate_Final_Move_3:
walk_up
step_end

AzaleaCarbonS2_Combate_Final_Texto_1:
.string "A pesar de toda la seguridad, te las has\n"
	.string "arreglado para llegar hasta aquí.$"

AzaleaCarbonS2_Combate_Final_Texto_2:
.string "Dime, ¿conoces la FORJA FUEGO?$"

AzaleaCarbonS2_Combate_Final_Texto_3:
.string "… …$"

AzaleaCarbonS2_Combate_Final_Texto_4:
.string "En la lejana región de SINOHH, desde\n"
	.string "hace décadas ese lugar se encarga de\l"
	.string "transformar materiales y convertirlos\l"
	.string "en otros de vital importancia para la\l"
	.string "región.$"

AzaleaCarbonS2_Combate_Final_Texto_5:
.string "¿Qué nos diferencia de ellos? ¿El haber\n"
	.string "echado de aquí a los antiguos\l"
	.string "propietarios? ¿Incapaces de sacar\l"
	.string "partido a todos los recursos naturales\l"
	.string "que rodean PUEBLO AZALEA?$"

AzaleaCarbonS2_Combate_Final_Texto_6:
.string "Con ellos el CARBÓN estaría limitado\n"
	.string "únicamente a los alrededores. ¿Qué hay\l"
	.string "de PUEBLO CAOBA, o CIUDAD ENDRINO?\l"
	.string "¿No es eso también egoísta?$"

AzaleaCarbonS2_Combate_Final_Texto_7:
.string "… …$"

AzaleaCarbonS2_Combate_Final_Texto_8:
.string "Sigues empeñado en defenderlos,\n"
	.string "entiendo, para ti el valor va antes que\l"
	.string "el pragmatismo.$"

AzaleaCarbonS2_Combate_Final_Texto_9:
.string "No creas que he tomado a la ligera esta\n"
	.string "profesión, solo por la oportunidad\l"
	.string "económica. Me he ocupado\l"
	.string "personalmente de reunir a los mejores\l"
	.string "para desempeñarla.$"

AzaleaCarbonS2_Combate_Final_Texto_10:
.string "¡Ahora lo verás!$"

AzaleaCarbonS2_Combate_Final_Texto_11:
.string "Ningún ENTRENADOR de calle podría\n"
	.string "ganarme en un duelo… ¿Quién eres?$"

AzaleaCarbonS2_Combate_Final_Texto_12:
.string "Un momento… Eres algo más que un alto\n"
	.string "cargo de TRIGAL, con POKÉMON\l"
	.string "adquiridos a golpe de talonario,\l"
	.string "¿verdad?$"

AzaleaCarbonS2_Combate_Final_Texto_13:
.string "… …$"

AzaleaCarbonS2_Combate_Final_Texto_14:
.string "¿¡¡El TEAM ROCKET!!? ¿¡¡Su más alto\n"
	.string "ADMINISTRADOR JEFE y LÍDER en\l"
	.string "JOHTO!!?$"

AzaleaCarbonS2_Combate_Final_Texto_15:
.string "Oh, no sabía…$"

AzaleaCarbonS2_Combate_Final_Texto_16:
.string "Sea como sea, incluso vuestra\n"
	.string "organización es incapaz de deshacer el\l"
	.string "contrato.$"

AzaleaCarbonS2_Combate_Final_Texto_17:
.string "Pero… no soy estúpido, llevarme mal\n"
	.string "contigo a la larga acabaría con este\l"
	.string "lugar, es por ello que te propongo un\l"
	.string "acuerdo.$"

AzaleaCarbonS2_Combate_Final_Texto_18:
.string "Nosotros seguiremos aquí, pero\n"
	.string "permitiremos a los ancianos volver a\l"
	.string "producir CARBÓN. De este modo,\l"
	.string "integraremos lo viejo con lo nuevo.$"

AzaleaCarbonS2_Combate_Final_Texto_19:
.string "Admito que fui algo arrogante. Creí que\n"
	.string "nuestros métodos eran infalibles, pero\l"
	.string "es cierto que esos ancianos podrían\l"
	.string "aportarnos ciertas técnicas que\l"
	.string "desconocemos.$"

AzaleaCarbonS2_Combate_Final_Texto_20:
.string "Y no es por tratar de quedar bien, mi\n"
	.string "SIRFETCHD sintió la presencia de un\l"
	.string "POKÉMON… debe ser su contraparte… tal\l"
	.string "vez corte la madera incluso mejor.$"

AzaleaCarbonS2_Combate_Final_Texto_21:
.string "Yo mismo enviaré mensajeros, los\n"
	.string "ancianos podrán volver a vivir aquí.\l"
	.string "Toma este POKÉMON en señal de buena\l"
	.string "fe.$"

AzaleaCarbonS2_Combate_Final_Texto_22:
.string "¡OBTUVISTE UN LITTEN AL NV.15!$"


AzaleaCarbonS2_Seteo_Metatiles::
compare VAR_FORTREE_CITY_STATE, 6
goto_if_gt AzaleaCarbonS2_Seteo_Metatiles_3
compare VAR_FORTREE_CITY_STATE, 5
goto_if_gt AzaleaCarbonS2_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS2_Seteo_Metatiles_2::
setmetatile 15, 16, 0x29B, FALSE
setmetatile 15, 15, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS2_Seteo_Metatiles_3::
setmetatile 34, 12, 0x29B, FALSE
setmetatile 34, 11, 0x29B, FALSE
setmetatile 35, 12, 0x29F, FALSE
setmetatile 35, 11, 0x29F, FALSE
setmetatile 15, 16, 0x29B, FALSE
setmetatile 15, 15, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end
