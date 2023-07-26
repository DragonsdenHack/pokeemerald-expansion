RocketHideout_8F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
	.byte 0

RocketHideout_8F_OnFrame:
map_script_2 VAR_UNUSED_0x40DC, 12, RocketHideout_8F_Mision_Silph_Despues
map_script_2 VAR_UNUSED_0x40F7, 803, RocketHideout_8F_Disguise_Player
map_script_2 VAR_UNUSED_0x40F7, 809, RocketHideout_8F_Disguise_Player_3
	.2byte 0

RocketHideout_8F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 802, RocketHideout_8F_Disguise_Player_2
map_script_2 VAR_UNUSED_0x40F7, 808, RocketHideout_8F_Disguise_Player_4
	.2byte 0

RocketHideout_8F_Disguise_Player_2::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 803
end

RocketHideout_8F_Disguise_Player_4::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 809
end

RocketHideout_6F_Disguise_Player_2_Move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.5:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
face_down
delay_8
delay_8
face_left
delay_8
step_end

RocketHideout8F_1::
end



RocketHideout8F_2::
end

RocketHideout_8F_Mision_Articuno_Zapdos::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 4
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
playse SE_SHOP
addmoney 140000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_EVIOLITE
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
setvar VAR_UNUSED_0x40F7, 63
release
end

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1:
.string "GIOVANNI: ¿Qué te parece {PLAYER}?\n"
	.string "Un lugar de trabajo más apropiado\l"
	.string "que la tapadera del S4, ¿cierto?\l"
	.string "¿Has descubierto algo?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2:
.string "GIOVANNI: Ya veo, DALIA es también\n"
	.string "nieta de OAK y hermana de AZUL,\l"
	.string "por lo que me cuentas algo muy\l"
	.string "extraño pasa en ese lugar, o OAK\l"
	.string "se ha teletransportado usando\l"
	.string "algún POKÉMON o ese LABORATORIO no\l"
	.string "es tan inocente y caritativo como\l"
	.string "lo pintan.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3:
.string "ANDRA: ¿Pudiste entonces robar un\n"
	.string "BULBASAUR?\l"
	.string "¡Guau que suerte, muy pocos\l"
	.string "ENTRENADORES tienen acceso a esa\l"
	.string "clase de POKÉMON, no creas que voy\l"
	.string "a quedarme atrás!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4:
.string "AZUL: ¿Quería verme GIOVANNI?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5:
.string "GIOVANNI: Así es AZUL, {PLAYER} ha\n"
	.string "estado en tu querido pueblo, ya\l"
	.string "que tú te negaste a\l"
	.string "proporcionarnos información sobre\l"
	.string "aquellas personas con las que has\l"
	.string "convivido durante toda tu vida.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6:
.string "AZUL: ... ... ... ...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7:
.string "AZUL: Ya se lo dije GIOVANNI, la\n"
	.string "relación con mi abuelo es más bien\l"
	.string "formal, básicamente se ocupó de mi\l"
	.string "por los lazos familiares que nos\l"
	.string "unen, me he limitado a vivir con\l"
	.string "mi hermana DALIA, la cual sí\l"
	.string "congenia más con OAK.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8:
.string "AZUL: En cuanto a ROJO, siempre\n"
	.string "fue su favorito, su alumno\l"
	.string "predilecto, desde que tengo uso de\l"
	.string "razón ya le enseñaba a combatir,\l"
	.string "pareciera como si fuera su\l"
	.string "elegido, el destinado a hacer la\l"
	.string "voluntad de mi abuelo...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9:
.string "AZUL: No puedo darle información\n"
	.string "porque no sé nada GIOVANNI, y no\l"
	.string "quiero volver por ese pueblo ahora\l"
	.string "que tengo la libertad que el ser\l"
	.string "ENTRENADOR me da, lo único que OAK\l"
	.string "y DALIA querían para mí era\l"
	.string "posicionarme en un buen puesto\l"
	.string "para dejar de ser una carga para\l"
	.string "ellos, me ven como eso, un trámite\l"
	.string "del que ocuparse, pero no, mi\l"
	.string "voluntad es otra: ser el mejor por\l"
	.string "mis propios medios y demostrarles\l"
	.string "lo mucho que me subestiman, no\l"
	.string "seré un robot más a las órdenes de\l"
	.string "la ÉLITE 4.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10:
.string "GIOVANNI: Solo un verdadero ROCKET\n"
	.string "hablaría así AZUL, no dejaremos\l"
	.string "que te impongan su voluntad\l"
	.string "créeme, aquí estás en tu casa.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11:
.string "AZUL: G-gracias señor...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12:
.string "GIOVANNI: Bien, os he hecho venir\n"
	.string "a los tres porque considero que ya\l"
	.string "tenéis el nivel para abordar una\l"
	.string "misión, tres más bien, de crucial\l"
	.string "importancia, pero antes {PLAYER},\l"
	.string "tu recompensa por tan valiosa\l"
	.string "información.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13:
.string "¡Acabas de facturar 140000 POKÉS!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14:
.string "GIOVANNI: Además, ten esto, AZUL y\n"
	.string "ANDRA ya cuentan con uno, es un\l"
	.string "insulto que a uno de mis mejores\l"
	.string "hombres le falte un recurso como\l"
	.string "este.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15:
.string "GIOVANNI: Un MINERAL EVOLUTIVO,\n"
	.string "quedan poquísimos en esta región.\l"
	.string "Incrementará en un 50% ambas\l"
	.string "defensas, en aquellos POKÉMON que aún\l"
	.string "pueden evolucionar. Con ello tu GOLBAT\l"
	.string "aguantará de una forma extraordinaria,\l"
	.string "no solo GOLBAT, MAGMAR, ELECTABUZZ,\l"
	.string "SCYTHER o RHYDON son algunos de los\l"
	.string "mejores usuarios de este objeto. Úsalo\l"
	.string "sabiamente.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1:
.string "GIOVANNI: ...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16:
.string "GIOVANNI: Las misiones que a\n"
	.string "partir de ahora os asigne en este\l"
	.string "lugar son totalmente\l"
	.string "confidenciales para todo ser ajeno\l"
	.string "al S5 de esta base, eso\l"
	.string "incluye también a la mayoría de\l"
	.string "ROCKETS, no debéis hablar de esto\l"
	.string "fuera con nadie, siempre se habla\l"
	.string "de que el TEAM ROCKET roba y\l"
	.string "comete crímenes con el fin de\l"
	.string "financiar sus proyectos, pues\l"
	.string "bien, en lugares como este es\l"
	.string "donde se planifican los proyectos\l"
	.string "de verdad, si alguien, ROCKET o\l"
	.string "no, os pregunta qué hacéis,\l"
	.string "responderéis con el engargo más\l"
	.string "básico que el ROCKET medio lleva a\l"
	.string "cabo: robar, ya sea x objeto o x\l"
	.string "POKÉMON...\l"
	.string "Una vez sabido esto, podemos\l"
	.string "comenzar...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17:
.string "GIOVANNI: ¿Recuerdas, ANDRA, esa\n"
	.string "CENTRAL ENERGÍA que tanto interés\l"
	.string "te causaba, y todo lo que me\l"
	.string "contaste sobre tus sospechas\l"
	.string "acerca de un POKÉMON de gran poder\l"
	.string "que allí habitaba?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18:
.string "ANDRA: ¡Claro señor, no lo olvido!$"


RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19:
.string "En ese momento no quise decírtelo,\n"
	.string "pero hace ya tiempo que llevamos\l"
	.string "investigando el paradero de las\l"
	.string "AVES LEGENDARIAS de KANTO, tres de\l"
	.string "los POKÉMON más antiguos,\l"
	.string "poderosos y sagrados que esta\l"
	.string "región conoce, uno de ellos,\l"
	.string "ZAPDOS, quizás el más peligroso e\l"
	.string "incontrolable de los tres, del\l"
	.string "tipo dual ELÉCTRICO-VOLADOR, se\l"
	.string "halla actualmente en esa CENTRAL\l"
	.string "ENERGÍA ANDRA, no me extraña que\l"
	.string "notases su presencia, las\l"
	.string "descargas eléctricas que emite no\l"
	.string "se parecen en nada a lo que hayas\l"
	.string "visto.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20:
.string "Después tenemos a ARTICUNO, del\n"
	.string "tipo HIELO-VOLADOR, tal vez el más\l"
	.string "manejable de los tres pero\l"
	.string "igualmente peligroso y muy\l"
	.string "resistente, sabemos que\l"
	.string "actualmente hay un ejemplar que se\l"
	.string "encuentra en ISLAS ESPUMA, al\l"
	.string "oeste de CIUDAD FUCSIA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21:
.string "AZUL: ¿Un ejemplar?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22:
.string "GIOVANNI: Así es, no creemos que\n"
	.string "sean especies únicas sino que\l"
	.string "pueda haber más de un ZAPDOS, o\l"
	.string "más de un ARTICUNO, lo que no\l"
	.string "quita que sean POKÉMON\l"
	.string "excepcionalmente raros, poderosos\l"
	.string "y escurridizos, el último de\l"
	.string "ellos, MOLTRES, ha sido localizado\l"
	.string "en la cima del MT.ASCUAS, un\l"
	.string "volcán muy emblemático de ISLA\l"
	.string "PRIMA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23:
.string "GIOVANNI: Vuestra misión es la\n"
	.string "siguiente caballeros, ANDRA se\l"
	.string "reunirá con un comité de nuestros\l"
	.string "mejores científicos y estrategas\l"
	.string "para estudiar la mejor forma de\l"
	.string "entrar a la CENTRAL energía sin\l"
	.string "ser vistos por las autoridades,\l"
	.string "que vigilan el lugar.\l"
	.string "Por otro lado, AZUL irá directo a\l"
	.string "ISLA PRIMA, he dispuesto un\l"
	.string "transbordo en CARMÍN que te\l"
	.string "llevará directo a la ISLA, tú irás\l"
	.string "a por MOLTRES puesto que cuentas\l"
	.string "con un BLASTOISE en tu equipo,\l"
	.string "confío en que sea suficiente para\l"
	.string "apagar la salvaje llama del\l"
	.string "LEGENDARIO de fuego...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24:
.string "GIOVANNI: En cuanto a ti {PLAYER},\n"
	.string "irás a por el LEGENDARIO ARTICUNO\l"
	.string "en las ISLAS ESPUMA, la seguridad\l"
	.string "allí no es tan estricta como en la\l"
	.string "CENTRAL ENERGÍA, te aconsejo tomar\l"
	.string "la ruta 12, al sur de PUEBLO\l"
	.string "LAVANDA, será un camino muy largo\l"
	.string "hasta FUCSIA, y posteriormente el\l"
	.string "mar que lleva a ISLA ESPUMA, pero\l"
	.string "te servirá como preparación para\l"
	.string "hacer frente a tal POKÉMON, confío\l"
	.string "en tu habilidad como ENTRENADOR\l"
	.string "para batir a ARTICUNO {PLAYER}.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25:
.string "GIOVANNI: Dicho esto, no quiero\n"
	.string "que atrapéis a las aves, solo\l"
	.string "quiero que las derrotéis para así\l"
	.string "poder obtener una pluma de estas,\l"
	.string "más que suficiente para llevar a\l"
	.string "cabo las investigaciones que\l"
	.string "deseamos para así poder reproducir\l"
	.string "bajo condiciones controladas el\l"
	.string "poder de estos POKÉMON sin que otros\l"
	.string "noten la ausencia de las aves...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26:
.string "GIOVANNI: Confío en que seáis\n"
	.string "conscientes de la importancia de\l"
	.string "esta misión, vamos a expandir los\l"
	.string "estándares de poder, sobrepasar\l"
	.string "los supuestos límites establecidos,\l"
	.string "eso afianzará aún más nuestra\l"
	.string "posición como principal\l"
	.string "resistencia ante las élites de\l"
	.string "esta región...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27:
.string "GIOVANNI: Poco más tengo que\n"
	.string "decir, tenéis mi consentimiento\l"
	.string "para acceder a la sala contigua a\l"
	.string "este despacho, allí encontraréis\l"
	.string "información esencial acerca de las\l"
	.string "AVES LEGENDARIAS y cualquier\l"
	.string "POKÉMON LEGENDARIO conocido en\l"
	.string "general, eso es todo caballeros,\l"
	.string "os mantendremos informados sobre\l"
	.string "cualquier detalle que pueda\l"
	.string "influir en vuestras misiones.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28:
.string "ANDRA: ¡Aún no me lo creo {PLAYER}!\n"
	.string "¡Vamos a ir tras la pista de un\l"
	.string "POKÉMON LEGENDARIO cada uno!\l"
	.string "Esto ya es nivel eh, ¡te mantendré\l"
	.string "informado de cómo va mi misión con\l"
	.string "ZAPDOS, espero que hagas tú lo\l"
	.string "mismo!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_2:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_3:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_5:
walk_in_place_down
walk_slow_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_6:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_7:
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_8:
walk_slow_left
walk_in_place_left
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_9:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_10:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_13:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_14:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.1:
face_up
step_end

RocketHideout_8F_Mision_Silph_move4.1:
walk_down
walk_left
walk_left
walk_left
walk_down
step_end


RocketHideout_8F_Mision_Silph_move4.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move5.2:
walk_left
walk_down
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.3:
face_right
step_end

RocketHideout_8F_Mision_Silph::
lock
setvar VAR_UNUSED_0x40F7, 71
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move2
waitmovement 0x0
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_2 MSGBOX_DEFAULT
waitse
msgbox RocketHideout_8F_Mision_Silph_text_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move5
applymovement 3, RocketHideout_8F_Mision_Silph_move5
waitmovement 0x0
applymovement 3, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.1
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 3, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 3, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 9
playse SE_M_STAT_INCREASE
applymovement 9, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 9, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
waitse
delay 10
applymovement 9, RocketHideout_8F_Mision_Silph_move5.3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
applymovement 1, RocketHideout_8F_Mision_Silph_move5.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout8F_Mision_Johto_move_12.6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
setdisguise [468]
setvar VAR_UNUSED_0x40F7, 802
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7

RocketHideout8F_Mision_Johto_move_12.6:
walk_in_place_right
step_end




RocketHideout_8F_Disguise_Player::
delay 40
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_8F_Mision_Silph_text_6 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_8F_Mision_Silph_text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_9 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_10 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
msgbox RocketHideout_8F_Mision_Silph_text_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_ULTRA_BALL, 50
waitfanfare
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_12 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Silph_text_13 MSGBOX_DEFAULT
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_14 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_12.7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_15 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_790
clearflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
warpsilent MAP_ROUTE27, 37, 12
call Script_SetGrayscaleTint
release
end

RocketHideout8F_Mision_Johto_move_12.7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_3
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_38 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_39 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_40 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_41 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_42 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_43 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_44 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_45 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_46 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_47 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_48 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_49 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_50 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_51 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_52 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_53 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move10
waitmovement 0x0
applymovement 2, RocketHideout_8F_Mision_Silph_move11
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move12
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_54 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_15
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_55 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 9
fadescreen 0
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
release
end

