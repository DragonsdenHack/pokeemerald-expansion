SaffronCity_Gym_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_Gym_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_Gym_OnFrame
    .byte 0

SaffronCity_Gym_OnFrame:
map_script_2 VAR_ROUTE105_STATE, 0, SaffronCity_No_Pass_Gym
map_script_2 VAR_ROUTE105_STATE, 1, SaffronCity_Can_Pass_Gym
	.2byte 0

SaffronCityGym_EventScript_Exorcista::
	trainerbattle_single TRAINER_JENNY_2, SaffronCityGym_Text_ExorcistaIntro, SaffronCityGym_Text_ExorcistaDefeated
	msgbox SaffronCityGym_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Exorcista2::
	trainerbattle_single TRAINER_CARLEE, SaffronCityGym_Text_Exorcista2Intro, SaffronCityGym_Text_Exorcista2Defeated
	msgbox SaffronCityGym_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Exorcista3::
	trainerbattle_single TRAINER_LAUREL, SaffronCityGym_Text_Exorcista3Intro, SaffronCityGym_Text_Exorcista3Defeated
	msgbox SaffronCityGym_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium::
	trainerbattle_single TRAINER_KAREN_4, SaffronCityGym_Text_MediumIntro, SaffronCityGym_Text_MediumDefeated
	msgbox SaffronCityGym_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium2::
	trainerbattle_single TRAINER_GEORGIA, SaffronCityGym_Text_Medium2Intro, SaffronCityGym_Text_Medium2Defeated
	msgbox SaffronCityGym_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium3::
	trainerbattle_single TRAINER_KAREN_2, SaffronCityGym_Text_Medium3Intro, SaffronCityGym_Text_Medium3Defeated
	msgbox SaffronCityGym_Text_Medium3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium4::
	trainerbattle_single TRAINER_KAREN_3, SaffronCityGym_Text_Medium4Intro, SaffronCityGym_Text_Medium4Defeated
	msgbox SaffronCityGym_Text_Medium4PostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_No_Pass_Gym::
delay 70
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox SaffronCity_No_Pass_Gym_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_No_Pass_Gym_move1
waitmovement 0x0
warp MAP_SAFFRON_CITY, 46, 13
release
end

SaffronCity_No_Pass_Gym_move1:
face_down
step_end


SaffronCity_Can_Pass_Gym::
delay 20
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox SaffronCity_No_Pass_Gym_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox SaffronCity_No_Pass_Gym_Texto_2 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE105_STATE, 2
release
end


SaffronCity_No_Pass_Gym_Texto_1:
.string "¡Malditos ROCKET! ¿No habéis tenido\n"
	.string "suficiente con la humillación de SILPH?\l"
	.string "¡Da un paso más y te devolveré a las\l"
	.string "cloacas de AZULONA de un PSÍQUICO!$"

SaffronCity_No_Pass_Gym_Texto_2:
.string "¡Un momento! Esa LICENCIA... Solo las\n"
	.string "altas esferas del COMITÉ de la LIGA\l"
	.string "tienen una así... Disculpe el\l"
	.string "malentendido, SIR. Todo está en orden,\l"
	.string "espero que pueda disfrutar de\l"
	.string "nuestras instalaciones.$"

SaffronCity_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Gym_Guy_2
msgbox SaffronCity_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Gym_Guy_2::
msgbox SaffronCity_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Gym_Guy_Texto_1:
.string "¡Hola, aspirante al título!\p"
	.string "¡Los POKéMON de SABRINA usan el\n"
	.string "poder de la mente, no la fuerza!\p"
	.string "¡Los POKéMON del tipo LUCHA\n"
	.string "son débiles contra los de tipo\l"
	.string "PSÍQUICO!\p"
	.string "¡Se debilitan casi antes de poder\n"
	.string "prepararse!$"

SaffronCity_Gym_Guy_Texto_2:
.string "¿Poder mental?\p"
	.string "¡Si yo lo tuviera me haría rico en\n"
	.string "las tragaperras!$"

SaffronCity_Estatua::
compare VAR_UNUSED_0x40F7, 22
goto_if_gt SaffronCity_Estatua_Estatua_3
msgbox SaffronCity_Estatua_Texto_4 MSGBOX_SIGN
release
end

