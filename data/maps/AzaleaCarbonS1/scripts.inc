AzaleaCarbonS1_MapScripts::
	.byte 0

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
.string "CARBÓN de mayor calidad que de\l"
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
msgbox AzaleaCarbonS1_Primer_Combate_Texto_1 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Primer_Combate_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Primer_Combate_Texto_3 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Primer_Combate_Texto_4 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS1_Primer_Combate_Texto_1:
.string "¿Quién va?$"

AzaleaCarbonS1_Primer_Combate_Texto_2:
.string "Estás en propiedad privada, lo sabes,\n"
	.string "¿no?$"

AzaleaCarbonS1_Primer_Combate_Texto_3:
.string "Te echaré de aquí inmediatamente, igual\n"
	.string "que se echan a los POKÉMON SALVAJES.$"

AzaleaCarbonS1_Primer_Combate_Texto_4:
.string "¿De dónde sales tú?$"

AzaleaCarbonS1_Primer_Combate_Texto_5:
.string "No vamos a renunciar a este lugar, su\n"
	.string "ubicación es perfecta, aquí contamos\l"
	.string "con todas las materias primas\l"
	.string "necesarias.$"

AzaleaCarbonS1_Segundo_Combate::
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_1 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_3 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_5 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_6 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_7 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_8 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_9 MSGBOX_AUTOCLOSE
release
end

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
.string "Así que te niegas. Te diré algo, aunque\n"
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
	.string "del mundo puedes arrebatarnos este\l"
	.string "lugar.$"

AzaleaCarbonS1_Segundo_Combate_Texto_9:
.string "A lo máximo a lo que puedes aspirar es a\n"
	.string "llegar a un acuerdo, eso si mi JEFE lo\l"
	.string "estima conveniente.$"