RocketHideout_8F_Mision_Silph_Despues_Move_15:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_14:
walk_slow_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13:
walk_slow_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_12:
walk_slow_up
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_11:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_10:
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_9:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_8:
walk_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_7:
walk_in_place_slow_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_6:
walk_right
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_5:
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_4:
walk_in_place_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_3:
face_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

RocketHideout_8F_Mision_Silph_text_1:
.string "GIOVANNI: ¡Ah, {PLAYER}!, estábamos\n"
	.string "esperándote, ¡pasa!$"

RocketHideout_8F_Mision_Silph_text_2:
.string "({PLAYER} entregó las plumas de\n"
	.string "ARTICUNO y ZAPDOS).$"

RocketHideout_8F_Mision_Silph_text_3:
.string "GIOVANNI: ¡Qué extraordinario\n"
	.string "trabajo has hecho {PLAYER}!\l"
	.string "¡No solo has cumplido tu misión\l"
	.string "con ARTICUNO, también te has\l"
	.string "ocupado de ZAPDOS!\l"
	.string "KOGA también me ha informado de\l"
	.string "cómo te enfrentaste a BRUNO de\l"
	.string "ÉLITE 4 en el CAMINO BICIS y le\l"
	.string "derrotaste.$"

RocketHideout_8F_Mision_Silph_text_4:
.string "GIOVANNI: Ambos, tú y ANDRA,\n"
	.string "habéis demostrado un desempeño y\l"
	.string "valor hacia el TEAM ROCKET que no\l"
	.string "tienen precio, PETREL ya me ha\l"
	.string "puesto al día de cómo 10 policías\l"
	.string "juntos no fueron suficiente para\l"
	.string "reducirte ANDRA, y resististe el\l"
	.string "tiempo suficiente como para que\l"
	.string "pudiéramos salvarte.$"

RocketHideout_8F_Mision_Silph_text_5:
.string "GIOVANNI: Por todo esto, ambos,\n"
	.string "ANDRA y {PLAYER}, os habéis ganado\l"
	.string "mi confianza, y los dos quedáis\l"
	.string "ascendidos a EJECUTIVOS ROCKET.$"

RocketHideout_8F_Mision_Silph_text_6:
.string "¡¡{PLAYER} fue ascendido a EJECUTIVO\n"
	.string "ROCKET!!$"

RocketHideout_8F_Mision_Silph_text_7:
.string "GIOVANNI: Aquí tienes tu\n"
	.string "recompensa ANDRA, espero que la\l"
	.string "reinviertas para hacer aún mejor\l"
	.string "ese gran equipo que has\l"
	.string "construido.$"

RocketHideout_8F_Mision_Silph_text_8:
.string "GIOVANNI: En cuanto a ti {PLAYER},\n"
	.string "acorde con tus resultados, las dos\l"
	.string "AVES LEGENDARIAS, BRUNO...$"

RocketHideout_8F_Mision_Silph_text_9:
.string "GIOVANNI: Esta es tu recompensa.$"

RocketHideout_8F_Mision_Silph_text_10:
.string "(¡ACABAS DE FACTURAR 500000\n"
	.string "POKÉS!)$"

RocketHideout_8F_Mision_Silph_text_11:
.string "Toma esto también, alguien de tu\n"
	.string "categoría debe de poder capturar\l"
	.string "cualquier POKÉMON en cualquier\l"
	.string "momento, ¡50 ULTRABALLS!$"

RocketHideout_8F_Mision_Silph_text_12:
.string "Y por último este POKÉMON, el más\n"
	.string "raro y poderoso de los FÓSILES de\l"
	.string "KANTO, seguro que puede ser una\l"
	.string "buena incorporación para tu\l"
	.string "equipo.$"

RocketHideout_8F_Mision_Silph_text_13:
.string "¡HAS RECIBIDO UN AERODACTYL AL\n"
	.string "NV:35!$"

RocketHideout_8F_Mision_Silph_text_14:
.string "GIOVANNI: ...$"

RocketHideout_8F_Mision_Silph_text_15:
.string "GIOVANNI: Os dije que a su debido\n"
	.string "tiempo os contaría los origenes\l"
	.string "del TEAM ROCKET y porqué hoy es\l"
	.string "tal y como lo conocéis, ahora que\l"
	.string "habéis acumulado cierta\l"
	.string "experiencia en esta región, y ante\l"
	.string "lo que está por venir, ese momento\l"
	.string "ha llegado, escuchad atentamente.$"

RocketHideout_8F_Mision_Silph_text_16:
.string "Todo empezó hace 5 años,\n"
	.string "cuando JOHTO declaró la guerra a\l"
	.string "KANTO, a todos nos sorpendió\l"
	.string "mucho, una región tan tradicional\l"
	.string "y pacífica, que además no contaba\l"
	.string "con nuestros recursos ni capacidad\l"
	.string "armamentística.$"

RocketHideout_8F_Mision_Silph_text_17:
.string "El que provocó este\n"
	.string "conflicto no fue otro que LANCE,\l"
	.string "nieto del anciano maestro dragón\l"
	.string "de CIUDAD ENDRINO. No cabe duda,\l"
	.string "era un excepcional ENTRENADOR, y\l"
	.string "no podía ser menos, ya que como\l"
	.string "descendiente directo de la estirpe\l"
	.string "de domadragones más prestigiosa...$"

RocketHideout_8F_Mision_Silph_text_17.1:
	.string "...se le educó desde pequeño en el\n"
	.string "arte de entrenar al para muchos\l"
	.string "tipo más poderoso y sagrado,\l"
	.string "mostró un talento innato para\l"
	.string "exprimir al máximo el poder de\l"
	.string "DRAGONITE, el considerado POKÉMON\l"
	.string "NO LEGENDARIO más poderoso, tanto\l"
	.string "que sobrepasa incluso el poder de\l"
	.string "las AVES LEGENDARIAS.$" 
	
RocketHideout_8F_Mision_Silph_text_17.2:
	.string "LANCE se convirtió en un temido\n"
	.string "ENTRENADOR, contando con 3 de estos\l"
	.string "sagrados dragones en su equipo, no\l"
	.string "tardó en hacerse con el poder en\l"
	.string "JOHTO.$"

RocketHideout_8F_Mision_Silph_text_18:
.string "Esto sin embargo no era suficiente\n"
	.string "para someter a KANTO como él\l"
	.string "quería, nuestra región siempre ha\l"
	.string "contado con entrenadores\l"
	.string "sobresalientes y de gran talento.$"

RocketHideout_8F_Mision_Silph_text_18.1:
	.string "Por ese entonces tanto OAK como yo\n"
	.string "llevábamos años disputándonos el\l"
	.string "título de CAMPEÓN, cambiando\l"
	.string "constantemente de manos por la\l"
	.string "gran paridad y competitividad que\l"
	.string "había entre nosotros, cuando uno\l"
	.string "de nosotros no era el CAMPEÓN, el\l"
	.string "otro pasaba a ocupar el actual\l"
	.string "puesto de BRUNO en la ÉLITE 4,\l"
	.string "especializándome yo en el TIPO\l"
	.string "TIERRA y OAK en el NORMAL...$"

RocketHideout_8F_Mision_Silph_text_19:
.string "LANCE sabía que con nosotros dos\n"
	.string "en KANTO no podía imponer su\l"
	.string "fuerza a pesar incluso de sus\l"
	.string "dragones, fue ahí cuando empezó a\l"
	.string "buscar ese poder que no podía\l"
	.string "lograr en lo divino, en lo\l"
	.string "sagrado...$"

RocketHideout_8F_Mision_Silph_text_20:
.string "Se informó acerca de los\n"
	.string "legendarios LUGIA y HO-OH, de un\l"
	.string "poder aquí en KANTO inexistente,\l"
	.string "pero nunca estuvo siquiera cerca\l"
	.string "de encontrarlos.$"

RocketHideout_8F_Mision_Silph_text_21:
.string "A pesar de ello, acabó enterándose\n"
	.string "de la leyenda que decía que el\l"
	.string "legendario HO-OH dejó parte de su\l"
	.string "poder y esencia impresa en 3\l"
	.string "POKÉMON condenados a morir, vistos\l"
	.string "por última vez hace 150 años en el\l"
	.string "llamado MILAGRO DE LA TORRE\l"
	.string "QUEMADA, cuando según la leyenda\l"
	.string "estos tres POKÉMON reencarnaron en\l"
	.string "las 3 BESTIAS DE JOHTO, pasando a\l"
	.string "vagar sin rumbo por la región,\l"
	.string "incapaces de contener su poder.$"

RocketHideout_8F_Mision_Silph_text_22:
.string "LANCE puso toda la región patas\n"
	.string "arriba dispuesto a agarrarse a esa\l"
	.string "leyenda...\l"
	.string "Y efectivamente resultó ser\l"
	.string "cierta, valiéndose de sus\l"
	.string "dragones, logró acorralar y\l"
	.string "capturar uno por uno a estos\l"
	.string "POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_23:
.string "El resto es ya historia, con las\n"
	.string "BESTIAS DE JOHTO bajo su mando, se\l"
	.string "dispuso a invadir KANTO.$"

RocketHideout_8F_Mision_Silph_text_23.1:
	.string "Contrató también a un experto\n"
	.string "en técnicas bélicas: el LT.SURGE.\l"
	.string "Todo unido desató en KANTO un caos\l"
	.string "sin precedentes, esas bestias bajo\l"
	.string "las órdenes de LANCE se cobraron\l"
	.string "innumerables vidas, siendo\l"
	.string "imposibles de atrapar, además de\l"
	.string "batir en un combate para un\l"
	.string "ENTRENADOR que no fuéramos OAK o\l"
	.string "yo; LANCE había conseguido que el\l"
	.string "caos y la muerte se apoderasen de\l"
	.string "KANTO.$"

RocketHideout_8F_Mision_Silph_text_24:
.string "Fue en ese momento cuando OAK y yo\n"
	.string "decidimos tomar cartas en el\l"
	.string "asunto, viendo que era imposible\l"
	.string "apaciguar la furia de esas\l"
	.string "criaturas con los medios de los\l"
	.string "que disponíamos...$"

RocketHideout_8F_Mision_Silph_text_25:
.string "Yo en ese momento era el hombre de\n"
	.string "negocios más importante de KANTO,\l"
	.string "y OAK el investigador más famoso:\l"
	.string "decidimos juntar todos nuestros\l"
	.string "recursos, con el único afán de ir\l"
	.string "tras esa leyenda...ese mítico\l"
	.string "POKÉMON llamado MEW...$"
	
RocketHideout_8F_Mision_Silph_text_25.1:
.string "La iniciativa fue de FUJI, quien\n"
	.string "conocía más que nadie al POKÉMON.\l"
	.string "Gracias a él pudimos llegar a ISLA\l"
	.string "SUPREMA, y capturar a MEW...$"

RocketHideout_8F_Mision_Silph_text_25.2:
.string "Pero MEW por sí solo no iba a darnos la\n"
	.string "victoria. Su propia naturaleza le\l"
	.string "impedía ser partícipe de cualquier\l"
	.string "clase de conflicto, necesitábamos algo\l"
	.string "más.$"

RocketHideout_8F_Mision_Silph_text_25.3:
.string "Fue aquí cuando nació el -PROYECTO\n"
	.string "MEWTWO-. Con la finalidad de exprimir\l"
	.string "al máximo el potencial de MEW y poder\l"
	.string "usarlo en la guerra.$"

RocketHideout_8F_Mision_Silph_text_25.4:
.string "No fue nada fácil, los resultados\n"
	.string "dejaban anomalías y deformidades de\l"
	.string "lo que inicialmente era MEW.\l"
	.string "Conservando únicamente el 48% de su\l"
	.string "poder base global, únicamente\l"
	.string "heredaron el poder de transformación\l"
	.string "del LEGENDARIO, algo insuficiente que\l"
	.string "nos llevó a deshechar a estos\l"
	.string "prototipos iniciales.$"

RocketHideout_8F_Mision_Silph_text_25.5:
.string "Es lo que comúnmente se conoce como\n"
	.string "DITTO, se han reportado varios\l"
	.string "ejemplares en la propia MANSION\l"
	.string "CANELA y algunas rutas al este de\l"
	.string "FUCSIA.$"


RocketHideout_8F_Mision_Silph_text_25.6:
.string "Todas las combinaciones nos conducían\n"
	.string "a DITTO, se nos agotaba el tiempo y\l"
	.string "los fondos.\l"
	.string "Si no sacábamos algo pronto, a KANTO\l"
	.string "no le quedaba otra vía: rendirse.$"

RocketHideout_8F_Mision_Silph_text_26:
.string "Fue en ese momento...tras muchos\n"
	.string "fracasos, cuando finalmente pudimos\l"
	.string "incluso mejorar al legendario MEW,\l"
	.string "creando a partir de su ADN un\l"
	.string "POKÉMON hecho específicamente para\l"
	.string "el combate... y para ganar la\l"
	.string "guerra de KANTO.$"

RocketHideout_8F_Mision_Silph_text_27:
.string "Más rápido, más potente y\n"
	.string "polivalente que las bestias de\l"
	.string "JOHTO, estimamos su poder a la par\l"
	.string "que los mismísimos LUGIA y HO-OH\l"
	.string "que LANCE nunca pudo encontrar. Y\l"
	.string "unas capacidades mentales que no\l"
	.string "se parecían a nada de lo que\l"
	.string "habíamos visto...$"

RocketHideout_8F_Mision_Silph_text_28:
.string "Con MEWTWO, podíamos acabar con\n"
	.string "todo esto y poner a LANCE en su\l"
	.string "lugar, era poderoso, muy\l"
	.string "poderoso...tanto que salió de\l"
	.string "nuestro control justo cuando\l"
	.string "realizábamos las últimas pruebas.$"

RocketHideout_8F_Mision_Silph_text_29:
.string "El laboratorio de ISLA CANELA\n"
	.string "donde llevamos a cabo este\l"
	.string "desesperado plan en la sombra\l"
	.string "quedó destruido, y MEWTWO escapó\l"
	.string "perdiéndose para siempre...$"

RocketHideout_8F_Mision_Silph_text_30:
.string "Poco después a KANTO no le quedó\n"
	.string "más remedio que rendirse ante\l"
	.string "LANCE, el cual se autoproclamó\l"
	.string "campeón de JOHTO y KANTO\l"
	.string "simultáneamente. Entonces, llegó\l"
	.string "el momento de quitarse del medio\l"
	.string "todas sus posibles amenazas...$"

RocketHideout_8F_Mision_Silph_text_31:
.string "Sin embargo, para mi sorpresa, OAK\n"
	.string "fue el primero en arrodillarse\l"
	.string "una vez LANCE se hizo con el\l"
	.string "poder, ofreciéndole todos sus\l"
	.string "conocimientos sobre los POKÉMON\l"
	.string "prometiendo ayudar al nuevo\l"
	.string "gobierno. Lo peor es que...$"