SaffronCity_Estatua_Estatua_3::
compare VAR_ROUTE105_STATE, 0
goto_if_eq SaffronCity_Estatua_3
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Estatua_2
msgbox SaffronCity_Estatua_Texto_1 MSGBOX_SIGN
release
end

SaffronCity_Estatua_2::
msgbox SaffronCity_Estatua_Texto_2 MSGBOX_SIGN
release
end

SaffronCity_Estatua_3::
msgbox SaffronCity_Estatua_Texto_3 MSGBOX_SIGN
release
end

SaffronCity_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZAFRÁN: SABRINA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

SaffronCity_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZAFRÁN: SABRINA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

SaffronCity_Estatua_Texto_3:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZAFRÁN: SABRINA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL y ROJO$"

SaffronCity_Estatua_Texto_4:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZAFRÁN: SABRINA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "¡Está vacío!$"

SaffronCity_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Lider_Gimnasio_2
msgbox SaffronCity_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SaffronCity_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SABRINA, SaffronCity_Lider_Gimnasio_Texto_2
msgbox SaffronCity_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM04_CALM_MIND
msgbox SaffronCity_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox SaffronCity_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_JENNY_2
settrainerflag TRAINER_CARLEE
settrainerflag TRAINER_LAUREL
settrainerflag TRAINER_KAREN_4
settrainerflag TRAINER_GEORGIA
settrainerflag TRAINER_KAREN_2
settrainerflag TRAINER_KAREN_3
setvar VAR_ROUTE105_STATE, 3
release
end

SaffronCity_Lider_Gimnasio_2::
msgbox SaffronCity_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Lider_Gimnasio_Texto_1:
.string "...\n"
	.string "...\l"
	.string "Vaya, es curioso, hace poco me\l"
	.string "ocurrió también con otra chica\l"
	.string "vestida de ROCKET, pero vuestra\l"
	.string "llegada me pilla totalmente por\l"
	.string "sorpresa, parece que, a diferencia\l"
	.string "de muchos otros que han pasado por\l"
	.string "aquí, no estáis atados por los\l"
	.string "lazos del destino, sois un libro\l"
	.string "abierto aún por escribir, pura\l"
	.string "potencialidad. Aprovechadla, es un\l"
	.string "don poco común en estos días que\l"
	.string "corren...\l"
	.string "En fin, ya estoy divagando\l"
	.string "perdóname, la realidad es que\l"
	.string "prefiero hablar de esos temas más\l"
	.string "que combatir, pero se me dio el\l"
	.string "don de leer la mente y predecir el\l"
	.string "futuro, lo que me ha hecho\l"
	.string "extraordinaria entrenando POKÉMON\l"
	.string "PSÍQUICOS.$"

SaffronCity_Lider_Gimnasio_Texto_1.1:
.string "¡Si así lo deseas te lo mostraré!$"

SaffronCity_Lider_Gimnasio_Texto_2:
.string "¡Estoy impresionada!\n"
	.string "Acepto mi derrota.\p"
	.string "¡Admito que no he sido lo bastante\n"
	.string "fuerte y por eso he perdido!\p"
	.string "¡Has ganado la MEDALLA PANTANO!$"


SaffronCity_Lider_Gimnasio_Texto_3:
.string "¡La MT04 contiene PAZ MENTAL!\p"
	.string "Hace concentrarse a los POKéMON\n"
	.string "para que aumente su AT. ESP.\l"
	.string "y su DEF. ESP.$"


SaffronCity_Lider_Gimnasio_Texto_4:
.string "¡Con la MEDALLA PANTANO, todo\n"
	.string "POKéMON con nivel inferior a 70 te\l"
	.string "obedecerá!\p"
	.string "¡Los POKéMON más fuertes\n"
	.string "suelen desobedecer las órdenes\l"
	.string "en combate!\p"
	.string "¡No entrenes demasiado a tus\n"
	.string "POKéMON para evitar este\l"
	.string "problema!\p"
	.string "¡Espera, llévate esta MT!$"


SaffronCity_Lider_Gimnasio_Texto_5:
.string "¡{PLAYER} obtuvo la MT04\n"
	.string "de manos de SABRINA!$"


