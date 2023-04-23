AzaleaCarbonS1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, AzaleaCarbonS1_OnFrame
	.byte 0

AzaleaCarbonS1_OnFrame:
map_script_2 VAR_TEMP_0, 0, AzaleaCarbonS1_Seteo_Metatiles
	.2byte 0

AzaleaCarbonS1_2::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_2:
.string "¿Eres nuevo aquí? Nuestro JEFE es muy\n"
.string "exigente.$"



AzaleaCarbonS1_3::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_3:
.string "Este lugar pertenecía a dos ancianos,\n"
.string "tradicionalmente ellos se dedicaban a\l"
.string "esto. Me pregunto si hicimos bien en\l"
.string "echarlos tan a la ligera, seguro que\l"
.string "tenían cosas que aportar.$"



AzaleaCarbonS1_5::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_5:
.string "Me da igual la JOHTO tradicional. Todo,\n"
.string "antes o después, será destruido por el\l"
.string "paso del tiempo, ¡qué más da que ocurra\l"
.string "en 1 año que en 100!$"



AzaleaCarbonS1_7::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_7, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_7:
.string "¿Qué RAYO es más fuerte? ¿El de RAIKOU,\n"
.string "o el de un AMPHAROS? Dicen que el dueño\l"
.string "de el FARO tiene a un AMPHAROS que\l"
.string "acaba con ese debate.$"




AzaleaCarbonS1_8::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_8, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_8:
.string "¡Dentro de poco tendremos todos los\n"
.string "hornos a pleno rendimiento! ¡Y tú no\l"
.string "podrás hacer nada para impedirlo!\l"
.string "¡Jojojo!$"



AzaleaCarbonS1_13::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_13, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_13:
.string "Es extraño… El viejo horno que\n"
.string "destruimos para volver a reformar este\l"
.string "lugar y modernizarlo…fabricaba un\l"
.string "CARBÓN de mayor calidad que el de\l"
.string "nuestros hornos industriales. ¿Nos\l"
.string "hemos perdido algo?$"



AzaleaCarbonS1_14::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_14, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_14:
.string "Realmente no estoy de acuerdo con la\n"
.string "forma de llevar esto, pero el pastizal\l"
.string "que me pagan por ello lo vale.$"



AzaleaCarbonS1_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_106, AzaleaCarbonS1_Text_ObreroIntro, AzaleaCarbonS1_Text_ObreroDefeated
	msgbox AzaleaCarbonS1_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS1_EventScript_Obrero2::
	trainerbattle_single TRAINER_TRAINER_107, AzaleaCarbonS1_Text_Obrero2Intro, AzaleaCarbonS1_Text_Obrero2Defeated
	msgbox AzaleaCarbonS1_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end

AzaleaCarbonS1_EventScript_ReceiveHelioptile::
    lock
    faceplayer
	checkmoncatch SPECIES_HELIOPTILE
	goto_if_eq VAR_RESULT, FALSE, AzaleaCarbonS1_EventScript_TakeHelioptile 
	msgbox AzaleaCarbonS1_Text_6, MSGBOX_DEFAULT
	release
	end



AzaleaCarbonS1_EventScript_TakeHelioptile::
    msgbox AzaleaCarbonS1_Text_TakeHelioptile MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox AzaleaCarbonS1_Text_MensajeHelioptile, MSGBOX_DEFAULT
	givemon SPECIES_HELIOPTILE, 15, ITEM_ELECTRIC_GEM
	waitfanfare  
	release
	end 



AzaleaCarbonS1_Text_TakeHelioptile:
.string "Vengo de una lejana región, JOHTO no\n"
	.string "para de contratar a especialistas de\l"
	.string "fuera, en todos los ámbitos. Mira, te\l"
	.string "daré este POKÉMON como prueba.$"



AzaleaCarbonS1_Text_MensajeHelioptile:
.string "¡OBTUVISTE UN HELIOPTILE AL NV.15!$"


AzaleaCarbonS1_Text_6:
.string "HELIOPTILE es de mis compañeros de\n"
	.string "trabajo favoritos, aquí es imposible\l"
	.string "encontrar uno. Supongo que es esa\l"
	.string "variedad la que buscan los que me\l"
	.string "contrataron.$"

AzaleaCarbonS1_Primer_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 3
goto_if_gt AzaleaCarbonS1_Primer_Combate_2
delay 10
playse SE_PIN
delay 10
applymovement 18, AzaleaCarbonS1_Primer_Combate_Move_1
msgbox AzaleaCarbonS1_Primer_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 30
msgbox AzaleaCarbonS1_Primer_Combate_Texto_2 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS1_Primer_Combate_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_108, AzaleaCarbonS1_Primer_Combate_Texto_4 
msgbox AzaleaCarbonS1_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
applymovement 18, AzaleaCarbonS1_Primer_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 29, 49, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 14, 36, 0x29B, FALSE
setmetatile 14, 35, 0x29B, FALSE
special DrawWholeMapView
delay 20
applymovement 18, AzaleaCarbonS1_Primer_Combate_Move_3
waitmovement 0x0
msgbox AzaleaCarbonS1_Primer_Combate_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 4
release
end