RocketHideout_8F_Mision_Silph_text_32:
.string "...me señaló a mí como el principal\n"
	.string "peligro para su gobierno, le habló\l"
	.string "de nuestros planes para intentar\l"
	.string "derrocarle. Aunque nunca mencionó\l"
	.string "a MEWTWO, sí que me culpó de\l"
	.string "conspirar, incluso tras la guerra.$"

RocketHideout_8F_Mision_Silph_text_33:
.string "LANCE no tardó en lanzar contra mi\n"
	.string "persona una tremenda campaña de\l"
	.string "desprestigio.\l"
	.string "A pesar de haber dado todo por\l"
	.string "mantener KANTO en manos de sus\l"
	.string "habitantes, LANCE logró convencer\l"
	.string "a la opinión pública de que yo era\l"
	.string "el malo, y él el salvador, según la\l"
	.string "versión oficial, LANCE solo se vio\l"
	.string "obligado a intervenir después de\l"
	.string "un descarado intento de Golpe de\l"
	.string "Estado por mi parte al revalidar\l"
	.string "mi título de CAMPEÓN.$"

RocketHideout_8F_Mision_Silph_text_34:
.string "Esto, por supuesto, es una\n"
	.string "absoluta estupidez y un sin sentido\l"
	.string "para cualquiera que haya vivido la\l"
	.string "guerra, pero, entre que la gente\l"
	.string "calla por miedo a represalias del\l"
	.string "gobierno de LANCE, y el bombardeo\l"
	.string "constante de noticias y difusión\l"
	.string "de hechos falsos, por puro\l"
	.string "desgaste han conseguido ir\l"
	.string "difuminando la verdad con el paso\l"
	.string "del tiempo, hasta el punto en que\l"
	.string "incluso aquellos que en realidad\l"
	.string "estuvieron presentes en la guerra,\l"
	.string "hoy dudan de lo que realmente\l"
	.string "vivieron.$"

RocketHideout_8F_Mision_Silph_text_36:
.string "GIOVANNI: Desde ese entonces, todo\n"
	.string "lo asociado a mi nombre, en su día\l"
	.string "uno de los más prestigiosos de la\l"
	.string "región, se convirtió en la mayor\l"
	.string "deshonra y verguenza para KANTO.$"

RocketHideout_8F_Mision_Silph_text_37:
.string "De este modo, y así las cosas,\n"
	.string "cuando un poder te somete de esta\l"
	.string "forma, siendo imposible discutirle\l"
	.string "mediante la justicia, solo queda\l"
	.string "reunir un poder aún mayor que el\l"
	.string "suyo para así devolverle el favor\l"
	.string "con la misma moneda.$"

RocketHideout_8F_Mision_Silph_text_37.1:
.string "Bajo esa premisa mantuve vivo al TEAM\n"
	.string "ROCKET, y bajo ella sigue a día de hoy.$"

RocketHideout_8F_Mision_Silph_text_38:
.string "He ahí la razón de todas estas\n"
	.string "zonas de investigación, el porqué\l"
	.string "os he mandado a donde habitan las\l"
	.string "AVES LEGENDARIAS, y por ello\l"
	.string "reunimos todo el dinero posible de\l"
	.string "forma ilegítima, haciendo el\l"
	.string "propio sistema imposible que se\l"
	.string "reuna de forma legítima, cuando es\l"
	.string "así, el tomarte la justicia por tu\l"
	.string "mano es casi un deber que va\l"
	.string "acorde a todo el que tenga\l"
	.string "principios.$"

RocketHideout_8F_Mision_Silph_text_39:
.string "Todo lo que el TEAM ROCKET ha\n"
	.string "buscado en este tiempo ha sido el\l"
	.string "tratar de reunir un poder\l"
	.string "suficiente como para derrocar a\l"
	.string "LANCE y acabar con su tiranía\l"
	.string "enmascarada, a la vez que\l"
	.string "aparentar ser una organización\l"
	.string "endeble y torpe, preocupada por\l"
	.string "temas triviales como el dinero o\l"
	.string "el robo de POKÉMON, nada más lejos\l"
	.string "de la realidad, con ello lo que\l"
	.string "conseguimos es que LANCE no centre\l"
	.string "todas sus energías en aplastarnos,\l"
	.string "pues no nos ve como una amenaza\l"
	.string "seria...aún.$"

RocketHideout_8F_Mision_Silph_text_40:
.string "No podía contaros todo esto en\n"
	.string "mejor momento, ya que nuestra\l"
	.string "próxima misión, la de todo el TEAM\l"
	.string "ROCKET, está relacionada de forma\l"
	.string "directa con todo esto.$"

RocketHideout_8F_Mision_Silph_text_41:
.string "SILPH S.A, la empresa más\n"
	.string "importante de toda la región, que\l"
	.string "extiende su poder hasta las ISLAS\l"
	.string "SETE, produce ella sola la inmensa\l"
	.string "mayoría de artículos para\l"
	.string "entrenadores en toda KANTO, acaba\l"
	.string "de soltar un bombazo, una\l"
	.string "revolución en la captura de\l"
	.string "POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_42:
.string "Su MASTER BALL presumiblemente es\n"
	.string "capaz de atrapar cualquier POKÉMON\l"
	.string "bajo cualquier condición, una POKÉ\l"
	.string "BALL infalible, el sueño de\l"
	.string "cualquier ENTRENADOR, más aún de\l"
	.string "cualquier coleccionista$"

RocketHideout_8F_Mision_Silph_text_43:
.string "Un objeto como ese sería crucial\n"
	.string "para recuperar a un POKÉMON como\l"
	.string "MEWTWO, más aún cuando LANCE no\l"
	.string "sabe de su existencia, nosotros\l"
	.string "tenemos ciertas sospechas de dónde\l"
	.string "puede estar después de que\l"
	.string "escapara de ISLA CANELA...$"

RocketHideout_8F_Mision_Silph_text_44:
.string "Pero ese no es el objetivo más\n"
	.string "importante de nuestro asalto a\l"
	.string "SILPH, quiero que todo salga\l"
	.string "perfecto, que a ojos de la\l"
	.string "población el TEAM ROCKET sea\l"
	.string "derrotado, que nos pierdan de\l"
	.string "vista justo en el momento que más\l"
	.string "fuertes estamos...$"

RocketHideout_8F_Mision_Silph_text_45:
.string "Para cuando esto ocurra, yo ya le\n"
	.string "habré puesto al PRESIDENTE de\l"
	.string "SILPH una oferta lo\l"
	.string "suficientemente tentadora como\l"
	.string "para que nos siga el juego, estoy\l"
	.string "seguro de que él tampoco aprueba\l"
	.string "todas las nuevas restricciones y\l"
	.string "comisión que el gobierno de LANCE\l"
	.string "se lleva de sus productos.$"


RocketHideout_8F_Mision_Silph_text_46:
.string "¡ANDRA!\n"
	.string "¡{PLAYER}!\l"
	.string "¡Vuestra misión en SILPH es la\l"
	.string "siguiente!\l"
	.string "Entraremos por la fuerza usando\l"
	.string "gran parte de nuestras unidades,\l"
	.string "vosotros dos seréis los encargados\l"
	.string "de deshaceros de la seguridad que\l"
	.string "protege al PRESIDENTE, una vez\l"
	.string "logrado esto, tendré carta libre\l"
	.string "para hablar tranquilamente con él\l"
	.string "y contarle la situación, vosotros\l"
	.string "me daréis el tiempo suficiente\l"
	.string "como para convencerle de cooperar\l"
	.string "con el TEAM ROCKET, en ese lapso\l"
	.string "deberéis de contener a la\l"
	.string "seguridad que quiera acceder al\l"
	.string "despacho del PRESIDENTE, y a\l"
	.string "cualquier ENTRENADOR que trate de\l"
	.string "pasar, mi conversación en ese\l"
	.string "momento con el PRESIDENTE debe de\l"
	.string "ser totalmente confidencial, ¿ha\l"
	.string "quedado claro?$"

RocketHideout_8F_Mision_Silph_text_47:
.string "ANDRA: ¡No pasará ni LANCE si se\n"
	.string "llegara a presentar JEFE!$"

RocketHideout_8F_Mision_Silph_text_48:
.string "GIOVANNI: Una vez haya convencido\n"
	.string "al PRESIDENTE, obtendremos la\l"
	.string "MASTER BALL, y más importante aún,\l"
	.string "el apoyo de SILPH, para ese\l"
	.string "entonces, nada nos detiene ahí, en\l"
	.string "cuanto os dé la señal, os\l"
	.string "retiraréis junto con los otros\l"
	.string "ALTOS RANGOS ROCKET, y dejaréis el\l"
	.string "edificio con nuestros soldados más\l"
	.string "mediocres, sin apenas protección\l"
	.string "para llegar hasta mi...$"

RocketHideout_8F_Mision_Silph_text_49:
.string "Si todo sigue lo planeado, ese\n"
	.string "entrometido de ROJO hará acto de\l"
	.string "presencia, nada mejor que fingir\l"
	.string "una derrota ante ese ENTRENADOR\l"
	.string "sin personalidad, vacío de\l"
	.string "propósito, siendo ROJO el rival,\l"
	.string "podré perder y acto seguido irme\l"
	.string "de ahí y desaparecer antes de que\l"
	.string "se corra la voz y aparezca la\l"
	.string "policía...$"

RocketHideout_8F_Mision_Silph_text_50:
.string "Una vez aquí, mataremos 3\n"
	.string "pájaros de un tiro, tendremos la\l"
	.string "MASTER BALL, la lealtad de SILPH,\l"
	.string "y la creencia popular de que\l"
	.string "estamos acabados.$"

RocketHideout_8F_Mision_Silph_text_51:
.string "PROTÓN: Un plan brillante, señor.$"

RocketHideout_8F_Mision_Silph_text_52:
.string "GIOVANNI: Que ya está en marcha,\n"
	.string "en estos momentos los puntos de\l"
	.string "control con AZAFRÁN habrán sido\l"
	.string "tomados, dejando vía libre a los\l"
	.string "nuestros a la ciudad , deberías\l"
	.string "prepararte PROTÓN, formarás parte\l"
	.string "de los efectivos que despejen el\l"
	.string "camino.$"

RocketHideout_8F_Mision_Silph_text_53:
.string "PROTÓN: A la orden JEFE.$"

RocketHideout_8F_Mision_Silph_text_54:
.string "GIOVANNI: ANDRA, {PLAYER}, confío\n"
	.string "en vuestra capacidad como\l"
	.string "entrenadores, CIUDAD AZAFRÁN y\l"
	.string "SILPH supondrá un nuevo reto para\l"
	.string "volver a probaros, una vez dentro\l"
	.string "de la ciudad, id inmediatamente a\l"
	.string "SILPH y ocupáos de despejar el\l"
	.string "edificio de policías.$"

RocketHideout_8F_Mision_Silph_text_55:
.string "ANDRA: No le fallaremos JEFE.$"

RocketHideout_8F_Mision_Silph_move1:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move2:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Silph_move3:
face_left
step_end

RocketHideout_8F_Mision_Silph_move4:
face_down
step_end

RocketHideout_8F_Mision_Silph_move5:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Silph_move6:
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move7:
walk_slow_left
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move8:
face_up
step_end

RocketHideout_8F_Mision_Silph_move9:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move10:
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move11:
walk_down
walk_down
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

RocketHideout_8F_Mision_Silph_move12:
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move13:
walk_down
walk_right
walk_right
walk_right
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

RocketHideout_8F_Mision_Gimnasios::
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 9
addobject 4
playse SE_EXIT
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_3
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_4
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_4 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
addobject 5
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_8 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_9 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Gimnasios_texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_13 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_12
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 5
playse SE_EXIT
msgbox RocketHideout_8F_Mision_Gimnasios_texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_17 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_18 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_20 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_22 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
addobject ITEM_TRI_PASS
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23.1 MSGBOX_DEFAULT
waitse
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_28 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
playse MUS_RG_VICTORY_GYM_LEADER
msgbox RocketHideout_8F_Mision_Gimnasios_texto_30 MSGBOX_DEFAULT
delay 110
playse MUS_RG_ROCKET_HIDEOUT
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_31 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_32 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_33 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_15
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_34 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_35 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_16
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 9
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_17
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 79
setvar VAR_ROUTE111_STATE, 1
setvar VAR_ROUTE107_STATE, 1
setvar VAR_ROUTE108_STATE, 1
setvar VAR_ROUTE109_STATE, 1
setvar VAR_ROUTE106_STATE, 1
setvar VAR_ROUTE105_STATE, 1
release
end

RocketHideout_8F_Mision_Gimnasios_texto_1:
.string "AZUL: Así que tú también, GIOVANNI\n"
	.string "nos ha hecho también venir a ANDRA\l"
	.string "y a mí, espero que sea importante\l"
	.string "porque únicamente me queda una\l"
	.string "MEDALLA DE GIMNASIO para completar\l"
	.string "las 8.$"

RocketHideout_8F_Mision_Gimnasios_texto_2:
.string "GIOVANNI: Bien, ANDRA, {PLAYER},\n"
	.string "AZUL, como sabéis, tenemos la\l"
	.string "MASTER BALL en nuestro poder, con\l"
	.string "ella podremos capturar a cualquier\l"
	.string "POKÉMON, incluido...quien ya\l"
	.string "sabéis...$"

RocketHideout_8F_Mision_Gimnasios_texto_3:
.string "Más aún, gracias a las muestras de\n"
	.string "ARTICUNO, ZAPDOS y MOLTRES\l"
	.string "recogidas por vosotros, hemos\l"
	.string "logrado clonar con éxito a estos\l"
	.string "legendarios POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_4:
.string "Por otro lado, FUJI ha hablado con\n"
	.string "BLAINE y le ha puesto al\l"
	.string "corriente, BLAINE fue uno de los\l"
	.string "científicos que trabajó en el\l"
	.string "proyecto MEW, y creemos que tiene\l"
	.string "idea de dónde puede estar MEWTWO...$"

RocketHideout_8F_Mision_Gimnasios_texto_5:
.string "AZUL: Disculpe GIOVANNI, ¿MEWTWO?\n"
	.string "Nunca había oído de tal POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_6:
.string "GIOVANNI: Ya habrá tiempo de\n"
	.string "ponerte al día AZUL, cuanto debes\l"
	.string "saber ahora es que en el momento\l"
	.string "en que sepamos su ubicación y le\l"
	.string "demos captura, tendremos todo lo\l"
	.string "que necesitamos para invadir la\l"
	.string "LIGA POKÉMON y derrocar a LANCE de\l"
	.string "una vez por todas.$"

RocketHideout_8F_Mision_Gimnasios_texto_7:
.string "RECLUTA: Señor perdone que le\n"
	.string "interrumpa, pero está en todos\l"
	.string "lados, acaban de detener a FUJI en\l"
	.string "su casa de PUEBLO LAVANDA, le han\l"
	.string "acusado de colaborar con nosotros.$"