SaffronCity_Lider_Gimnasio_Texto_6:
.string "En realidad todos tenemos poderes\n"
	.string "mentales, pero la gente no lo\l"
	.string "sabe.\l"
	.string "La mente es muy poderosa, capaz\l"
	.string "casi de todo, pero no todo el\l"
	.string "mundo aprovecha ese poder.$"

Vermilion_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Gym_Guy_2
msgbox Vermilion_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Gym_Guy_2::
msgbox Vermilion_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Gym_Guy_Texto_1:
.string "Mmmm...\n"
	.string "Es cierto que tienes una LICENCIA,\l"
	.string "pero aún así tu presencia aquí se\l"
	.string "me hace rara.\l"
	.string "Te estaré vigilando...$"

Vermilion_City_Gym_Guy_Texto_2:
.string "¡Definitivamente no eres un\n"
	.string "ROCKET!\l"
	.string "¡Esos miserables jamás podrían\l"
	.string "hacerle sombra a nuestro gran\l"
	.string "LT.SURGE!$"

Vermilion_City_Estatua::
compare VAR_UNUSED_0x40F7, 28
goto_if_gt Vermilion_City_Estatua_Estatua_3
msgbox Vermilion_City_Estatua_Texto_4 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_Estatua_3::
compare VAR_ROUTE108_STATE, 0
goto_if_eq Vermilion_City_Estatua_3
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Estatua_2
msgbox Vermilion_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_2::
msgbox Vermilion_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_3::
msgbox Vermilion_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CARMÍN: LT.SURGE\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Vermilion_City_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CARMÍN: LT.SURGE\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

Vermilion_City_Estatua_Texto_3:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CARMÍN: LT.SURGE\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL y ROJO$"

Vermilion_City_Estatua_Texto_4:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CARMÍN: LT.SURGE\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "¡Está vacío!$"


Vermilion_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Lider_Gimnasio_2
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Vermilion_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SURGE_2, Vermilion_City_Lider_Gimnasio_Texto_2
msgbox Vermilion_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM34_SHOCK_WAVE
msgbox Vermilion_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Vermilion_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_WINSTON_5
settrainerflag TRAINER_ETHAN_4
settrainerflag TRAINER_LAO_5
setvar VAR_ROUTE108_STATE, 3
release
end

Vermilion_City_Lider_Gimnasio_2::
msgbox Vermilion_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Lider_Gimnasio_Texto_1:
.string "¿¡Esto es en serio?!\n"
	.string "¡Tenéis la caradura de entrar aquí\l"
	.string "después de lo ocurrido en la\l"
	.string "CENTRAL ENERGÍA!\l"
	.string "¡Primero esa pelirroja amiga tuya\l"
	.string "y ahora tú, malditos insurrectos!\l"
	.string "¡Vas a probar la verdadera furia\l"
	.string "de mis POKÉMON ELÉCTRICOS, verás\l"
	.string "el porqué todos me temían en la\l"
	.string "guerra!\l"
	.string "¡Después de acabar con tus POKÉMON\l"
	.string "te freiré a base de descargas a ti\l"
	.string "también!$"

Vermilion_City_Lider_Gimnasio_Texto_2:
.string "No puede ser cierto, ¡perdí de\n"
	.string "nuevo!\l"
	.string "¡No me queda más remedio que\l"
	.string "entregarte la MEDALLA TRUENO!$"

Vermilion_City_Lider_Gimnasio_Texto_3:
.string "Te daré un pequeño consejo, huye\n"
	.string "de esta región antes de que te\l"
	.string "explote en la cara toda la furia\l"
	.string "de LANCE.$"

Vermilion_City_Lider_Gimnasio_Texto_4:
.string "No voy a decirte lo que hace la\n"
	.string "MEDALLA TRUENO si es lo que\l"
	.string "esperas ROCKET, de todos modos\l"
	.string "usarás VUELO cuando te de la gana,\l"
	.string "aunque sí cumpliré mi parte como\l"
	.string "LÍDER DE GIMNASIO y te entregaré\l"
	.string "esta MT.$"

