TwoIsland_Torre_P4_MapScripts::
	.byte 0

TwoIsland_Torre_P4_EventScript_Rocket::
	trainerbattle_single TRAINER_TRAINER_163, TwoIsland_Torre_P4_Text_RocketIntro, TwoIsland_Torre_P4_Text_RocketDefeated
	msgbox TwoIsland_Torre_P4_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P4_EventScript_Rocket_2::
	trainerbattle_single TRAINER_TRAINER_164, TwoIsland_Torre_P4_Text_Rocket2Intro, TwoIsland_Torre_P4_Text_Rocket2Defeated
	msgbox TwoIsland_Torre_P4_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P4_Dormido::
lock
msgbox TwoIsland_Torre_P4_Dormido_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Dormido_Texto_2 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P4_Dormido_Texto_2:
.string "(¡Está echando la siesta!)$"

TwoIsland_Torre_P4_Dormido_Texto_1:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

TwoIsland_Torre_P4_Evento_Final::
lock
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 3, TwoIsland_Torre_P4_Evento_Final_Move_2
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_2
waitmovement 0x0
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_4
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_5
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_7
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_8
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_9
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_10
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_11
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_5
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 20
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_8
waitmovement 0x0
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_7
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_19 MSGBOX_AUTOCLOSE
playse SE_POKENAV_CALL
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
delay 15
applymovement 2, TwoIsland_Torre_P4_Evento_Final_Move_12
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_13
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_21 MSGBOX_AUTOCLOSE
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_22 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_154, TwoIsland_Torre_P4_Evento_Final_Texto_23
applymovement 3, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_24 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_155, TwoIsland_Torre_P4_Evento_Final_Texto_25
delay 10
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_29 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_153, TwoIsland_Torre_P4_Evento_Final_Texto_30
playse SE_BREAKABLE_DOOR
applymovement 3, TwoIsland_Torre_P4_Evento_Final_Move_5
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_5
applymovement 2, TwoIsland_Torre_P4_Evento_Final_Move_5
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_15
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_32 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_34 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_35 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_829
fadescreen 1
delay 20
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 5
removeobject 6
fadescreen 0
clearflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
setvar VAR_UNUSED_0x404E, 4
release
end

TwoIsland_Torre_P4_Evento_Final_Move_15:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

TwoIsland_Torre_P4_Evento_Final_Move_14:
walk_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_13:
emote_exclamation_mark
delay_8
face_down
delay_8
step_end

TwoIsland_Torre_P4_Evento_Final_Move_12:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
step_end

TwoIsland_Torre_P4_Evento_Final_Move_11:
walk_in_place_up
step_end

TwoIsland_Torre_P4_Evento_Final_Move_10:
walk_slow_left
step_end

TwoIsland_Torre_P4_Evento_Final_Move_9:
walk_slow_left
face_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_8:
walk_slow_right
step_end

TwoIsland_Torre_P4_Evento_Final_Move_7:
face_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_6:
face_up
step_end

TwoIsland_Torre_P4_Evento_Final_Move_5:
emote_exclamation_mark
step_end

TwoIsland_Torre_P4_Evento_Final_Move_4:
walk_slow_right
walk_slow_right
walk_slow_up
delay_8
delay_8
step_end

TwoIsland_Torre_P4_Evento_Final_Move_3:
walk_in_place_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_2:
emote_exclamation_mark
delay_8
delay_8
face_down
delay_8
delay_8
step_end

TwoIsland_Torre_P4_Evento_Final_Move_1:
walk_slow_up
walk_slow_up
step_end

TwoIsland_Torre_P4_Evento_Final_Texto_3:
.string "????: ¡Oh, vamos! ¿No reconocéis a un\n"
	.string "superior de vuestra ex-organización\l"
	.string "cuando lo tenéis delante?$"

TwoIsland_Torre_P4_Evento_Final_Texto_4:
.string "FRANK: Así es, {PLAYER}. No esperabas\n"
	.string "verme aquí, ¿verdad? Tal vez empezaras\l"
	.string "a tener sospechas al ver a ex-miembros\l"
	.string "del TEAM ROCKET, pero qué más da.$"