RocketHideout_8F_Mision_Gimnasios_texto_8:
.string "GIOVANNI: No puede ser...$"

RocketHideout_8F_Mision_Gimnasios_texto_9:
.string "Ese BLAINE...\n"
	.string "Nos ha traicionado, no hay otra\l"
	.string "explicación, trabaja para LANCE, o\l"
	.string "peor aún, para OAK.$"

RocketHideout_8F_Mision_Gimnasios_texto_10:
.string "RECLUTA: Eso no es todo señor, la\n"
	.string "ÉLITE 4 ha emitido un comunicado\l"
	.string "actualizando los requisitos para\l"
	.string "participar en la LIGA POKÉMON,\l"
	.string "cito textualmente:\l"
	.string "-Además de las 8 MEDALLAS DE\l"
	.string "GIMNASIO, dado que únicamente\l"
	.string "conocemos de la existencia de tres\l"
	.string "AVES LEGENDARIAS en nuestra\l"
	.string "región, las cuales están\l"
	.string "celosamente protegidas, estará por\l"
	.string "tanto terminantemente prohibido\l"
	.string "participar con cualquiera de estos\l"
	.string "tres POKÉMON no solo en muestra de\l"
	.string "respeto, sino por la imposibilidad\l"
	.string "de su obtención por medios\l"
	.string "legales, entendiendo entonces que\l"
	.string "cualquier ENTRENADOR en posesión\l"
	.string "de estos LEGENDARIOS habrá\l"
	.string "incurrido en prácticas ilegales\l"
	.string "que de ningún modo aprobamos-$"

RocketHideout_8F_Mision_Gimnasios_texto_11:
.string "GIOVANNI: ...$"

RocketHideout_8F_Mision_Gimnasios_texto_12:
.string "GIOVANNI: -Prácticas ilegales que\n"
	.string "de ningún modo aprobamos-, tiene\l"
	.string "gracia viniendo de ellos.$"

RocketHideout_8F_Mision_Gimnasios_texto_13:
.string "GIOVANNI: Gracias, puedes\n"
	.string "retirarte.$"

RocketHideout_8F_Mision_Gimnasios_texto_14:
.string "RECLUTA: Señor...\n"
	.string "Ejecutivos...$"

RocketHideout_8F_Mision_Gimnasios_texto_15:
.string "ANDRA: ¡Maldito BLAINE! ¡Nos ha vendido\n"
	.string "a todos! FUJI tenía la certeza de\l"
	.string "que seguía siendo fiel a nosotros.\l"
	.string "Si LANCE supiera lo de MEWTWO, ¿qué\l"
	.string "podría llegar a pasar?$"

RocketHideout_8F_Mision_Gimnasios_texto_16:
.string "GIOVANNI: No ANDRA, hemos de\n"
	.string "confiar en que, al igual que OAK,\l"
	.string "se ha guardado el secreto. LANCE\l"
	.string "con MEWTWO en su poder sería la\l"
	.string "mayor catástrofe en la historia de\l"
	.string "esta región.$"

RocketHideout_8F_Mision_Gimnasios_texto_17:
.string "Habiéndonos empujado hasta este\n"
	.string "extremo, solo nos queda resolver\l"
	.string "esto a la antigua, de modo que una\l"
	.string "LIGA sin LEGENDARIOS...$"

RocketHideout_8F_Mision_Gimnasios_texto_18:
.string "ANDRA, {PLAYER}, ambos habéis\n"
	.string "demostrado ser extraordinarios\l"
	.string "entrenadores, que {PLAYER} haya\l"
	.string "sido capaz de derrotar a BRUNO es\l"
	.string "prueba de que puede competir\l"
	.string "contra los mejores...$"

RocketHideout_8F_Mision_Gimnasios_texto_19:
.string "Los dos, junto con AZUL, seréis\n"
	.string "candidatos a haceros con el título\l"
	.string "de la LIGA POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_20:
.string "Reuniréis las 8 MEDALLAS DE\n"
	.string "GIMNASIO, y partiréis hacia la\l"
	.string "MESETA AÑIL, sin trampas, sin\l"
	.string "atajos de LEGENDARIOS...usaréis los\l"
	.string "POKÉMON que lleváis entrenando y\l"
	.string "criando desde que entrásteis a\l"
	.string "formar parte del TEAM ROCKET.$"

RocketHideout_8F_Mision_Gimnasios_texto_21:
.string "ANDRA: Pero señor, creía que los\n"
	.string "ROCKETS no podían enfrentar a los\l"
	.string "LÍDERES DE GIMNASIO por MEDALLAS.$"

RocketHideout_8F_Mision_Gimnasios_texto_22:
.string "GIOVANNI: Y así es ANDRA, vuestra\n"
	.string "condición de ROCKET está entre los\l"
	.string "casos de entrenadores sin\l"
	.string "LICENCIA, que es lo que\l"
	.string "verdaderamente se necesita para\l"
	.string "competir por las MEDALLAS, se da\l"
	.string "por hecho que un ROCKET no tiene\l"
	.string "licencia, y por ello se os echa de\l"
	.string "los GIMNASIOS, por no tener\l"
	.string "LICENCIA, realmente no por ser\l"
	.string "ROCKETS.$"

RocketHideout_8F_Mision_Gimnasios_texto_23:
.string "GIOVANNI: Aquí tenéis, totalmente\n"
	.string "legales, no os podrán poner\l"
	.string "ninguna traba para entrar a\l"
	.string "cualquier GIMNASIO.$"

RocketHideout_8F_Mision_Gimnasios_texto_23.1:
.string "¡OBTUVISTE UNA LICENCIA ENTRENADOR DE\n"
	.string "MANOS DE GIOVANNI!$"

RocketHideout_8F_Mision_Gimnasios_texto_24:
.string "Aún así, por supuesto que pueden\n"
	.string "negaros el paso por ser ROCKETS,\l"
	.string "lo que haréis será llevar nuestro\l"
	.string "uniforme -a modo de mofa-,\l"
	.string "riéndoos del TEAM ROCKET y\l"
	.string "ridiculizándolo, nuestro supuesto\l"
	.string "fracaso en SILPH encajará con ello\l"
	.string "perfectamente.$"

RocketHideout_8F_Mision_Gimnasios_texto_25:
.string "ANDRA: Se olerán algo raro, y el\n"
	.string "LT.SURGE ya nos ha visto varias\l"
	.string "veces.$"

RocketHideout_8F_Mision_Gimnasios_texto_26:
.string "GIOVANNI: El LT.SURGE cree que\n"
	.string "nadie tiene posibilidad ante\l"
	.string "LANCE, y además su código bélico\l"
	.string "le impedirá negarle a {PLAYER} un\l"
	.string "combate una vez esté delante suya.$"

RocketHideout_8F_Mision_Gimnasios_texto_27:
.string "AZUL, ¿sabes cuantas MEDALLAS\n"
	.string "tiene ahora mismo ROJO?$"

RocketHideout_8F_Mision_Gimnasios_texto_28:
.string "AZUL: Creo que 6, después de SILPH\n"
	.string "fue directo al GIMNASIO de\l"
	.string "AZAFRÁN, debe de estar ya rumbo a\l"
	.string "ISLA CANELA.$"

RocketHideout_8F_Mision_Gimnasios_texto_29:
.string "GIOVANNI: Mmm...\n"
	.string "No hay tiempo que perder, vuestra\l"
	.string "máxima prioridad debe ser ganar\l"
	.string "esas 7 MEDALLAS de GIMNASIO cuanto\l"
	.string "antes, en cuanto a ti AZUL, ya que\l"
	.string "te falta una, creo que eso tiene\l"
	.string "solución...$"

RocketHideout_8F_Mision_Gimnasios_texto_30:
.string "(GIOVANNI LE ENTREGÓ A AZUL LA\n"
	.string "MEDALLA TIERRA).$"

RocketHideout_8F_Mision_Gimnasios_texto_31:
.string "AZUL: ¿¡Usted es el último LÍDER\n"
	.string "DE GIMNASIO!?$"

RocketHideout_8F_Mision_Gimnasios_texto_32:
.string "GIOVANNI: A veces sí, a veces no,\n"
	.string "depende de cuando sea conveniente,\l"
	.string "y ahora lo es.$"

RocketHideout_8F_Mision_Gimnasios_texto_33:
.string "AZUL: Con permiso, pero tengo que\n"
	.string "prepararme a conciencia para la\l"
	.string "LIGA POKÉMON, no le decepcionaré\l"
	.string "GIOVANNI.$"

RocketHideout_8F_Mision_Gimnasios_texto_34:
.string "ANDRA, {PLAYER}, demostrad cuan\n"
	.string "lejos puede llegar un ROCKET\l"
	.string "dedicado, disciplinado y\l"
	.string "comprometido con sus POKÉMON,\l"
	.string "derrotad a todos los LÍDERES de\l"
	.string "KANTO, y os daré la última MEDALLA\l"
	.string "de igual forma que he hecho con\l"
	.string "AZUL$"

RocketHideout_8F_Mision_Gimnasios_texto_35:
.string "ANDRA: ¡No puedo aguantar más!\n"
	.string "¡Esos LÍDERES DE GIMNASIO van a\l"
	.string "caer como moscas!\l"
	.string "¡Por fin podré enfrentarme a la\l"
	.string "supuesta ÉLITE de la región!$"

RocketHideout_8F_Mision_Gimnasios_texto_36:
.string "GIOVANNI: Solo una entrenadora de\n"
	.string "verdad reaccionaría así, no ve las\l"
	.string "restricciones de la LIGA como un\l"
	.string "problema, sino como una\l"
	.string "oportunidad que le obligará a\l"
	.string "mejorar mucho más, espero que tú\l"
	.string "también afrontes este reto con el\l"
	.string "mismo entusiasmo {PLAYER}, ándate\l"
	.string "con cuidado, los LÍDERES DE\l"
	.string "GIMNASIO ajustan su poder según\l"
	.string "quien tengan enfrente, AZUL y ROJO\l"
	.string "son protegidos de OAK, y como\l"
	.string "tales tienen ciertos privilegios,\l"
	.string "entre ellos poder participar en la\l"
	.string "LIGA POKÉMON sin LICENCIA, y\l"
	.string "enfrentar a unos LÍDERES DE\l"
	.string "GIMNASIO algo disminuidos, pero yo\l"
	.string "no quiero eso para ti y ANDRA.$"

RocketHideout_8F_Mision_Gimnasios_texto_37:
.string "Desde la misma entrega de vuestro\n"
	.string "inicial habéis pasado por todo\l"
	.string "tipo de dificultades, todo lo que\l"
	.string "tenéis lo habéis obtenido por\l"
	.string "méritos propios, sabéis cuál es la\l"
	.string "verdadera cara de esta región, y\l"
	.string "os habéis visto obligados a\l"
	.string "adaptaros a ella, eso os da una\l"
	.string "ventaja y una fortaleza que no\l"
	.string "pueden comprarse, ¡ve y\l"
	.string "muéstraselo a todos!$"

RocketHideout_8F_Mision_Gimnasios_move_1:
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_2:
emote_exclamation_mark
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_6:
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_7:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_8:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Gimnasios_move_10:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_11:
walk_right
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_13:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_14:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_15:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_16:
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_17:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_17 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F7, 102
release
end

RocketHideout8F_Mision_Subterraneo_Silph_Text_1:
.string "GIOVANNI: ¡Oh, {PLAYER}!\n"
	.string "¡Excelente!\l"
	.string "¡Te veo algo cambiado!\l"
	.string "No diría que has estado\l"
	.string "precisamente tomándote con calma\l"
	.string "tus vacaciones.\l"
	.string "¿Me equivoco?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2:
.string "Antes de nada, debo darte una mala\n"
	.string "noticia, y es que OAK ha\l"
	.string "desaparecido totalmente del mapa,\l"
	.string "después de lo ocurrido en la liga\l"
	.string "quedamos en recluirlo en su\l"
	.string "laboratorio de PUEBLO PALETA, pero\l"
	.string "ha encontrado la forma de\l"
	.string "desaparecer, creemos que pueda\l"
	.string "estar tramando algo junto con\l"
	.string "BLAINE, el otro traidor que\l"
	.string "curiosamente ha desaparecido\l"
	.string "también, y mientras FUJI aún entre\l"
	.string "rejas, afortunadamente queda poco\l"
	.string "para su vuelta...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_3:
.string "Pero no he hecho regresar a mi\n"
	.string "mejor general para hablar de OAK,\l"
	.string "el encargo que estoy apunto de\l"
	.string "darte es mucho más trascendental\l"
	.string "para la historia de nuestra\l"
	.string "región, escucha...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4:
.string "Desde siempre, aquellos ciudadanos\n"
	.string "de KANTO con la mente\l"
	.string "suficientemente abierta como para\l"
	.string "ver más allá de los 150\l"
	.string "originales, los que conocían otras\l"
	.string "regiones y viajado hasta la vecina\l"
	.string "JOHTO, o la lejana HOENN, se\l"
	.string "hacían una pregunta:\l"
	.string "¿Por qué no existe en KANTO un\l"
	.string "POKÉMON de las características de\l"
	.string "HO-OH, GROUDON o RAYQUAZA?\l"
	.string "Un patrón que se repite en todas\l"
	.string "las regiones conocidas sin\l"
	.string "excepción, quitando KANTO claro,\l"
	.string "algo curioso...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5:
.string "Surgieron muchas teorías que\n"
	.string "trataban de responder a esta\l"
	.string "pregunta, algunos científicos e\l"
	.string "investigadores señalaron que era\l"
	.string "MEW dicho POKÉMON, sin embargo, no\l"
	.string "podemos meter a MEW en el mismo\l"
	.string "saco que RAYQUAZA, o LUGIA,\l"
	.string "entraría más en el perfil de un\l"
	.string "JIRACHI en HOENN o...$"


RocketHideout8F_Mision_Subterraneo_Silph_Text_6:
.string "PROTÓN: ...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_7:
.string "GIOVANNI: ...CELEBI en JOHTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8:
.string "Otros apuntaban a que KANTO era\n"
	.string "una región desprovista de un\l"
	.string "POKÉMON de tal categoría: lo\l"
	.string "máximo con lo que contaría pues es\l"
	.string "con DRAGONITE y MEW, ambos\l"
	.string "estableciendo el límite de poder\l"
	.string "de la región en 600 STATS BASE,\l"
	.string "después de todo, la historia de\l"
	.string "KANTO pudo propiciar que no se\l"
	.string "diesen los ingredientes para que\l"
	.string "aquí se desarrollase un LUGIA o un\l"
	.string "HO-OH, en ese sentido puede ser\l"
	.string "una cuestión de mero azar, que\l"
	.string "quedaría en una curiosa\l"
	.string "coincidencia, sin embargo...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_9:
.string "Un último grupo de investigadores\n"
	.string "apunta a que dicho POKÉMON\l"
	.string "efectivamente existiría, y el\l"
	.string "único motivo por el que no lo\l"
	.string "conocemos sería precisamente ese:\l"
	.string "aún no lo hemos encontrado.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10:
.string "Esta última teoría se subdivide en\n"
	.string "otras dos teorías, una afirma que\l"
	.string "ese POKÉMON nos es ignoto por su\l"
	.string "escurridiza naturaleza, la otra\l"
	.string "afirma que su poder es tal que\l"
	.string "sobrepasaría el de los legendarios\l"
	.string "pesados de otras regiones, y\l"
	.string "precisamente por ello se encuentra\l"
	.string "lejos de ser accesible para\l"
	.string "cualquier humano, tal vez sean las\l"
	.string "dos, o ninguna...no lo sé.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_11:
.string "GIOVANNI: ...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12:
.string "Este tema siempre me ha fascinado\n"
	.string "{PLAYER}, la posibilidad de que tal\l"
	.string "POKÉMON exista cambiaría la forma\l"
	.string "en que vemos KANTO para siempre,\l"
	.string "entre nuestra cruzada para liberar\l"
	.string "KANTO de las garras de LANCE, y la\l"
	.string "poca información sobre dicho tema,\l"
	.string "el TEAM ROCKET dejó este asunto en\l"
	.string "pausa, sin embargo, con KANTO\l"
	.string "ahora recuperándose, y lo ocurrido\l"
	.string "en tus vacaciones, es el momento\l"
	.string "de reiniciar esta investigación.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_13:
.string "Desde que SILPH es aliada nuestra,\n"
	.string "he tenido ocasión de reunirme\l"
	.string "varias veces con su PRESIDENTE\l"
	.string "{PLAYER}, el caso es que en nuestra\l"
	.string "última reunión, salió precisamente\l"
	.string "este tema y...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_14:
.string "Resulta que SILPH cuenta con una\n"
	.string "gran biblioteca privada en sus\l"
	.string "pisos inferiores, inaccesibles\l"
	.string "para el público, SILPH no solo es\l"
	.string "la empresa más exitosa de KANTO,\l"
	.string "también una de las más antiguas,\l"
	.string "dentro de esa biblioteca privada\l"
	.string "hay algunos documentos que hablan\l"
	.string "precisamente de la existencia de\l"
	.string "un POKÉMON que podría encajar con\l"
	.string "la jerarquía de un LUGIA o un\l"
	.string "HO-OH, o incluso más...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_15:
.string "Tu misión es muy simple {PLAYER},\n"
	.string "solo tendrás que volver a SILPH y\l"
	.string "hablar con la recepcionista para\l"
	.string "que te deje entrar a los pisos\l"
	.string "superiores y así poder acceder a\l"
	.string "esos documentos que podrían ser\l"
	.string "tan reveladores.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_16:
.string "No solo yo, el PRESIDENTE de SILPH\n"
	.string "se mostró encantado de que fueras\l"
	.string "tú quien volviera a SILPH, en ese\l"
	.string "sentido, no encontrarás oposición\l"
	.string "ninguna, solo debes informarte\l"
	.string "todo lo que puedas acerca de este\l"
	.string "tema, buscar cualquier pista que\l"
	.string "nos acerque a dicho POKÉMON,\l"
	.string "¿entiendes?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_17:
.string "GIOVANNI: Bien {PLAYER}, recuerda,\n"
	.string "la recepcionista de SILPH te dará\l"
	.string "acceso a los pisos inferiores,\l"
	.string "saluda al PRESIDENTE de mi parte\l"
	.string "si llegas a verlo.\l"
	.string "¡Eso es todo!$"

RocketHideout8F_Mision_Subterraneo_Silph_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_3:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_5:
walk_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 50
fadescreen 0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 107
release
end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1:
.string "GIOVANNI: ¿Y bien?\n"
	.string "¿Qué has averiguado {PLAYER}?$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2:
.string "GIOVANNI: Mmm...\n"
	.string "Por lo que me dices el texto que\l"
	.string "leíste siquiera cuestiona la\l"
	.string "existencia de ese POKÉMON: la da\l"
	.string "por hecho, y parece que se\l"
	.string "encuentra más cerca de lo que\l"
	.string "pensamos, en PUEBLO LAVANDA.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3:
.string "Pero...\n"
	.string "¿Donde?\l"
	.string "La TORRE POKÉMON sería el único\l"
	.string "lugar destacable, pero conocemos\l"
	.string "de ella todos sus rincones.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4:
.string "Tal vez...\n"
	.string "Sea de esos lugares imposibles de\l"
	.string "acceder, excepto para aquellos que\l"
	.string "ya saben donde está, si fuera el\l"
	.string "caso, nos quedaríamos sin saber la\l"
	.string "verdad...$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5:
.string "GIOVANNI: ¡{PLAYER}!\n"
	.string "¡Tenemos que agotar todas las\l"
	.string "posibilidades!\l"
	.string "No puedo enviar a decenas de\l"
	.string "soldados a que se pongan a limpiar\l"
	.string "cada centímetro de PUEBLO LAVANDA\l"
	.string "en busca de algún pasadizo secreto\l"
	.string "oculto por milenios, levantaría\l"
	.string "muchas sospechas.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6:
.string "Pero, sabiendo de esto solo los\n"
	.string "aquí presentes, puedes ser tú\l"
	.string "quien, de forma discreta,\l"
	.string "investigue cada rincón de PUEBLO\l"
	.string "LAVANDA en busca de algo que ha\l"
	.string "pasado inadvertido por incontables\l"
	.string "generaciones, irás tras un\l"
	.string "espejismo {PLAYER}.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_7:
.string "No obstante, la leyenda no dice\n"
	.string "que dicho culto deba estar\l"
	.string "necesariamente en el centro de\l"
	.string "PUEBLO LAVANDA, ahora la actual\l"
	.string "TORRE POKÉMON, tal vez debamos\l"
	.string "contar también las afueras como\l"
	.string "posibles opciones, tanto el final\l"
	.string "de RUTA 10, que sería la entrada a\l"
	.string "PUEBLO LAVANDA, como el inicio de\l"
	.string "RUTA 12 al sur de PUEBLO LAVANDA,\l"
	.string "entrarían en lo descrito por la\l"
	.string "leyenda.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8:
.string "Eso es todo {PLAYER}, y recuerda,\n"
	.string "cada paso que des podrían ser\l"
	.string "nuevas páginas escritas en la\l"
	.string "historia reciente de KANTO, quizá\l"
	.string "destapemos algo que hace mucho\l"
	.string "debió de saberse...$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5:
face_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 109
release
end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1:
.string "GIOVANNI: ¿Encontraste algo\n"
	.string "{PLAYER}?$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2:
.string "Una historia increíble,\n"
	.string "increíble...\l"
	.string "¿Quién diría que semejante lugar\l"
	.string "se encuentra justo debajo de\l"
	.string "PUEBLO LAVANDA?\l"
	.string "Era real después de todo, si ese\l"
	.string "lugar es real, el POKÉMON debe\l"
	.string "también de serlo.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3:
.string "Y el LÍDER del culto te pidió\n"
	.string "expresamente guardar en secreto la\l"
	.string "forma de hacer aparecer a ese\l"
	.string "POKÉMON, exceptuando a los únicos\l"
	.string "capaces de derrotarle en ese\l"
	.string "combate además de ti, que según el\l"
	.string "en todo KANTO son 1, 2 a lo sumo,\l"
	.string "entrenadores más.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4:
.string "GIOVANNI: ... ...$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5:
.string "Supongo que se referiría a OAK y a\n"
	.string "mi, no cabe duda de que hay\l"
	.string "muchísimas cosas que aún\l"
	.string "desconocemos, dices que ese\l"
	.string "ENTRENADOR contaba con MEW en su\l"
	.string "poder, desaparecido desde la\l"
	.string "creación de MEWTWO, y aún así\l"
	.string "decía estar usando el 50% de su\l"
	.string "poder, pero para eso se fundó el\l"
	.string "TEAM ROCKET, para descubrir los\l"
	.string "límites últimos de este mundo, e\l"
	.string "iremos ahora a ROCA OMBLIGO.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6:
.string "Uno de los trabajos que ATLAS ha\n"
	.string "estado haciendo en las ISLAS SETE\l"
	.string "es encontrar y dejar registradas\l"
	.string "todas las rutas alternativas que\l"
	.string "hay de conexión entre las islas.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7:
.string "En teoría existen 7 islas, de ahí\n"
	.string "el nombre de ISLAS SETE, pero en\l"
	.string "la práctica se podrían considerar\l"
	.string "10 porciones de tierra de tamaño\l"
	.string "considerable, siendo la octava\l"
	.string "justo al sur de ISLA SECUNDA, una\l"
	.string "novena al este de las ruinas de\l"
	.string "ISLA SÉPTIMA y al sur de ISLA\l"
	.string "SEXTA, y la décima, que se\l"
	.string "encuentra ligeramente al noroeste\l"
	.string "de ISLA INTA, esta última es ROCA\l"
	.string "OMBLIGO.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8:
.string "LUGIA y HO-OH cuentan con un poder\n"
	.string "similar al de MEWTWO, nuestro plan\l"
	.string "de emergencia para salvar KANTO\l"
	.string "después de que MEWTWO escapara fue\l"
	.string "encontrar estos dos POKÉMON, pero,\l"
	.string "al igual que LANCE, jamás pudimos\l"
	.string "hacerlo, hasta que recientemente,\l"
	.string "después de lo ocurrido en la LIGA\l"
	.string "POKÉMON, ATLAS me envió un informe\l"
	.string "con este reciente descubrimiento:\l"
	.string "una décima isla en el centro de\l"
	.string "las 7, cubierta de fuertes mareas\l"
	.string "y con una gran cueva en su\l"
	.string "interior aún por explorar.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9:
.string "No se me ocurre otro lugar donde\n"
	.string "puedan estar estas dos bestias,\l"
	.string "vistas por última vez hace\l"
	.string "décadas.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10:
.string "¡{PLAYER}!\n"
	.string "ROCA OMBLIGO está relativamente\l"
	.string "cerca de ISLA INTA, sin embargo,\l"
	.string "las corrientes entre ellas son las\l"
	.string "más fuertes de todas las ISLAS\l"
	.string "SETE, sería correr demasiados\l"
	.string "riesgos el tratar de pasar por\l"
	.string "ahí, sin embargo...$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11:
.string "ATLAS descubrió una ruta\n"
	.string "alternativa saliendo desde el\l"
	.string "puerto de ISLA SECUNDA, es más\l"
	.string "larga, pero las corrientes son\l"
	.string "menos traicioneras y el camino más\l"
	.string "lineal, cruzaremos por ahí, que no\l"
	.string "te de miedo el cartel de\l"
	.string "precaución, en esa isla lo han\l"
	.string "colocado más para ahorrarse\l"
	.string "problemas y lavarse las manos ante\l"
	.string "cualquier accidente que por la\l"
	.string "verdadera peligrosidad de sus\l"
	.string "corrientes.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12:
.string "Te espero en ROCA OMBLIGO {PLAYER},\n"
	.string "esta vez seré yo en persona quien\l"
	.string "te haga compañía en esta misión.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 2
addobject 10
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_1 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_4 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_7
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_1, RocketHideout8F_Mision_Mansion_Oak_Text_14
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_16 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
addobject 2
addobject 10
delay 20
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_17 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout8F_Mision_Mansion_Oak_Move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_18 MSGBOX_AUTOCLOSE
delay 15
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_19 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F7, 113
release
end

RocketHideout8F_Mision_Mansion_Oak_Text_1:
.string "ANDRA: Y eso fue todo lo que\n"
	.string "sucedió, señor.$"

RocketHideout8F_Mision_Mansion_Oak_Text_2:
.string "GIOVANNI: Excelente ANDRA, tú y\n"
	.string "{PLAYER} habéis hecho un gran\l"
	.string "trabajo, ahora sabemos que esa\l"
	.string "reliquía formaba parte de DEOXYS,\l"
	.string "y que tanto OAK como BLAINE se\l"
	.string "esconden en una parte de la\l"
	.string "MANSIÓN POKÉMON, cuando ambos\l"
	.string "estén bajo control, KANTO al fin\l"
	.string "podrá tener plena tranquilidad, no\l"
	.string "sabemos lo que esos maníacos de\l"
	.string "laboratorio se traen entre manos.$"

RocketHideout8F_Mision_Mansion_Oak_Text_3:
.string "GIOVANNI: ... ...$"

RocketHideout8F_Mision_Mansion_Oak_Text_4:
.string "ADMIN JEFE ANDRA, EJECUTIVO\n"
	.string "PROTÓN, necesito hablar en privado\l"
	.string "con {PLAYER}, salid un momento\l"
	.string "fuera.$"

RocketHideout8F_Mision_Mansion_Oak_Text_5:
.string "GIOVANNI: Así que OAK te ha retado\n"
	.string "a acudir solo a la MANSIÓN\l"
	.string "POKÉMON, para demostrarte el\l"
	.string "reciente poder que ha adquirido.$"

RocketHideout8F_Mision_Mansion_Oak_Text_6:
.string "La lógica dice que, sabiendo esto,\n"
	.string "debemos entrar con toda la fuerza\l"
	.string "de nuestra organización a esa\l"
	.string "MANSIÓN POKÉMON, y esta vez\l"
	.string "destruir completamente todo lo que\l"
	.string "sea que estén haciendo allí.$"

RocketHideout8F_Mision_Mansion_Oak_Text_7:
.string "OAK es un hombre precavido, frío y\n"
	.string "calculador, si te ha lanzado ese\l"
	.string "reto a ti, viendo de primera mano\l"
	.string "cómo derrotaste a ROJO y LANCE, es\l"
	.string "porque de verdad cuenta con algo\l"
	.string "totalmente extraordinario en su\l"
	.string "poder.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8:
.string "Sospecho que, de alguna forma, han\n"
	.string "recuperado a MEWTWO, si de verdad\l"
	.string "es así, y deciden usarlo a su\l"
	.string "antojo, toda la región corre un\l"
	.string "grave peligro, mayor incluso que\l"
	.string "en la guerra que LANCE desató.$"

RocketHideout8F_Mision_Mansion_Oak_Text_9:
.string "Sin embargo, en el TEAM ROCKET nos\n"
	.string "tomamos muy en serio tanto el\l"
	.string "honor como la lealtad, si OAK te\l"
	.string "ha retado personalmente y\l"
	.string "consideras que debes ir por tu\l"
	.string "cuenta, deberías hacerlo...$"

RocketHideout8F_Mision_Mansion_Oak_Text_10:
.string "Pero...dada la importancia\n"
	.string "para toda la región que tiene este\l"
	.string "asunto, tanto yo como ATLAS,\l"
	.string "PETREL, ANDRA, PROTÓN y el resto\l"
	.string "de miembros más destacados de la\l"
	.string "organización nos mantendremos en\l"
	.string "la retaguardia {PLAYER}, por si\l"
	.string "algo saliera mal.$"

RocketHideout8F_Mision_Mansion_Oak_Text_11:
.string "Tengo que asegurarme, {PLAYER}, de\n"
	.string "que estás preparado para todo,\l"
	.string "incluso para MEWTWO.$"