Vermilion_City_Lider_Gimnasio_Texto_5:
.string "{PLAYER} recibió la MT34\n"
	.string "del LT. SURGE.$"

Vermilion_City_Lider_Gimnasio_Texto_6:
.string "La MT34 contiene ONDA VOLTIO, es\n"
	.string "algo menos potente que RAYO pero\l"
	.string "nunca fallará, ¡si ahora mismo\l"
	.string "pudiera ordenaría a mi RAICHU\l"
	.string "usarla sobre ti ROCKET dalo por\l"
	.string "hecho!$"

Pewter_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Gym_Guy_2
msgbox Pewter_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Gym_Guy_2::
msgbox Pewter_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Gym_Guy_Texto_1:
.string "Voy a presentar una queja ante el\n"
	.string "COMITÉ de la LIGA para que\l"
	.string "prohiban ese espantoso uniforme\l"
	.string "que llevas, esta maldita moda de\l"
	.string "reirse del TEAM ROCKET por su\l"
	.string "fracaso en SILPH debe de terminar.$"

Pewter_City_Gym_Guy_Texto_2:
.string "¡Llevarás un look pésimo pero le\n"
	.string "has dado una buena tunda a BROCK!$"

Pewter_City_Estatua::
compare VAR_ROUTE111_STATE, 1
goto_if_eq Pewter_City_Estatua_3
compare VAR_ROUTE111_STATE, 2
goto_if_eq Pewter_City_Estatua_3
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Estatua_2
msgbox Pewter_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Pewter_City_Estatua_2::
msgbox Pewter_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Pewter_City_Estatua_3::
msgbox Pewter_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Pewter_City_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PLATEADA: BROCK\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Pewter_City_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PLATEADA: BROCK\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

Pewter_City_Estatua_Texto_3:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de PLATEADA: BROCK\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Pewter_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Lider_Gimnasio_2
msgbox Pewter_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Pewter_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BROCK, Pewter_City_Lider_Gimnasio_Texto_2
msgbox Pewter_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM39_ROCK_TOMB
msgbox Pewter_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Pewter_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE111_STATE, 3
settrainerflag TRAINER_STEVE_1
release
end

Pewter_City_Lider_Gimnasio_2::
msgbox Pewter_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Lider_Gimnasio_Texto_1:
.string "Pero qué tenemos aquí, otro\n"
	.string "aspirante al título, hace nada ha\l"
	.string "pasado una chica vestida también\l"
	.string "de ROCKET, parece que está de moda\l"
	.string "burlarse de su fracaso en SILPH.\l"
	.string "Sea como sea, mis POKÉMON TIPO\l"
	.string "ROCA son los más resistentes que\l"
	.string "verás, ¿de verdad piensas retarme\l"
	.string "sabiendo que perderas?$"

Pewter_City_Lider_Gimnasio_Texto_1.1:
	.string "¡Te mueve el orgullo de ENTRENADOR\n"
	.string "eh!\l"
	.string "¡Entonces muéstrame tu mejor\l"
	.string "versión!$"

Pewter_City_Lider_Gimnasio_Texto_2:
.string "Te he subestimado.\p"
	.string "¡Como prueba de tu victoria, aquí\n"
	.string "tienes la MEDALLA ROCA!$"

Pewter_City_Lider_Gimnasio_Texto_3:
.string "Vaya, hoy no es mi día, primero\n"
	.string "esa chica y ahora tú, en fin,\l"
	.string "parece que tienes talento chico,\l"
	.string "si lo pones al servicio del bien\l"
	.string "podrás hacer de esta región un\l"
	.string "lugar mucho mejor para vivir...$"

Pewter_City_Lider_Gimnasio_Texto_4:
.string "¡Espera!\n"
	.string "Llévate esto contigo.$"

Pewter_City_Lider_Gimnasio_Texto_5:
.string "{PLAYER} recibió MT39\n"
	.string "de BROCK.$"

Pewter_City_Lider_Gimnasio_Texto_6:
.string "Contiene TUMBA ROCAS, no solo\n"
	.string "podrás golpear con cierta potencia\l"
	.string "al rival, sino que también le\l"
	.string "reducirás en un nivel su\l"
	.string "velocidad, ideal para tipos ROCA\l"
	.string "lentos como GRAVELER o RHYDON.$"

