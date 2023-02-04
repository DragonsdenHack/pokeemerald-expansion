Olivine_Lighthouse_MapScripts::
	.byte 0

OliivineLighthouse1::
end



OliivineLighthouse2::
end



OliivineLighthouse3::
end



OliivineLighthouse4::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_4:
.string "Los CHINCHOU fueron los primeros\n"
.string "POKÉMON en servir como guía a los\l"
.string "marineros. Este FARO se construyó\l"
.string "en honor a ellos.$"



OliivineLighthouse5::
end



OliivineLighthouse6::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_6, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_6:
.string "NOCTOWL es un POKÉMON común entre\n"
.string "los marineros de JOHTO, su gran\l"
.string "sentido de la orientación y visión\l"
.string "nocturna nos es de gran ayuda.$"



OliivineLighthouse7::
end



OliivineLighthouse8::
end



OliivineLighthouse9::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_9, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_9:
.string "Me encantaría poder ver en persona\n"
.string "al poderoso POKÉMON que ilumina el\l"
.string "FARO, pero no sé cómo subir hasta\l"
.string "arriba…$"



OliivineLighthouse10::
end



OliivineLighthouse11::
end



OliivineLighthouse12::
end



OliivineLighthouse13::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_13, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_13:
.string "La ruta marítima OLIVO-TRIGAL\n"
.string "está llena de rocas, lo que\l"
.string "la hace innavegable. Si no, hace\l"
.string "tiempo que TRIGAL hubiera\l"
.string "dispuesto un enorme puerto para\l"
.string "ampliar aún más sus\l"
.string "conexiones.$"



OliivineLighthouse14::
end



OliivineLighthouse15::
end



OliivineLighthouse16::
end



OliivineLighthouse17::
end



OliivineLighthouse18::
end



OliivineLighthouse19::
end



OliivineLighthouse20::
end



OliivineLighthouse_EventScript_Marinero::
	trainerbattle_single TRAINER_CHANDLER, OliivineLighthouse_Text_MarineroIntro, OliivineLighthouse_Text_MarineroDefeated
	msgbox OliivineLighthouse_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero::
	trainerbattle_single TRAINER_KALEB, OliivineLighthouse_Text_CaballeroIntro, OliivineLighthouse_Text_CaballeroDefeated
	msgbox OliivineLighthouse_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Chico::
	trainerbattle_single TRAINER_JOSEPH, OliivineLighthouse_Text_ChicoIntro, OliivineLighthouse_Text_ChicoDefeated
	msgbox OliivineLighthouse_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero2::
	trainerbattle_single TRAINER_ALYSSA, OliivineLighthouse_Text_Caballero2Intro, OliivineLighthouse_Text_Caballero2Defeated
	msgbox OliivineLighthouse_Text_Caballero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero2::
	trainerbattle_single TRAINER_MARCOS, OliivineLighthouse_Text_Marinero2Intro, OliivineLighthouse_Text_Marinero2Defeated
	msgbox OliivineLighthouse_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Necio::
	trainerbattle_single TRAINER_RHETT, OliivineLighthouse_Text_NecioIntro, OliivineLighthouse_Text_NecioDefeated
	msgbox OliivineLighthouse_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero3::
	trainerbattle_single TRAINER_TYRON, OliivineLighthouse_Text_Marinero3Intro, OliivineLighthouse_Text_Marinero3Defeated
	msgbox OliivineLighthouse_Text_Marinero3PostBattle, MSGBOX_AUTOCLOSE
	end

Olivine_Lighthouse_Combate_Farero::
msgbox Olivine_Lighthouse_Combate_Farero_Texto_1 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_2 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_3 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_4 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_5 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_6 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_7 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_8 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_9 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_10 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_11 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_12 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_13 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_14 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_15 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_16 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_17 MSGBOX_AUTOCLOSE
release
end

Olivine_Lighthouse_Combate_Farero_Texto_1:
.string "????: La ampliación del PUERTO a\n"
	.string "otras regiones será todo un éxito,\l"
	.string "ya lo verás.$"

Olivine_Lighthouse_Combate_Farero_Texto_2:
.string "????: ¿Puedo ayudarte?$"

Olivine_Lighthouse_Combate_Farero_Texto_3:
.string "????: Ah, así que retar al LÍDER\n"
	.string "de OLIVO. Yo soy el FARERO.$"