RocketHideout8F_Mision_Mansion_Oak_Text_12:
.string "Del mismo modo que ATLAS se\n"
	.string "aseguró de que tanto ANDRA como tú\l"
	.string "contábais con el mínimo de nivel\l"
	.string "para abordar la LIGA POKÉMON, esta\l"
	.string "situación requiere de la prueba\l"
	.string "máxima...$"

RocketHideout8F_Mision_Mansion_Oak_Text_13:
.string "Yo, GIOVANNI, LÍDER DEL TEAM\n"
	.string "ROCKET, me encargaré personalmente\l"
	.string "de llevar a tus POKÉMON al\l"
	.string "siguiente nivel.$"

RocketHideout8F_Mision_Mansion_Oak_Text_14:
.string "Me siento orgulloso de ti {PLAYER},\n"
	.string "con tu nivel actual, KANTO no\l"
	.string "tiene ya ningún misterio para ti.$"

RocketHideout8F_Mision_Mansion_Oak_Text_15:
.string "Actualmente soy mucho mejor\n"
	.string "ENTRENADOR que cuando OAK y yo nos\l"
	.string "disputábamos el título de CAMPEÓN\l"
	.string "de KANTO y, a pesar de ello, has\l"
	.string "sido capaz de derrotarme, no tengo\l"
	.string "palabras {PLAYER}, te has ganado el\l"
	.string "derecho de hacer lo que quieras en\l"
	.string "esta situación.$"

RocketHideout8F_Mision_Mansion_Oak_Text_16:
.string "¡¡ANDRA!!\n"
	.string "¡¡PROTÓN!!$"

RocketHideout8F_Mision_Mansion_Oak_Text_17:
.string "Llamad al ADMINISTRADOR JEFE\n"
	.string "ATLAS, al ADMINISTRADOR PETREL, al\l"
	.string "actual CAMPEÓN AZUL, y convocad al\l"
	.string "resto de ALTOS RANGOS de la\l"
	.string "organización, debemos de\l"
	.string "asegurarnos que, sea como sea, OAK\l"
	.string "y BLAINE no salgan de la MANSIÓN\l"
	.string "POKÉMON, y de que {PLAYER} no corra\l"
	.string "ningún peligro.$"


RocketHideout8F_Mision_Mansion_Oak_Text_18:
.string "PROTÓN: ¡A LA ORDEN SEÑOR!$"


RocketHideout8F_Mision_Mansion_Oak_Text_19:
.string "GIOVANNI: Ve {PLAYER}, y\n"
	.string "demuéstrale a OAK de dónde\l"
	.string "realmente proviene el poder de un\l"
	.string "ENTRENADOR.$"

RocketHideout8F_Mision_Mansion_Oak_Move_1:
face_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_3:
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_4:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_5:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_6:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_7:
walk_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_8:
walk_up
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Silph_move5.10:
emote_exclamation_mark
face_up
step_end


RocketHideout8F_Mision_Johto::
lock
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
addobject 10
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_1 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout8F_Mision_Johto_move_3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_4
waitmovement 0x0
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout8F_Mision_Johto_Text_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_SHOP
addmoney 1500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout8F_Mision_Johto_Text_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_6 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_7
waitmovement 0x0
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_10 MSGBOX_DEFAULT
givemon SPECIES_RAIKOU, 25, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_11 MSGBOX_DEFAULT
givemon SPECIES_ENTEI, 25, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_12 MSGBOX_DEFAULT
givemon SPECIES_SUICUNE, 25, ITEM_LUM_BERRY
waitfanfare
msgbox RocketHideout8F_Mision_Johto_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_16 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 10, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_10
applymovement 1, RocketHideout8F_Mision_Johto_move_11
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_18 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
applymovement 10, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 10, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 10, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 10
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
playse SE_M_STAT_INCREASE
applymovement 6, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 6, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
playse SE_SHOP
waitse
applymovement 6, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 3, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_6
applymovement 6, RocketHideout8F_Mision_Johto_move_3
applymovement 1, RocketHideout8F_Mision_Johto_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_22 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_14
applymovement 6, RocketHideout8F_Mision_Johto_move_15
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_2
applymovement 6, RocketHideout8F_Mision_Johto_move_16
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_17
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_26 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_27.1 MSGBOX_DEFAULT
waitfanfare
additem ITEM_TOWN_MAP
msgbox RocketHideout8F_Mision_Johto_Text_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_28 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_18
applymovement 1, RocketHideout8F_Mision_Johto_move_19
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
setdisguise [240]
setvar VAR_UNUSED_0x40F7, 808
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7



RocketHideout_8F_Disguise_Player_3::
delay 40
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout8F_Mision_Johto_Text_29.1 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_30 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 117
release
end

RocketHideout8F_Mision_Johto_Text_30:
.string "GIOVANNI: Te espero en la SALA DEL\n"
	.string "POTENCIAL MÁXIMO ALCANZABLE.$"

RocketHideout8F_Mision_Johto_Text_27.1:
.string "¡¡{PLAYER} obtuvo un MAPA de\n"
	.string "manos de GIOVANNI!$"

RocketHideout8F_Mision_Johto_Text_18.1:
.string "¡¡ANDRA fue ascendida a ADMIN\n"
	.string "JEFE EN LA REGION DE HOENN!!$"

RocketHideout8F_Mision_Johto_Text_29.1:
.string "¡¡{PLAYER} fue ascendido a ADMIN\n"
	.string "JEFE EN LA REGION DE JOHTO!!$"

RocketHideout8F_Mision_Johto_Text_1:
.string "ANDRA: ¡{PLAYER}!\n"
	.string "¡Eres incansable!\l"
	.string "Yo ya estaba lista para entrar por\l"
	.string "la fuerza a MANSIÓN CANELA, ¡y vas\l"
	.string "tú y derrotas a todos antes!$"

RocketHideout8F_Mision_Johto_Text_2:
.string "GIOVANNI: Ambos le habéis dado al\n"
	.string "TEAM ROCKET más de lo que nadie\l"
	.string "pudiera esperar, vuestro nivel\l"
	.string "como ENTRENADORES se sale de\l"
	.string "cualquier rango que pueda\l"
	.string "ofreceros en el TEAM ROCKET, es\l"
	.string "por ello que toca hablar de\l"
	.string "vuestro futuro inmediato, algo que\l"
	.string "os suponga un reto de verdad y\l"
	.string "expanda la organización aún más,\l"
	.string "pero antes...\l"
	.string "Vuestras recompensas.$"

RocketHideout8F_Mision_Johto_Text_3:
.string "¡¡ACABAS DE FACTURAR 1,5 MILLONES\n"
	.string "DE POKÉS!!$"

RocketHideout8F_Mision_Johto_Text_4:
.string "GIOVANNI: ...$"

RocketHideout8F_Mision_Johto_Text_5:
.string "¿Estás segura de que no los\n"
	.string "quieres, ANDRA?$"

RocketHideout8F_Mision_Johto_Text_6:
.string "ANDRA: Segura, no los necesito\n"
	.string "para formar mi mejor equipo.$"

RocketHideout8F_Mision_Johto_Text_7:
.string "GIOVANNI: Es tu voluntad, que así\n"
	.string "sea.$"

RocketHideout8F_Mision_Johto_Text_8:
.string "Debes saber, {PLAYER}, que cuando\n"
	.string "devolvimos a las BESTIAS DE JOHTO\l"
	.string "a su lugar de origen, nos tomamos\l"
	.string "la libertad de analizar sus ADN\l"
	.string "antes, el resultado es claro:\l"
	.string "hemos podido clonarlos al igual\l"
	.string "que ocurrió con las AVES DE KANTO.$"

RocketHideout8F_Mision_Johto_Text_9:
.string "Como uno de los ADMIN.JEFE, te\n"
	.string "corresponde un ejemplar de cada,\l"
	.string "espero que no te traigan malos\l"
	.string "recuerdos de tu combate con LANCE,\l"
	.string "recuerda que son clones.$"

RocketHideout8F_Mision_Johto_Text_10:
.string "¡¡OBTUVISTE UN RAIKOU AL NV:25!!$"

RocketHideout8F_Mision_Johto_Text_11:
.string "¡¡OBTUVISTE UN ENTEI AL NV:25!!$"

RocketHideout8F_Mision_Johto_Text_12:
.string "¡¡OBTUVISTE UN SUICUNE AL NV:25!!$"

RocketHideout8F_Mision_Johto_Text_13:
.string "Y ahora, ponéos cómodos, tenemos\n"
	.string "mucho de lo que hablar.$"

RocketHideout8F_Mision_Johto_Text_14:
.string "Con MEWTWO en nuestro poder,\n"
	.string "clones de las AVES DE KANTO y\l"
	.string "BESTIAS DE JOHTO, el TEAM ROCKET\l"
	.string "ha alcanzado un poder mayor del\l"
	.string "que hace meses podríamos soñar.$"
	

RocketHideout8F_Mision_Johto_Text_15:
.string "OAK detenido, LANCE atado...\n"
	.string "KANTO está totalmente bajo nuestro\l"
	.string "control, al fin podremos devolver\l"
	.string "a la región todo el esplendor que\l"
	.string "tuvo antes de la guerra, eso no\l"
	.string "requerirá más que tiempo, es por\l"
	.string "ello que vuestros destinos se\l"
	.string "alejan de aquí.$"

RocketHideout8F_Mision_Johto_Text_16:
.string "ANDRA: ¿Donde iremos, señor?$"

RocketHideout8F_Mision_Johto_Text_17:
.string "Yo dedicaré todos mis esfuerzos a\n"
	.string "reconstruir KANTO como es debido,\l"
	.string "y ahora que cuento con ROCKET\l"
	.string "como vosotros, creo que ha llegado\l"
	.string "el momento de delegar\l"
	.string "completamente mis poderes en\l"
	.string "nuestras sucursales de JOHTO y\l"
	.string "HOENN.$"

RocketHideout8F_Mision_Johto_Text_18:
.string "¡ANDRA!\n"
	.string "¡A partir de ahora estarás al\l"
	.string "mando del TEAM ROCKET en la región\l"
	.string "de HOENN!\l"
	.string "¡Quedas ascendida a ADMIN.JEFE\l"
	.string "ROCKET y LÍDER en HOENN!$"

RocketHideout8F_Mision_Johto_Text_19:
.string "ANDRA: ¡Wow!\n"
	.string "¡No puedo creerlo!$"

RocketHideout8F_Mision_Johto_Text_20:
.string "Nuestra sucursal en HOENN aún no\n"
	.string "está construída al 100%, pero\l"
	.string "puedes instalar tus cosas allí\l"
	.string "ANDRA, lamentablemente, la\l"
	.string "distancia entre regiones nos\l"
	.string "impide por el momento emplear la\l"
	.string "tecnología del teletransporte para\l"
	.string "enviarte allí, pero no te\l"
	.string "preocupes, tienes un Ferry en\l"
	.string "CARMÍN esperándote.$"

RocketHideout8F_Mision_Johto_Text_21:
.string "Sé que te encantan la mitología y\n"
	.string "los POKÉMON ANCESTRALES ANDRA, es\l"
	.string "por ello que te envío a HOENN,\l"
	.string "poco a poco desenpolvaremos los\l"
	.string "misterios de esa región, que son\l"
	.string "muchos.$"

RocketHideout8F_Mision_Johto_Text_22:
.string "ANDRA: Supongo que se refiere a\n"
	.string "esas RUINAS que pueden verse en el\l"
	.string "DESIERTO, al norte de PUEBLO\l"
	.string "AZULINA, y en RUTA 120.$"

RocketHideout8F_Mision_Johto_Text_23:
.string "GIOVANNI: Veo que no hace falta\n"
	.string "que te diga nada más, por tu\l"
	.string "parte, eso es todo ANDRA, HOENN te\l"
	.string "espera.$"

RocketHideout8F_Mision_Johto_Text_24:
.string "ANDRA: No creas que usaré en\n"
	.string "contra tuya LEGENDARIOS exóticos\l"
	.string "de HOENN en nuestro próximo\l"
	.string "combate {PLAYER}, te dije que\l"
	.string "llegaría a ser la mejor únicamente\l"
	.string "con NO LEGENDARIOS, y lo mantengo.\l"
	.string "¡Espero que algún día visites\l"
	.string "HOENN, tal vez yo me pase por\l"
	.string "JOHTO, si la situación lo\l"
	.string "requiere!$"

RocketHideout8F_Mision_Johto_Text_25:
.string "GIOVANNI: Bien {PLAYER}, sabes que\n"
	.string "quedaron muchos cabos sueltos que\l"
	.string "no pudieron resolverse por la\l"
	.string "irrupción de OAK, pero que debes\l"
	.string "saber antes de viajar a JOHTO.$"

RocketHideout8F_Mision_Johto_Text_26:
.string "En primer lugar, toma esto.$"

RocketHideout8F_Mision_Johto_Text_27:
.string "Con este MAPA podrás ubicarte\n"
	.string "como es debido dentro de toda una\l"
	.string "región totalmente nueva para ti.$"

RocketHideout8F_Mision_Johto_Text_28:
.string "Ahora, este no es el lugar\n"
	.string "más adecuado para explicarte los\l"
	.string "objetivos tras los que irás en\l"
	.string "JOHTO, ese lugar está en la sala\l"
	.string "de al lado, en nuestra ZONA DE\l"
	.string "INVESTIGACIÓN ACERCA DEL MÁXIMO\l"
	.string "POTENCIAL ALCANZABLE POR UN\l"
	.string "POKÉMON, al fin hemos abierto la\l"
	.string "última de las zonas, y es allí\l"
	.string "donde te espero {PLAYER}, en ese\l"
	.string "lugar entenderás el porqué de\l"
	.string "muchos de los objetivos tras los\l"
	.string "que irás en JOHTO.$"

RocketHideout8F_Mision_Johto_Text_29:
.string "GIOVANNI: Una última cosa {PLAYER},\n"
	.string "¡a partir de ahora estarás al\l"
	.string "mando del TEAM ROCKET en la región\l"
	.string "de JOHTO!\l"
	.string "¡Quedas ascendido a ADMIN.JEFE\l"
	.string "ROCKET y LÍDER en JOHTO!$"

RocketHideout8F_Mision_Johto_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Johto_move_2:
face_down
step_end

RocketHideout8F_Mision_Johto_move_3:
face_right
step_end

RocketHideout8F_Mision_Johto_move_4:
walk_up
step_end

RocketHideout8F_Mision_Johto_move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_6:
face_left
step_end

RocketHideout8F_Mision_Johto_move_7:
walk_slow_down
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_8:
walk_slow_up
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_9:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_10:
face_up
step_end

RocketHideout8F_Mision_Johto_move_11:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_12:
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
step_end