Cerulean_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Gym_Guy_2
msgbox Cerulean_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Cerulean_City_Gym_Guy_2::
msgbox Cerulean_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Cerulean_City_Gym_Guy_Texto_1:
.string "Déjame darte un consejo chaval, ni\n"
	.string "se te ocurra presentarte así ante\l"
	.string "la ÉLITE 4, ni siquiera de broma.$"

Cerulean_City_Gym_Guy_Texto_2:
.string "¡Las apariencias engañan!\n"
	.string "¡Así que usaste el uniforme ROCKET\l"
	.string "para despistar a MISTY, eh!$"

Cerulean_City_Estatua::
compare VAR_UNUSED_0x40F7, 22
goto_if_gt Cerulean_City_Estatua_Estatua_3
msgbox Cerulean_City_Estatua_Texto_4 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_Estatua_3::
compare VAR_ROUTE109_STATE, 0
goto_if_eq Cerulean_City_Estatua_3
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Estatua_2
msgbox Cerulean_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_2::
msgbox Cerulean_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_3::
msgbox Cerulean_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CELESTE: MISTY\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Cerulean_City_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CELESTE: MISTY\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

Cerulean_City_Estatua_Texto_3:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CELESTE: MISTY\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL y ROJO$"

Cerulean_City_Estatua_Texto_4:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CELESTE: MISTY\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "¡Está vacío!$"

Cerulean_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Lider_Gimnasio_2
msgbox Cerulean_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Cerulean_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MISTY, Cerulean_City_Lider_Gimnasio_Texto_2
msgbox Cerulean_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM03_WATER_PULSE
msgbox Cerulean_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE109_STATE, 3
settrainerflag TRAINER_BLAKE
settrainerflag TRAINER_LUIS
release
end

Cerulean_City_Lider_Gimnasio_2::
msgbox Cerulean_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end


Cerulean_City_Lider_Gimnasio_Texto_1:
.string "¡Hola! ¡Tú no eres de por aquí!\p"
	.string "¡Los ENTRENADORES profesionales\n"
	.string "deben tener una estrategia para\l"
	.string "sus POKéMON!\p"
	.string "¿Qué táctica sigues tú para\n"
	.string "atrapar y entrenar POKéMON?$"

Cerulean_City_Lider_Gimnasio_Texto_1.1:
	.string "¡Mi táctica es la ofensiva total\n"
	.string "con los POKéMON del TIPO AGUA!$"

Cerulean_City_Lider_Gimnasio_Texto_2:
.string "¡Uauuu!\n"
	.string "¡Eres demasiado!\p"
	.string "¡Muy bien!\p"
	.string "¡Toma la MEDALLA CASCADA para que\n"
	.string "todos sepan que me has ganado!$"

Cerulean_City_Lider_Gimnasio_Texto_3:
.string "La MT03 contiene HIDROPULSO, no es\n"
	.string "tan potente como SURF o ESCALDAR,\l"
	.string "¡pero confundirá al rival en un\l"
	.string "20% de los casos!$"

Cerulean_City_Lider_Gimnasio_Texto_4:
.string "¡La MEDALLA CASCADA obligará a\n"
	.string "todos los POKéMON por debajo del\l"
	.string "nivel 30 a obedecer!\p"
	.string "¡Incluidos los forasteros!\p"
	.string "¡Y podrás usar CORTAR siempre que\n"
	.string "quieras!\p"
	.string "¡Puedes CORTAR pequeños arbustos\n"
	.string "para abrir nuevos caminos!\p"
	.string "¡Voy a darte mi MT favorita!$"

Cerulean_City_Lider_Gimnasio_Texto_5:
.string "{PLAYER} recibió la MT03\n"
	.string "de MISTY.$"

Fuchsia_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Gym_Guy_2
msgbox Fuchsia_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Gym_Guy_2::
msgbox Fuchsia_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Gym_Guy_Texto_1:
.string "¿Cómo?\n"
	.string "¡Pero yo a ti te conozco!\l"
	.string "¿Qué broma es esta?\l"
	.string "¡Habrás engañado al sistema pero\l"
	.string "no a mí!$"