TwoIsland_Torre_P4_Evento_Final_Texto_5:
.string "Lo cierto es que hace un tiempo que\n"
	.string "dejé de formar parte de la\l"
	.string "organización. Digamos que{PAUSE 15}…{PAUSE 15} rompí el\l"
	.string "código interno de conducta ROCKET, ese\l"
	.string "mismo código por el que fracasamos en\l"
	.string "la misión del MT.MOON, gracias a tu\l"
	.string "estúpida actuación.$"

TwoIsland_Torre_P4_Evento_Final_Texto_6:
.string "La de vueltas que da la vida, ¿verdad?\n"
	.string "En nuestro último encuentro era yo\l"
	.string "quien estaba cerca de ser\l"
	.string "ADMINISTRADOR, tú aún un ALTO RANGO.\l"
	.string "Ahora, según tengo entendido, has\l"
	.string "salvado KANTO y eres la mano derecha\l"
	.string "de GIOVANNI.$"

TwoIsland_Torre_P4_Evento_Final_Texto_7:
.string "Pero te estarás preguntando, ¿qué hago\n"
	.string "yo aquí? Te seré claro: vamos a\l"
	.string "convertir este lugar en el nuevo\l"
	.string "CASINO de ARCHI7.$"

TwoIsland_Torre_P4_Evento_Final_Texto_8:
.string "Teniendo en cuenta las 7 islas, la\n"
	.string "población total es considerable. Si a\l"
	.string "ello le sumamos la gran facilidad para\l"
	.string "viajar con el SURCAMAR, la conexión con\l"
	.string "CIUDAD CARMÍN y la escasa\l"
	.string "competencia, tenemos un negocio\l"
	.string "redondo.$"

TwoIsland_Torre_P4_Evento_Final_Texto_9:
.string "Gracias a un contacto en SINOHH,\n"
	.string "importaremos raros POKÉMON de esa\l"
	.string "región, para venderlos aquí a precio de\l"
	.string "oro.$"

TwoIsland_Torre_P4_Evento_Final_Texto_10:
.string "Y lo mejor de todo es que seguiremos el\n"
	.string "mismo sistema de FICHAS y juegos de\l"
	.string "azar del CASINO AZULONA.\l"
	.string "Convertiremos este lugar en la nueva\l"
	.string "capital de ARCHI7.$"

TwoIsland_Torre_P4_Evento_Final_Texto_11:
.string "Este edificio es solo el principio, aquí\n"
	.string "llevaremos a cabo todas nuestras\l"
	.string "operaciones, tal como la BASE ROCKET,\l"
	.string "pero sin necesidad de ocultara.$"

TwoIsland_Torre_P4_Evento_Final_Texto_12:
.string "Lo próximo será ampliar esos\n"
	.string "espantosos RECREATIVOS, y empezar a\l"
	.string "convertirlos en un CASINO de verdad.$"

TwoIsland_Torre_P4_Evento_Final_Texto_13:
.string "¿No es genial? ¡Vamos! Cuando todo esto\n"
	.string "acabe, hasta podría hacerte una\l"
	.string "oferta especial por los POKÉMON de\l"
	.string "SIN{PAUSE 5}…{PAUSE 5}$"

TwoIsland_Torre_P4_Evento_Final_Texto_14:
.string "¿Quieres que devuelva los RECREATIVOS\n"
	.string "a sus legítimos dueños?$"

TwoIsland_Torre_P4_Evento_Final_Texto_15:
.string "Debes estar bromeando, ¿en serio\n"
	.string "quieres que sigan esos infumables\l"
	.string "minijuegos? ¡DODRIO A POR BAYAS! Nadie\l"
	.string "juega a eso {PLAYER}, a nadie le\l"
	.string "importa. Le estoy haciendo un favor a\l"
	.string "esta isla, ¿no lo ves?$"

TwoIsland_Torre_P4_Evento_Final_Texto_16:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

TwoIsland_Torre_P4_Evento_Final_Texto_17:
.string "Veo que sigues siendo el mismo, creí que\n"
	.string "el ser ADMINISTRADOR te habría hecho\l"
	.string "ver la realidad, pero sigues siendo\l"
	.string "igual de ingenuo.$"

TwoIsland_Torre_P4_Evento_Final_Texto_18:
.string "Te dije en su momento que no podrías\n"
	.string "seguir subiendo solo ganando\l"
	.string "combates, la única razón por la que lo\l"
	.string "has logrado es por haber sido el mejor\l"
	.string "en ello: la excepción. Has acabado\l"
	.string "siendo incluso mejor que ese ROJO que\l"
	.string "nos apalizó en el MT.MOON. Y por ello te\l"
	.string "respeto.$"