RocketHideout8F_Mision_Johto_move_13:
walk_up
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_14:
walk_right
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_15:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout8F_Mision_Johto_move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Johto_move_17:
walk_left
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_18:
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_19:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
addobject 2
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3
waitmovement 0x0
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8 MSGBOX_AUTOCLOSE
fadescreen 1
delay 25
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 168
release
end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1:
.string "GIOVANNI: Como te decía, ANDRA, las\n"
	.string "RUINAS ALFA deben de estar bajo\l"
	.string "máxima vigilancia a partir de\l"
	.string "ahora.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2:
.string "GIOVANNI: {PLAYER}, ¿te das cuenta\n"
	.string "del POKÉMON al que te has enfrentado?\l"
	.string "Nuestros científicos han\l"
	.string "determinado su ATAQUE ESPECIAL en\l"
	.string "190 de BASE. Hasta ahora, creíamos\l"
	.string "que los 180 de DEOXYS eran el tope\l"
	.string "absoluto, y no solo eso, con solo\l"
	.string "50 en ATAQUE FÍSICO logra unos 660\l"
	.string "de BASE. No hay duda de que ese\l"
	.string "POKÉMON es incluso superior en\l"
	.string "números a LEGENDARIOS MAYORES como\l"
	.string "LUGIA y HO-OH. Los límites a los\l"
	.string "que creíamos que podían llegar los\l"
	.string "POKÉMON convencionales acaban de\l"
	.string "expandirse. La información que\l"
	.string "obtendremos de este POKÉMON nos\l"
	.string "ayudará a perfeccionar aún más el\l"
	.string "ATAQUE ESPECIAL de nuevos\l"
	.string "prototipos de MEWTWO, tal vez\l"
	.string "logremos incluso pasar esos 190 de\l"
	.string "BASE.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3:
.string "Pero no estamos aquí para eso. Ya\n"
	.string "he puesto al día a ANDRA, y le\l"
	.string "he pedido que esté atenta a\l"
	.string "cualquier movimiento extraño que\l"
	.string "pueda darse en RUINAS ALFA.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4:
.string "No sabemos lo que ese ENTRENADOR\n"
	.string "pretende, pero lo que busca debe\l"
	.string "de estar en ese lugar.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5:
.string "Sin embargo, nos falta\n"
	.string "información, es aquí donde entras\l"
	.string "tú, {PLAYER}. Deberás visitar el\l"
	.string "culto de PUEBLO LAVANDA una vez\l"
	.string "más, explicarle la situación a su\l"
	.string "LÍDER. Tal vez él sepa qué hacer.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6:
.string "Eso es todo por ahora, ATLAS y yo\n"
	.string "estamos muy ocupados poniendo en\l"
	.string "marcha todos los puntos hablados\l"
	.string "en TRIGAL, pero no dudaremos en\l"
	.string "intervenir si es necesario. Espero\l"
	.string "noticias vuestras.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7:
.string "ANDRA: ¡A la orden, señor!$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8:
.string "No me dijiste que ese tipo contaba\n"
	.string "con KYOGRE, GROUDON y RAYQUAZA\l"
	.string "{PLAYER}, ¿de verdad enfrentaste a\l"
	.string "los tres LEGENDARIOS de HOENN a la\l"
	.string "vez?\l"
	.string "Ten mucho cuidado, he estudiado la\l"
	.string "mitología de HOENN, y la leyenda\l"
	.string "habla de FORMAS PRIMIGENIAS aún\l"
	.string "más poderosas de estos\l"
	.string "LEGENDARIOS, las que de verdad\l"
	.string "crearon la tierra y el mar, no sé\l"
	.string "si ese tipo quiere comprobar si\l"
	.string "esa leyenda es cierta, pero tenlo\l"
	.string "en cuenta.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1:
face_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2:
face_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4:
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6:
walk_in_place_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7:
walk_down
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Lago_Furia::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_4
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_7 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_8 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_LUGIA, 60, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_HO_OH, 60, ITEM_LUM_BERRY
waitfanfare
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_4
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_19 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_20 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
clearflag FLAG_RECEIVED_SHOAL_SHELL_1
setvar VAR_VERDANTURF_TOWN_STATE, 1
setvar VAR_PACIFIDLOG_TOWN_STATE, 1
setvar VAR_MAUVILLE_CITY_STATE, 1
clearflag FLAG_RECEIVED_SHOAL_SALT_4
setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
setvar VAR_UNUSED_0x40F7, 180
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_30 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 9, 9
release
end

RocketHideout_8F_Mision_Lago_Furia_Texto_30:
.string "¿Quieres ir a tu despacho en JOHTO para\n"
	.string "ver los documentos sobre las nuevas\l"
	.string "misiones?$"

RocketHideout_8F_Mision_Lago_Furia_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_10:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_9:
walk_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_8:
walk_slow_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_7:
walk_slow_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_6:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_5:
face_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_3:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_2:
face_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_1:
face_down
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Texto_1:
.string "GIOVANNI: ¡{PLAYER}! ¡Eres\n"
	.string "extraordinario, pudiste con los 3\l"
	.string "POKÉMON más poderosos de todos los\l"
	.string "tiempos! ¿Entiendes el motivo de tu\l"
	.string "victoria? En el momento en que la\l"
	.string "inmortalidad de tales POKÉMON se vio\l"
	.string "sujeta a las reglas que rigen el\l"
	.string "combate POKÉMON entre dos\l"
	.string "ENTRENADORES, sus poderes dejaron de\l"
	.string "ser infinitos y, por tanto, vulnerables.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_2:
.string "Ese ENTRENADOR quiso usarlos como\n"
	.string "POKÉMON convencionales, y ahí\l"
	.string "perdieron su esencia.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_3:
.string "No obstante, solo un ENTRENADOR que ha\n"
	.string "alcanzado un estado de equilibrio sin\l"
	.string "igual con su equipo, podría llegar a\l"
	.string "batirles aún siendo un combate\l"
	.string "POKÉMON. Tú eras el único que podía\l"
	.string "hacerlo, {PLAYER}...$"

RocketHideout_8F_Mision_Lago_Furia_Texto_6:
.string "Como ya es habitual, después de cada\n"
	.string "gran acontecimiento, os reúno aquí\l"
	.string "para hacer balance de todo… y mirar a\l"
	.string "futuro.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_7:
.string "Antes de nada, vuestras recompensas.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_8:
.string "¡¡OBTUVISTE 2 MILLONES DE POKÉS!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_9:
.string "Y no solo eso, gracias a todo el revuelo\n"
	.string "causado por ZEUS, y la entrada a\l"
	.string "RUINAS ALFA, pudimos extraer los ADN\l"
	.string "de LUGIA y HO-OH, no de sus formas\l"
	.string "primigenias, pero si las conocidas por\l"
	.string "la cultura de JOHTO.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_10:
.string "ANDRA ve deshonroso usar esta clase de\n"
	.string "POKÉMON, de modo que únicamente tú\l"
	.string "recibirás ejemplares clonados,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_11:
.string "¡¡OBTUVISTE UN LUGIA AL NV.60!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_12:
.string "¡¡OBTUVISTE UN HO-OH AL NV.60!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_13:
.string "ANDRA: No creas que no sabré cómo\n"
	.string "lidiar con ellos en caso de que los uses\l"
	.string "contra mi, {PLAYER}. Ya derroté al\l"
	.string "HO-OH dorado, una forma aún más\l"
	.string "poderosa que esos clones, ¡no lo\l"
	.string "olvides!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_14:
.string "GIOVANNI: Bien, ahora, hablemos de\n"
	.string "vuestras futuras misiones.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_15:
.string "{PLAYER} hizo un trabajo excelente\n"
	.string "recopilando información sobre los\l"
	.string "FUERTE VÍNCULO de JOHTO, toda esta\l"
	.string "información ha servido a nuestros\l"
	.string "CIENTÍFICOS para optimizar y expandir\l"
	.string "aún más el poder de futuros\l"
	.string "prototipos, tal y como en su día lo fue\l"
	.string "MEWTWO.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_16:
.string "No obstante, JOHTO es mucho más que\n"
	.string "sus pueblos y ciudades, a diferencia de\l"
	.string "KANTO, cuenta con muchos lugares aún\l"
	.string "por explorar.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_17:
.string "Tenemos serias sospechas de que estos\n"
	.string "lugares esconden POKÉMON únicos,\l"
	.string "cuyos datos podrían seguir aportando\l"
	.string "información fundamental para nuestras\l"
	.string "investigaciones.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_18:
.string "La apertura de la estación que conecta\n"
	.string "TRIGAL con AZAFRÁN, y la demolición de\l"
	.string "la TORRE LAVANDA se aproximan, pero a\l"
	.string "la espera de estos acontecimientos,\l"
	.string "vuestra misión será seguir expandiendo\l"
	.string "lo que sabemos sobre los POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_19:
.string "Por ello, os daré algo que deberíais\n"
	.string "haber tenido hace mucho.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_20:
.string "¡OBTUVISTE UNA POKÉDEX!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_21:
.string "Cortesía de OAK, gracias a su invento,\n"
	.string "no solo se enviará la información de\l"
	.string "todo nuevo POKÉMON que encontréis a\l"
	.string "nuestra base de datos, también\l"
	.string "quedará registrada para uso propio,\l"
	.string "incluso podréis ver los STATS BASE, si\l"
	.string "llegáis a capturar al POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_22:
.string "ANDRA: De modo que esto es lo que ese\n"
	.string "malcriado de ROJO usaba, sé de varios\l"
	.string "POKEMANÍACOS que darían todo lo que\l"
	.string "tienen por un artefacto como este.\l"
	.string "Nosotros le daremos el mejor uso\l"
	.string "posible, ¿verdad, {PLAYER}?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_23:
.string "¿Quiere decir entonces que no regreso a\n"
	.string "HOENN, señor?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_24:
.string "GIOVANNI: Así es, ANDRA, por ahora te\n"
	.string "quedarás en JOHTO y harás la misma\l"
	.string "tarea que ha estado haciendo\l"
	.string "{PLAYER}. Sois los dos entrenadores\l"
	.string "más fuertes de toda la organización, y\l"
	.string "una misión así, en la que podéis\l"
	.string "enfrentaros a cualquier cosa, requiere\l"
	.string "de la mayor preparación posible.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_25:
.string "ANDRA: ¿Y por dónde empezamos?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_26:
.string "GIOVANNI: Os he dejado documentos, con\n"
	.string "una explicación detallada sobre cada\l"
	.string "una de las misiones que abordareis, en\l"
	.string "vuestros respectivos despachos. No te\l"
	.string "preocupes ANDRA, ya hay conexión vía\l"
	.string "teletransporte con la BASE en HOENN.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_27:
.string "El orden en el que decidáis hacerlas es\n"
	.string "cosa vuestra, aunque me gustaría que\l"
	.string "indagárais lo máximo posible en cada\l"
	.string "una de ellas. Una vez investigado lo\l"
	.string "suficiente, regresad a mi despacho.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_28:
.string "ANDRA: ¡Genial, vamos a explorar JOHTO!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_29:
.string "¿Has oído, {PLAYER}? Los lugares más\n"
	.string "recónditos de JOHTO nos esperan, ¿qué\l"
	.string "misterios estarán esperándonos?$"

RocketHideout_8F_Mision_Base_Hoenn::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_22 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 184
release
end

RocketHideout_8F_Mision_Base_Hoenn_Move_10:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_8:
walk_slow_left
walk_in_place_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_7:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_6:
face_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_5:
walk_slow_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_2:
face_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_4:
face_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_1:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Texto_1:
.string "ANDRA: ¡Jah! ¡Sabía que aparecerías\n"
	.string "pronto, {PLAYER}! ¡Yo acabo de\l"
	.string "completar también mis misiones!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_2:
.string "GIOVANNI: Nuestra base de datos ha\n"
	.string "recogido información muy valiosa de\l"
	.string "vuestras expediciones, pero me\l"
	.string "gustaría oiros a vosotros. Contadme\l"
	.string "todos los detalles…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_3:
.string "Ya veo… Así que JOHTO cuenta con\n"
	.string "varias especies creidas extintas, y\l"
	.string "que habitan en ese gran paraíso que es\l"
	.string "la zona oeste de ORQUÍDEA.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4:
.string "No me extraña, únicamente hay\n"
	.string "catalogadas 100 especies originales de\l"
	.string "JOHTO, un número muy pequeño si lo\l"
	.string "comparamos con las 151 de KANTO, o las\l"
	.string "135 de HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_5:
.string "En cuanto a lo de ese tal EUSINE, no te\n"
	.string "preocupes {PLAYER}, mandaré a\l"
	.string "buscarle. Todo lo que él ha visto y\l"
	.string "vivido en esa pagoda nos será de\l"
	.string "enorme utilidad para nuestras\l"
	.string "investigaciones.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_6:
.string "Lo que realmente me preocupa es tu\n"
	.string "misión en el LAGO DE LA FURIA,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_7:
.string "El resultado ha sido inmejorable, y el\n"
	.string "POKÉMON hallado ahí excepcional. Pero\l"
	.string "esos CIENTÍFICOS… no trabajan para\l"
	.string "nosotros, parecen perseguir objetivos\l"
	.string "similares a los nuestros.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_8:
.string "ANDRA: Yo también me crucé con\n"
	.string "personajes así en HOENN, en plena\l"
	.string "búsqueda de los REGIS…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_9:
.string "GIOVANNI: Tal y como temía, todo apunta\n"
	.string "a que se trata de DEVON S.A.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_10:
.string "ANDRA: ¿DEVON?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_11:
.string "GIOVANNI: OAK y BLAINE contactaron\n"
	.string "con ellos en el pasado, antes de que\l"
	.string "{PLAYER} les derrotara. Gracias a\l"
	.string "ello obtuvieron la financiación\l"
	.string "necesaria para clonar de nuevo a\l"
	.string "MEWTWO y resucitar a DEOXYS.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_12:
.string "ANDRA: ¿Y…?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_13:
.string "GIOVANNI: Y DEVON accedió, con la\n"
	.string "condición de entregar todo el material\l"
	.string "referente a DEOXYS. Afortunadamente,\l"
	.string "de MEWTWO no dijeron una sola palabra.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_14:
.string "Tal vez sea algo pronto, pero…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_15:
.string "¡{PLAYER}! Quiero que acompañes a\n"
	.string "ANDRA a nuestra sucursal en HOENN, y\l"
	.string "te dé nociones generales sobre la\l"
	.string "región.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_16:
.string "La demolición de TORRE LAVANDA es\n"
	.string "inminente, en este momento ya deben de\l"
	.string "haber evacuado todo para llevarla a\l"
	.string "cabo. Mientras, nada os retiene aquí, y\l"
	.string "nuestra BASE en HOENN es la única que\l"
	.string "aún no has visitado.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_17:
.string "En cuanto TORRE LAVANDA sea demolida,\n"
	.string "comenzará la construcción en tiempo\l"
	.string "récord de la nueva TORRE RADIO.\l"
	.string "Entretanto, os informo de que se\l"
	.string "celebrará la II GRAN REUNIÓN EN\l"
	.string "TRIGAL.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_18:
.string "ANDRA: ¡Wow! Ahora que KANTO y JOHTO\n"
	.string "están a punto de lograr la unión que se\l"
	.string "propuso en la I GRAN REUNIÓN…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_19:
.string "GIOVANNI: Tenemos todo para convertir\n"
	.string "al binomio KANTO-JOHTO en la principal\l"
	.string "potencia del MUNDO POKÉMON.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_20:
.string "ANDRA: Suena… impactante.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_21:
.string "GIOVANNI: Y lo será, ya lo verás cuando\n"
	.string "veas lo que hay por mostrar, pero por el\l"
	.string "momento… Tenéis a vuestra disposición\l"
	.string "el teletransporte que manda a HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_22:
.string "Espero que guíes correctamente a\n"
	.string "{PLAYER} por HOENN, estad atentos a\l"
	.string "mi llamada.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_23:
.string "ANDRA: No se preocupe, {PLAYER} no\n"
	.string "perderá el tiempo allí, ¡seguro!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_24:
.string "Te espero en la entrada a la base de\n"
	.string "HOENN, ¡haré de guía turística!$"

RocketHideout_8F_Mision_Neo_Canela::
lock
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 7
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1
waitmovement 0x0
playse SE_PIN
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_6 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Neo_Canela_Move_6
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_9 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
fadescreen 1
delay 20
removeobject 7
removeobject 8
fadescreen 0
setvar VAR_UNUSED_0x40F7, 191
release
end

RocketHideout_8F_Mision_Neo_Canela_Move_8:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_7:
face_right
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_5:
face_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_4:
face_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_2:
walk_slow_up
walk_slow_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1:
walk_up
walk_up
walk_up
walk_up
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Texto_1:
.string "????: Logré escapar en el último\n"
	.string "momento, gracias al TELETRANSPORTE de\l"
	.string "mi MAGMORTAR.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_2:
.string "GIOVANNI: {PLAYER}, tu ausencia en\n"
	.string "KANTO-JOHTO te ha impedido enterarte,\l"
	.string "pero el fenómeno se ha sentido en las\l"
	.string "dos regiones: el volcán de ISLA CANELA\l"
	.string "ha estallado, y ha engullido todo a su\l"
	.string "paso.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_3:
.string "BLAINE: El LABORATORIO… la MANSIÓN\n"
	.string "POKÉMON… el GIMNASIO… todo yace ahora\l"
	.string "en el fondo del mar.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_4:
.string "OAK: La cuestión es que, después de la I\n"
	.string "CONFERENCIA DE TRIGAL, continuamos\l"
	.string "con nuestras investigaciones allí. Una\l"
	.string "parte muy importante de nuestros\l"
	.string "últimos proyectos está ahora perdida,\l"
	.string "decenas de metros bajo tierra.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_5:
.string "BLAINE: Por suerte, las zonas\n"
	.string "subterráneas más importantes fueron\l"
	.string "hechas a prueba de todo desastre\l"
	.string "natural. Después de que {PLAYER}\l"
	.string "nos derrotara, construimos\l"
	.string "muchos pisos subterráneos más, son\l"
	.string "como un búnker subterráneo.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_6:
.string "GIOVANNI: Cabe entonces la posibilidad\n"
	.string "de que no hayan sido destruidos.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_7:
.string "OAK: Debemos comprobarlo, sabes tan\n"
	.string "bien como yo la preciada información\l"
	.string "que guardamos ahí dentro.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_8:
.string "BLAINE: Pero no puede ir cualquiera, la\n"
	.string "erupción habrá liberado a todos los\l"
	.string "prototipos que ahí teníamos en fase\l"
	.string "de prueba.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_9:
.string "GIOVANNI: Estamos de acuerdo, el más\n"
	.string "indicado para realizar esta misión es\l"
	.string "{PLAYER}. Cuenta con experiencia más que\l"
	.string "sobrada en esta clase de situaciones.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_10:
.string "OAK: Así es, te estaré esperando en\n"
	.string "ISLA CANELA, {PLAYER}, ahí te diré\l"
	.string "exactamente lo que debes hacer.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_11:
.string "BLAINE: Es un alivio tener a un\n"
	.string "ENTRENADOR como tú de nuestro lado,\l"
	.string "espero que puedas recuperar todo lo\l"
	.string "posible de esta catástrofe.$"

RocketHideout_8F_Mision_Central_Energia::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_1 MSGBOX_DEFAULT
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_2 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_3 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SILVALLY, 70, ITEM_NONE
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_11 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 202
release
end

RocketHideout_8F_Mision_Central_Energia_Move_5:
walk_slow_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Central_Energia_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Mision_Central_Energia_Move_1:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Central_Energia_Texto_1:
.string "({PLAYER} entregó a GIOVANNI el\n"
	.string "DISCO DURO)$"

RocketHideout_8F_Mision_Central_Energia_Texto_2:
.string "GIOVANNI: No esperaba menos de ti,\n"
	.string "{PLAYER}. No hay recompensa que\l"
	.string "pueda igualar la información que\l"
	.string "acabas de recuperar. Hay millones\l"
	.string "invertidos en investigación aquí\l"
	.string "dentro, qué menos que darte unos\l"
	.string "tantos de ellos.$"

RocketHideout_8F_Mision_Central_Energia_Texto_3:
.string "¡{PLAYER} OBTUVO 2 MILLONES DE\n"
	.string "POKÉS!$"

RocketHideout_8F_Mision_Central_Energia_Texto_4:
.string "Toma esto también, es un proyecto\n"
	.string "proveniente de una región lejana,\l"
	.string "algunos de nuestros mejores\l"
	.string "científicos han tenido contacto con\l"
	.string "él.$"

RocketHideout_8F_Mision_Central_Energia_Texto_5:
.string "¡OBTUVISTE UN SILVALLY AL NV.70!$"

RocketHideout_8F_Mision_Central_Energia_Texto_6:
.string "Al parecer, puede cambiar de tipo en\n"
	.string "función del objeto que lleve equipado.\l"
	.string "En los pisos superiores de la TORRE\l"
	.string "RADIO de LAVANDA se venderán, dentro\l"
	.string "de muy poco podrás entrar, {PLAYER}.$"

RocketHideout_8F_Mision_Central_Energia_Texto_7:
.string "Volviendo al tema de CANELA…\n"
	.string "Agradecería que no hablaras con nadie\l"
	.string "sobre lo que hayas podido ver ahí, ni\l"
	.string "siquiera con ANDRA.$"

RocketHideout_8F_Mision_Central_Energia_Texto_8:
.string "Muchos de los prototipos que ahí\n"
	.string "dejamos están en fase de prueba, son\l"
	.string "inestables y están por perfeccionar.\l"
	.string "Aún así, habrás sentido el tremendo\l"
	.string "potencial de algunos.$"

RocketHideout_8F_Mision_Central_Energia_Texto_9:
.string "Hasta que no estemos seguros de tener\n"
	.string "algo grande de verdad, que podamos\l"
	.string "controlar con total garantía… esos\l"
	.string "proyectos son totalmente\l"
	.string "confidenciales, ¿me entiendes\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Central_Energia_Texto_10:
.string "Ahora, hablemos de tu próxima misión:\n"
	.string "finiquitar el asunto de las vías hacia\l"
	.string "AZAFRÁN.$"

RocketHideout_8F_Mision_Central_Energia_Texto_11:
.string "Al parecer, ese extraño POKÉMON ha\n"
	.string "vuelto, y está interfiriendo con la\l"
	.string "fase final de la construcción.$"

RocketHideout_8F_Mision_Central_Energia_Texto_12:
.string "Me temo que no queda otra que\n"
	.string "capturarlo para que definitivamente no\l"
	.string "cause más problemas.$"

RocketHideout_8F_Mision_Central_Energia_Texto_13:
.string "De modo que tu misión será, a las\n"
	.string "vísperas de la II GRAN REUNIÓN en\l"
	.string "TRIGAL, hacerte cargo de ese POKÉMON.$"

RocketHideout_8F_Mision_Central_Energia_Texto_14:
.string "Yo partiré ya hacia TRIGAL, debo montar\n"
	.string "los preparativos de la reunión junto\l"
	.string "con el PRESIDENTE.$"

RocketHideout_8F_Mision_Central_Energia_Texto_15:
.string "Es el momento de ir recogiendo los\n"
	.string "frutos de nuestro trabajo, {PLAYER}.\l"
	.string "En muy poco tiempo estamos viviendo\l"
	.string "grandes transformaciones en ambas\l"
	.string "regiones, esas mismas que llevan 1 año\l"
	.string "fraguándose, desde la I GRAN REUNIÓN o\l"
	.string "incluso antes.$"



RocketHideout_8F_Final_DLC::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Final_DLC_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_2, RocketHideout_8F_Final_DLC_Texto_14
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Final_DLC_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_MEWTWO, 70, ITEM_MEWTWONITE_Y
waitfanfare
msgbox RocketHideout_8F_Final_DLC_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Final_DLC_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 216
release
end

RocketHideout_8F_Final_DLC_Move_7:
walk_slow_down
step_end

RocketHideout_8F_Final_DLC_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_5:
face_up
step_end

RocketHideout_8F_Final_DLC_Move_4:
walk_slow_left
step_end

RocketHideout_8F_Final_DLC_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Final_DLC_Move_2:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_1:
face_right
step_end

RocketHideout_8F_Final_DLC_Texto_1:
.string "GIOVANNI: ¡{PLAYER}! Debimos estar\n"
	.string "ahí ATLAS y yo. Cuéntame todo, ¿y\l"
	.string "ANDRA?.$"

RocketHideout_8F_Final_DLC_Texto_2:
.string "Ya veo. Debimos suponer que el ambiente\n"
	.string "y rol de DEVON eran muy atractivos para\l"
	.string "alguien como el ayudante de BILL.\l"
	.string "Supongo que tenía razón, nunca le\l"
	.string "prestamos la atención suficiente.$"

RocketHideout_8F_Final_DLC_Texto_3:
.string "En cuanto a ANDRA… tal vez sea mejor\n"
	.string "así. Después de todo, puede que su\l"
	.string "búsqueda concluya en un\l"
	.string "descubrimiento más importante que\l"
	.string "todas las investigaciones que estamos\l"
	.string "llevando a cabo…$"

RocketHideout_8F_Final_DLC_Texto_4:
.string "Por otro lado, DEVON ha movido ficha.\n"
	.string "Esto no cambia en nada nuestros\l"
	.string "planes, a pesar de que sepan todo lo\l"
	.string "hablado en la II GRAN REUNIÓN.$"

RocketHideout_8F_Final_DLC_Texto_5:
.string "Ante la ausencia de ANDRA, nuestra BASE\n"
	.string "de HOENN ha quedado sin un LÍDER, tú\l"
	.string "estarás al mando. Después de lo de\l"
	.string "RUINAS ALFA, todos los POKÉMON\l"
	.string "LEGENDARIOS que allí se concentraron\l"
	.string "volvieron a su lugar de origen. Esto\l"
	.string "implica que los 3 LEGENDARIOS de\l"
	.string "HOENN: KYOGRE, GROUDON y RAYQUAZA,\l"
	.string "estarán allí, uno de tus objetivos será\l"
	.string "encontrarlos, para poder estudiarlos.\l"
	.string "Sin embargo…$"

RocketHideout_8F_Final_DLC_Texto_6:
.string "Tu misión primordial será obtener toda\n"
	.string "la información posible sobre DEVON.$"

RocketHideout_8F_Final_DLC_Texto_7:
.string "Dónde opera, en qué lugar asienta sus\n"
	.string "laboratorios de investigación, cuáles\l"
	.string "son sus proyectos y ambiciones…$"

RocketHideout_8F_Final_DLC_Texto_8:
.string "OAK vino poco antes que tú, fue el\n"
	.string "primero en ponerme al tanto.$"

RocketHideout_8F_Final_DLC_Texto_9:
.string "Se enfrentó personalmente a su\n"
	.string "PRESIDENTE, y fue derrotado. Esto al\l"
	.string "tiempo que sus EJECUTIVOS contuvieron\l"
	.string "a BILL, ANDRA y ELM.$"

RocketHideout_8F_Final_DLC_Texto_10:
.string "No hay duda de que cuentan con\n"
	.string "recursos, y conocen bien el arte del\l"
	.string "combate POKÉMON.$"

RocketHideout_8F_Final_DLC_Texto_11:
.string "Tal vez puedan llevarte al límite de tu\n"
	.string "nivel, más aún que en RUINAS ALFA,\l"
	.string "quién sabe.$"

RocketHideout_8F_Final_DLC_Texto_12:
.string "Es por ello, {PLAYER}, que quiero\n"
	.string "volver a ponerte a prueba, esta vez\l"
	.string "haciendo uso de nuestros proyectos\l"
	.string "más punteros.$"

RocketHideout_8F_Final_DLC_Texto_13:
.string "Ahora, ¡enfrenta todo el poder de la\n"
	.string "tecnología desarrollada por 2\l"
	.string "regiones!$"

RocketHideout_8F_Final_DLC_Texto_14:
.string "Asombroso, sigues estando en la cima.$"

RocketHideout_8F_Final_DLC_Texto_15:
.string "No hay duda, eres el activo más valioso\n"
	.string "con el que el TEAM ROCKET cuenta. Tu\l"
	.string "historia como ENTRENADOR LEGENDARIO\l"
	.string "tiene aún mucho por ofrecer, créeme.$"

RocketHideout_8F_Final_DLC_Texto_16:
.string "Quiero que tengas esto, sé que no\n"
	.string "recurrirás a ello como una panacea que\l"
	.string "solucionará todo, tal y como nosotros\l"
	.string "intentamos en el pasado, pero\l"
	.string "considéralo una opción más.$"

RocketHideout_8F_Final_DLC_Texto_17:
.string "¡¡OBTUVISTE UN MEWTWO AL NV.70!!$"

RocketHideout_8F_Final_DLC_Texto_18:
.string "El MEWTWO original es tuyo, {PLAYER}.$"

RocketHideout_8F_Final_DLC_Texto_19:
.string "Por supuesto, viene con lo último en\n"
	.string "tecnología: la MEGA-PIEDRA que le\l"
	.string "convierte en su forma Y. Como dije en la\l"
	.string "reunión, el &-VOLCARONA que\l"
	.string "enfrentaste fue vital en la mejora de\l"
	.string "su ATAQUE ESPECIAL hasta niveles\l"
	.string "estratosféricos.$"

RocketHideout_8F_Final_DLC_Texto_20:
.string "Eso es todo, {PLAYER}. Te recomiendo\n"
	.string "explorar y adaptarte poco a poco a\l"
	.string "HOENN. La sede de DEVON está en CIUDAD\l"
	.string "FÉRRICA, sin embargo, no sabemos si ese\l"
	.string "es o no su centro de operaciones.$"

RocketHideout_8F_Final_DLC_Texto_21:
.string "Mientras, seguiremos desarrollando los\n"
	.string "prototipos de nivel II y …III. Hasta\l"
	.string "entonces… mantente mejorando.$"