Fuchsia_City_Gym_Guy_Texto_2:
.string "¡Esto es una farsa!\n"
	.string "¡Me quejaré a la LIGA POKÉMON!\l"
	.string "¡Sé que eres un ROCKET real!$"

Fuchsia_City_Estatua::
compare VAR_ROUTE106_STATE, 0
goto_if_eq Fuchsia_City_Estatua_3
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Estatua_2
msgbox Fuchsia_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_2::
msgbox Fuchsia_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_3::
msgbox Fuchsia_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de FUCSIA: KOGA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Fuchsia_City_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de FUCSIA: KOGA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

Fuchsia_City_Estatua_Texto_3:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de FUCSIA: KOGA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL y ROJO$"

Fuchsia_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Lider_Gimnasio_2
msgbox Fuchsia_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Fuchsia_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KOGA, Fuchsia_City_Lider_Gimnasio_Texto_2
msgbox Fuchsia_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM06_TOXIC
msgbox Fuchsia_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Fuchsia_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_MIGUEL_1
settrainerflag TRAINER_ANNA_AND_MEG_3
settrainerflag TRAINER_MIGUEL_3
settrainerflag TRAINER_COLTON
settrainerflag TRAINER_MIGUEL_2
settrainerflag TRAINER_ANNA_AND_MEG_4
setvar VAR_ROUTE106_STATE, 3
release
end

Fuchsia_City_Lider_Gimnasio_2::
msgbox Fuchsia_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Lider_Gimnasio_Texto_1:
.string "KOGA: ¡{PLAYER}!\n"
	.string "¡Has vuelto!\l"
	.string "¡Así que vas a meterte en la boca\l"
	.string "del lobo retando a la LIGA\l"
	.string "POKÉMON!\l"
	.string "Desde aquí tienes todo mi apoyo\l"
	.string "{PLAYER}, nunca olvidaré lo que\l"
	.string "hiciste por los MOTORISTAS y por\l"
	.string "KANTO en general.$"

Fuchsia_City_Lider_Gimnasio_Texto_1.1:
.string "No te lo pondré fácil {PLAYER},\n"
	.string "nadie maneja los POKÉMON del TIPO\l"
	.string "VENENO como yo, ¡ni siquiera los\l"
	.string "EJECUTIVOS ROCKET!$"


Fuchsia_City_Lider_Gimnasio_Texto_2:
.string "No esperaba menos de ti,\n"
	.string "mereces la confianza de GIOVANNI y\l"
	.string "de todo el que luche por una KANTO\l"
	.string "mejor.\l"
	.string "¡Aquí tienes la MEDALLA ALMA!$"

Fuchsia_City_Lider_Gimnasio_Texto_3:
.string "Unirte al TEAM ROCKET es lo mejor\n"
	.string "que pudiste hacer, mírate, te ha\l"
	.string "forjado un gran carácter y\l"
	.string "personalidad, eres conocedor de la\l"
	.string "verdad que esta región esconde,\l"
	.string "ese ROJO en cambio vive en su\l"
	.string "mundo de fantasía, cree que esto\l"
	.string "es un juego, ¡hazme el favor de\l"
	.string "darle a ese niño malcriado una\l"
	.string "buena dosis de realidad si te\l"
	.string "cruzas con él en la LIGA!$"

Fuchsia_City_Lider_Gimnasio_Texto_4:
.string "¡Ahora que tienes la MEDALLA ALMA,\n"
	.string "la DEFENSA de tus POKéMON\l"
	.string "aumentará!\p"
	.string "¡Y podrás hacer SURF siempre\n"
	.string "que quieras!\p"
	.string "¡Ah!\n"
	.string "¡Llévate esto también!$"

Fuchsia_City_Lider_Gimnasio_Texto_5:
.string "¡{PLAYER} obtuvo la MT06\n"
	.string "de manos de KOGA!$"

Fuchsia_City_Lider_Gimnasio_Texto_6:
.string "¡La MT06 contiene TÓXICO!\p"
	.string "¡Es una técnica secreta de hace\n"
	.string "más de 400 años!$"