TwoIsland_Torre_P4_Evento_Final_Texto_19:
.string "Pero{PAUSE 25}…{PAUSE 25} no siempre es el más fuerte el que\n"
	.string "gana.$"

TwoIsland_Torre_P4_Evento_Final_Texto_20:
.string "Ese mismo código moral y el presuponer\n"
	.string "que el resto lo cumplirá, va a ser el que\l"
	.string "te lleve a la perdición. Somos del TEAM\l"
	.string "ROCKET, y ante todo buscamos ganar sin\l"
	.string "importar la forma.$"

TwoIsland_Torre_P4_Evento_Final_Texto_21:
.string "No irás a ninguna parte {PLAYER}. Ya\n"
	.string "no hay vuelta atrás, somos dos\l"
	.string "ex-EJECUTIVOS y un ex-ADMINISTRADOR\l"
	.string "ROCKET. Por muy bueno que seas, no\l"
	.string "tienes nada que hacer.$"

TwoIsland_Torre_P4_Evento_Final_Texto_22:
.string "Ni el propio GIOVANNI podría con\n"
	.string "nosotros 3 juntos, ¡en guardia!$"

TwoIsland_Torre_P4_Evento_Final_Texto_23:
.string "¡Esto entraba en nuestros planes!$"

TwoIsland_Torre_P4_Evento_Final_Texto_24:
.string "ISLA SECUNDA es nuestra, ¡vamos a ser\n"
	.string "la nueva SILPH de ARCHI7!$"

TwoIsland_Torre_P4_Evento_Final_Texto_25:
.string "¡SILPH no cayó, y nosotros tampoco lo\n"
	.string "haremos!$"

TwoIsland_Torre_P4_Evento_Final_Texto_26:
.string "FRANK: Impresionante, pero aún no has\n"
	.string "demostrado nada.$"

TwoIsland_Torre_P4_Evento_Final_Texto_27:
.string "Fíjate {PLAYER}, siempre has estado\n"
	.string "por debajo mía, ni aún siendo\l"
	.string "ADMINISTRADOR has logrado alcanzarme.$"

TwoIsland_Torre_P4_Evento_Final_Texto_28:
.string "Ahora yo soy JEFE de una nueva empresa\n"
	.string "que con el tiempo será igual de\l"
	.string "importante que el TEAM ROCKET.$"

TwoIsland_Torre_P4_Evento_Final_Texto_29:
.string "¡Nunca estarás a mi altura!$"

TwoIsland_Torre_P4_Evento_Final_Texto_30:
.string "Grrrrrr…. ¡No deberías haber ganado!$"

TwoIsland_Torre_P4_Evento_Final_Texto_31:
.string "FRANK: ¡No! ¡No deberías ser tan\n"
	.string "fuerte!$"

TwoIsland_Torre_P4_Evento_Final_Texto_32:
.string "¡Únicamente has ganado por tener un\n"
	.string "don para el combate! ¡Tu estúpido\l"
	.string "código moral no es más que una\l"
	.string "fachada!$"

TwoIsland_Torre_P4_Evento_Final_Texto_33:
.string "¿Cómo lo sé? Entre nosotros, hubieras\n"
	.string "preferido mil veces el planazo del que\l"
	.string "te he hablado para este lugar, que la\l"
	.string "inútil función que cumple ahora.$"

TwoIsland_Torre_P4_Evento_Final_Texto_34:
.string "Únicamente has hecho esto para quedar\n"
	.string "bien con esos dos idiotas que\l"
	.string "mantendrán todo igual. Esta isla está\l"
	.string "muerta y seguirá muerta.$"

TwoIsland_Torre_P4_Evento_Final_Texto_35:
.string "Nada, ¡espero que disfrutes del DODRIO\n"
	.string "A POR BAYAS y el SALTO POKEMON!$"

TwoIsland_Torre_P4_Evento_Final_Texto_2:
.string "Quién eres tú, ¿cómo has llegado hasta\n"
	.string "aquí?$"

TwoIsland_Torre_P4_Evento_Final_Texto_1:
.string "Como decía, el CRANIDOS lo podemos\n"
	.string "vender a 7000 FICHAS tranquilamente{PAUSE 5}…{PAUSE 5}$"