AzaleaCarbonS1_Primer_Combate_2::
msgbox AzaleaCarbonS1_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS1_Primer_Combate_Move_1:
emote_exclamation_mark
step_end

AzaleaCarbonS1_Primer_Combate_Move_2:
face_up
step_end

AzaleaCarbonS1_Primer_Combate_Move_3:
face_player
step_end

AzaleaCarbonS1_Primer_Combate_Texto_1:
.string "¿Quién va?$"

AzaleaCarbonS1_Primer_Combate_Texto_2:
.string "Estás en propiedad privada, lo sabes,\n"
	.string "¿no?$"

AzaleaCarbonS1_Primer_Combate_Texto_3:
.string "Te echaré de aquí inmediatamente, ¡igual\n"
	.string "que se echan a los POKÉMON SALVAJES!$"

AzaleaCarbonS1_Primer_Combate_Texto_4:
.string "¿De dónde sales tú?$"

AzaleaCarbonS1_Primer_Combate_Texto_5:
.string "No vamos a renunciar a este lugar, su\n"
	.string "ubicación es perfecta, aquí contamos\l"
	.string "con todas las materias primas\l"
	.string "necesarias.$"

AzaleaCarbonS1_Primer_Combate_Texto_6:
.string "Acabo de desactivar el muro que impide\n"
	.string "seguir más al norte. A nuestro JEFE le\l"
	.string "gusta la gente activa como tú, tal vez\l"
	.string "si llegas hasta él acabes cambiando de\l"
	.string "parecer respecto a este lugar.$"

AzaleaCarbonS1_Segundo_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 4
goto_if_gt AzaleaCarbonS1_Segundo_Combate_2
delay 10
playse SE_PIN
delay 10
applymovement 17, AzaleaCarbonS1_Primer_Combate_Move_1
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, AzaleaCarbonS1_Primer_Combate_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_109, AzaleaCarbonS1_Segundo_Combate_Texto_6
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_7 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_8 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_8.1 MSGBOX_AUTOCLOSE
applymovement 17, AzaleaCarbonS1_Primer_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 28, 17, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 24, 8, 0x29B, FALSE
setmetatile 24, 7, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_FORTREE_CITY_STATE, 5
release
end

AzaleaCarbonS1_Segundo_Combate_2::
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_9 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS1_Segundo_Combate_Texto_8.1:
.string "Y por ello no tengo el menor problema en\n"
	.string "abrirte las puertas.$"

AzaleaCarbonS1_Segundo_Combate_Texto_1:
.string "¿De dónde sales tú? Ya tenemos\n"
	.string "abogados y representantes de sobra,\l"
	.string "este caso ya está lo suficientemente\l"
	.string "atado como para…$"

AzaleaCarbonS1_Segundo_Combate_Texto_2:
.string "¿Vienes de parte de los antiguos\n"
	.string "propietarios? ¿Por qué alguien de tu\l"
	.string "apariencia iba a ayudarles?$"

AzaleaCarbonS1_Segundo_Combate_Texto_3:
.string "Qué más da, no puedes hacer nada. Este\n"
	.string "lugar ya es oficialmente nuestro.$"

AzaleaCarbonS1_Segundo_Combate_Texto_4:
.string "… …$"

AzaleaCarbonS1_Segundo_Combate_Texto_5:
.string "Así que te niegas. Te diré algo: aunque\n"
	.string "quisieras tomarte la justicia por tu\l"
	.string "mano, no podrías. ¡Dudo mucho que tus\l"
	.string "POKÉMON comprados sean de tan buena\l"
	.string "calidad como los míos!$"

AzaleaCarbonS1_Segundo_Combate_Texto_6:
.string "¡Esos POKÉMON! ¡No los he visto en el\n"
	.string "mercado!$"

AzaleaCarbonS1_Segundo_Combate_Texto_7:
.string "¿Cómo dices? No me hagas reir, hoy en\n"
	.string "día nadie se toma la molestia de\l"
	.string "entrenar por cuenta propia a su equipo,\l"
	.string "es ineficiente y aburrido.$"

AzaleaCarbonS1_Segundo_Combate_Texto_8:
.string "Pero me da igual de dónde los hayas\n"
	.string "sacado, ni con todos los LEGENDARIOS\l"
	.string "del mundo puedes arrebatarnos la\l"
	.string "propiedad de esta fábrica.$"

AzaleaCarbonS1_Segundo_Combate_Texto_9:
.string "A lo máximo a lo que puedes aspirar es a\n"
	.string "llegar a un acuerdo, eso si mi JEFE lo\l"
	.string "estima conveniente.$"


AzaleaCarbonS1_Seteo_Metatiles::
lock
compare VAR_FORTREE_CITY_STATE, 4
goto_if_gt AzaleaCarbonS1_Seteo_Metatiles_3
compare VAR_FORTREE_CITY_STATE, 3
goto_if_gt AzaleaCarbonS1_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS1_Seteo_Metatiles_2::
setmetatile 14, 36, 0x29B, FALSE
setmetatile 14, 35, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS1_Seteo_Metatiles_3::
setmetatile 24, 8, 0x29B, FALSE
setmetatile 24, 7, 0x29B, FALSE
setmetatile 14, 36, 0x29B, FALSE
setmetatile 14, 35, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