Cinnabar_Island_Lider_Gimnasio::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Lider_Gimnasio_2
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.3 MSGBOX_AUTOCLOSE
delay 10
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.2 MSGBOX_AUTOCLOSE
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_1, Cinnabar_Island_Lider_Gimnasio_Texto_2
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM38_FIRE_BLAST
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_SHANE
settrainerflag TRAINER_TONY_5
settrainerflag TRAINER_TAKAO
settrainerflag TRAINER_JUSTIN
settrainerflag TRAINER_HITOSHI
settrainerflag TRAINER_ETHAN_1
settrainerflag TRAINER_KIYO
setvar VAR_UNUSED_0x40F7, 81
release
end

Cinnabar_Island_Lider_Gimnasio_2::
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Cinnabar_Island_Gym_Estatuas::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Gym_Estatuas_2
msgbox Cinnabar_Island_Gym_Estatuas_Texto_1 MSGBOX_SIGN
release
end

Cinnabar_Island_Gym_Estatuas_2::
msgbox Cinnabar_Island_Gym_Estatuas_Texto_2 MSGBOX_SIGN
release
end

Cinnabar_Island_Gym_Estatuas_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CANELA: BLAINE\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Cinnabar_Island_Gym_Estatuas_Texto_2:
	.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CANELA: BLAINE\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"


Cinnabar_Island_Gym_Guy::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Gym_Guy_2
msgbox Cinnabar_Island_Gym_Guy_Texto_1 MSGBOX_NPC
release
end

Cinnabar_Island_Gym_Guy_2::
msgbox Cinnabar_Island_Gym_Guy_Texto_2 MSGBOX_NPC
release
end

Cinnabar_Island_Gym_Guy_Texto_1:
.string "Entonces, ¿ahora está de moda ir de\n"
	.string "ROCKET por lo del fracaso en SILPH? ¡Se\l"
	.string "lo tienen merecido!$"

Cinnabar_Island_Gym_Guy_Texto_2:
.string "No sé porqué, pero contigo ha usado un\n"
	.string "equipo más potente que contra un\l"
	.string "chaval que paso por aquí hace no\l"
	.string "mucho. Pero aún así, ¡has ganado a esa\l"
	.string "antorcha con patas!$"

Cinnabar_Island_Lider_Gimnasio_Texto_1:
.string "¡Ja!\p"
	.string "¡Soy BLAINE! ¡LÍDER del GIMNASIO\n"
	.string "de CANELA!\p"
	.string "¡Mis feroces POKéMON de FUEGO\n"
	.string "quemarán a quien me desafíe!$"

Cinnabar_Island_Lider_Gimnasio_Texto_1.1:
.string "¡Ja! ¡Más vale que tengas\n"
	.string "ANTIQUEMAR!$"

Cinnabar_Island_Lider_Gimnasio_Texto_1.2:
.string "Por otro lado, tendrás que disculpar a\n"
	.string "mi GIMNASIO, pero últimamente han\l"
	.string "venido muchos aspirantes y no nos ha\l"
	.string "dado tiempo a colocar nuevos acertijos.$"

Cinnabar_Island_Lider_Gimnasio_Texto_1.3:
.string "Debes saber que no me gusta esa moda\n"
	.string "de hacer cosplay con el TEAM ROCKET.\l"
	.string "Son unos traidores a la verdadera KANTO\l"
	.string "y merecen desaparecer de su historia,\l"
	.string "con actos como ese solo se afianzan en\l"
	.string "el imaginario colectivo, ¿entiendes?$"

Cinnabar_Island_Lider_Gimnasio_Texto_2:
.string "¡Me has machacado!\n"
	.string "¡He quedado reducido a nada!\p"
	.string "¡Has ganado la MEDALLA VOLCÁN!$"

Cinnabar_Island_Lider_Gimnasio_Texto_3:
.string "La MT38 contiene LLAMARADA, muy\n"
	.string "pocos movimientos tienen un ratio\l"
	.string "POTENCIA-PRECISIÓN mejor, es el\l"
	.string "movimiento fuego universal por\l"
	.string "excelencia.\l"
	.string "¡MAGMAR o CHARIZARD harán\l"
	.string "destrozos con ello debido a sus\l"
	.string "buenos ATAQUES ESPECIALES!$"