Olivine_Lighthouse_Combate_Farero_Texto_4:
.string "FARERO: Al LÍDER lo tienes justo\n"
	.string "ahí, estábamos debatiendo el\l"
	.string "futuro de CIUDAD OLIVO, su PUERTO,\l"
	.string "su FARO, su GIMNASIO...$"

Olivine_Lighthouse_Combate_Farero_Texto_5:
.string "CROM: Pronto vendrán muchos\n"
	.string "cambios, esperemos que para bien.\l"
	.string "Mi viejo amigo y yo intentaremos\l"
	.string "dejar esta ciudad en las mejores\l"
	.string "condiciones posibles antes de\l"
	.string "partir.$"

Olivine_Lighthouse_Combate_Farero_Texto_6:
.string "Hace tiempo que no acepto ningún\n"
	.string "reto de forma oficial. Lo siento\l"
	.string "chico, pero cuando todo este\l"
	.string "periodo de transición acabe,\l"
	.string "podrás retar a la nueva LÍDER que\l"
	.string "he escogido: YASMINA.\l"
	.string "Si logra evolucionar de una vez a\l"
	.string "su ONIX, claro.$"

Olivine_Lighthouse_Combate_Farero_Texto_7:
.string "Le queda mucho camino por\n"
	.string "recorrer, si eres experimentado me\l"
	.string "temo que no tendrás problema en\l"
	.string "derrotarla. Aún sigue usando a\l"
	.string "MAGNEMITE, así que imaginate.$"

Olivine_Lighthouse_Combate_Farero_Texto_8:
.string "Aunque...$"

Olivine_Lighthouse_Combate_Farero_Texto_9:
.string "Me agrada la idea de un último\n"
	.string "gran combate antes de partir,\l"
	.string "sería la guinda sobre el pastel a\l"
	.string "mi estancia en CIUDAD OLIVO.\l"
	.string "La cuestión es...\l"
	.string "¿Estarías tú a la altura de ese\l"
	.string "último gran combate?$"

Olivine_Lighthouse_Combate_Farero_Texto_10:
.string "FARERO: Eso podemos comprobarlo\n"
	.string "aquí y ahora.$"

Olivine_Lighthouse_Combate_Farero_Texto_11:
.string "CROM: Desde luego.$"

Olivine_Lighthouse_Combate_Farero_Texto_12:
.string "No conozco mejor vara de medir por\n"
	.string "los alrededores que mi viejo amigo\l"
	.string "y dueño actual de este FARO. Es tú\l"
	.string "único tren para combatir conmigo.\l"
	.string "O lo tomas ahora o lo pierdes para\l"
	.string "siempre.$"

Olivine_Lighthouse_Combate_Farero_Texto_13:
.string "Muy bien, no se hable más.$"

Olivine_Lighthouse_Combate_Farero_Texto_14:
.string "FARERO: Usaré toda la energía de\n"
	.string "mis POKÉMON, es lo menos que puedo\l"
	.string "hacer si combatir a CROM es lo que\l"
	.string "está en juego.\l"
	.string "¡Prepárate!$"

Olivine_Lighthouse_Combate_Farero_Texto_15:
.string "¿La cola de mi AMPHAROS se apagó?$"

Olivine_Lighthouse_Combate_Farero_Texto_16:
.string "FARERO: Disculpad, debo ir al\n"
	.string "CENTRO POKÉMON cuanto antes, no\l"
	.string "esperaba que debilitaras a todos\l"
	.string "mis POKÉMON, y lo último que\l"
	.string "queremos en este FARO es tener un\l"
	.string "AMPHAROS sin energía.$"

Olivine_Lighthouse_Combate_Farero_Texto_17:
.string "CROM: ¡Jah!\n"
	.string "¡Magnífico chico, magnífico!\l"
	.string "¡Nos has dejado en shock!\l"
	.string "ENTRENADORES como tú escasean cada\l"
	.string "vez más hoy en día, estaré\l"
	.string "esperándote en el GIMNASIO para\l"
	.string "nuestro combate.\l"
	.string "¡La suerte está echada!$"

Olivine_Lighthouse_Combate_Farero_Move_1:
walk_in_place_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_2:
emote_exclamation_mark
face_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_3:
walk_right
walk_up
walk_in_place_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_4:
walk_in_place_right
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_5:
walk_left
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_6:
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_7:
face_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_8:
face_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_9:
face_right
step_end

Olivine_Lighthouse_Combate_Farero_Move_10:
walk_up
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_11:
walk_down
walk_left
walk_down
step_end