Cinnabar_Island_Lider_Gimnasio_Texto_4:
.string "¡Ja!\p"
	.string "¡La MEDALLA VOLCÁN mejora las\n"
	.string "habilidades ESPECIALES de tus\l"
	.string "POKéMON!\p"
	.string "¡Mira, también te daré esto!$"

Cinnabar_Island_Lider_Gimnasio_Texto_5:
.string "¡{PLAYER} recibió la MT38\n"
	.string "de manos de BLAINE!$"

Cinnabar_Island_Lider_Gimnasio_Texto_6:
.string "¡LLAMARADA es lo máximo en la\n"
	.string "técnica de las quemaduras!\p"
	.string "¡No la malgastes con los POKéMON\n"
	.string "acuáticos!$"

Celadon_Ciyy_Estatua::
compare VAR_ROUTE107_STATE, 0
goto_if_eq Celadon_Ciyy_Estatua_3
compare VAR_ROUTE107_STATE, 2
goto_if_gt Celadon_Ciyy_Estatua_2
msgbox Celadon_Ciyy_Estatua_Texto_1 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_2::
msgbox Celadon_Ciyy_Estatua_Texto_2 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_3::
msgbox Celadon_Ciyy_Estatua_Texto_3 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZULONA: ERIKA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

Celadon_Ciyy_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZULONA: ERIKA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

Celadon_Ciyy_Estatua_Texto_3:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de AZULONA: ERIKA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL y ROJO$"


Celadon_Ciyy_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE107_STATE, 2
goto_if_gt Celadon_Ciyy_Lider_Gimnasio_2
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ERIKA, Celadon_Ciyy_Lider_Gimnasio_Texto_2
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM19_GIGA_DRAIN
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE107_STATE, 3
settrainerflag TRAINER_JESSICA_3
settrainerflag TRAINER_BRAWLY_1
settrainerflag TRAINER_WATTSON_1
settrainerflag TRAINER_NOLEN
settrainerflag TRAINER_FLANNERY_1
settrainerflag TRAINER_JESSICA_4
settrainerflag TRAINER_PRESLEY
release
end

Celadon_Ciyy_Lider_Gimnasio_2::
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end


Celadon_Ciyy_Lider_Gimnasio_Texto_1:
.string "¡Hola! ¡Qué buen tiempo hace!\n"
	.string "Es tan agradable.\p"
	.string "¡Ah, hola!... ¡Debo de haberme\n"
	.string "dormido! ¿Qué tal?\p"
	.string "Me llamo ERIKA. Soy la LÍDER del\n"
	.string "GIMNASIO de CIUDAD AZULONA.\p"
	.string "Enseño el arte de las flores.\n"
	.string "Mis POKéMON son del tipo PLANTA.\p"
	.string "¡Oh, perdona! ¡No tenía ni idea de\n"
	.string "que quisieras desafiarme!$"
	
Celadon_Ciyy_Lider_Gimnasio_Texto_1.1:
.string "¡Como quieras! ¡No pienso perder!$"

Celadon_Ciyy_Lider_Gimnasio_Texto_2:
.string "¡Reconozco mi derrota!\p"
	.string "Eres muy fuerte.\p"
	.string "Te voy a dar la MEDALLA ARCOIRIS.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_3:
.string "¿Estás estudiando a los POKéMON?\n"
	.string "Admito que me has impresionado.\p"
	.string "No coleccionaría POKéMON si\n"
	.string "fueran feos.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_4:
.string "La MEDALLA ARCOIRIS hará que los\n"
	.string "POKéMON de nivel inferior a 50 te\l"
	.string "obedezcan.\p"
	.string "Y permitirá que los POKéMON usen\n"
	.string "FUERZA siempre que quieras.\p"
	.string "¡Ah, llévate esto también!$"

Celadon_Ciyy_Lider_Gimnasio_Texto_5:
.string "{PLAYER} recibió la MT19\n"
	.string "de ERIKA.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_6:
.string "La MT19 contiene GIGADRENADO, no\n"
	.string "solo cuenta con unos más que\l"
	.string "decentes 75 de potencia, sino que\l"
	.string "absorberá la mitad de la salud que\l"
	.string "le restes al rival y te\l"
	.string "recuperarás con ella, ¿no es\l"
	.string "genial?$"
