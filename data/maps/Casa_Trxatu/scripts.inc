Casa_Trxatu_MapScripts::
	.byte 0


CasaTrxatuDocumento_100::
lock     
showmonpic SPECIES_TRXATU, 10, 3  
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER 
msgbox CasaTrxatuDocumento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

CasaTrxatuDocumento_Text_100:
	.string "TRXATU:\p"
	.string "PS: 75\n"
	.string "ATAQUE: 75\l"
	.string "DEFENSA: 75\l"
	.string "ATAQUE ESPECIAL: 115\l"
	.string "DEFENSA ESPECIAL: 115\l"
	.string "VELOCIDAD: 115\l"
	.string "TOTAL: 570$"



CasaTrxatu_Combate::
lock
compare VAR_LILYCOVE_CITY_STATE, 1
goto_if_gt CasaTrxatu_Combate_2
delay 15
msgbox CasaTrxatu_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, CasaTrxatu_Combate_Move_2
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_3
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_5 MSGBOX_AUTOCLOSE
msgbox CasaTrxatu_Combate_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
delay 10
msgbox CasaTrxatu_Combate_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CasaTrxatu_Combate_Move_3
waitmovement 0x0
delay 10
msgbox CasaTrxatu_Combate_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
delay 10
msgbox CasaTrxatu_Combate_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox CasaTrxatu_Combate_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTISTA, CasaTrxatu_Combate_Texto_12
msgbox CasaTrxatu_Combate_Texto_13 MSGBOX_AUTOCLOSE
delay 20
msgbox CasaTrxatu_Combate_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_4
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_15 MSGBOX_AUTOCLOSE
msgbox CasaTrxatu_Combate_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_4
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox CasaTrxatu_Combate_Texto_17.1 MSGBOX_AUTOCLOSE
setvar VAR_LILYCOVE_CITY_STATE, 2
release
end

CasaTrxatu_Combate_2::
lock
faceplayer
msgbox CasaTrxatu_Combate_Texto_18 MSGBOX_AUTOCLOSE
release
end

CasaTrxatu_Combate_Move_1:
face_player
step_end

CasaTrxatu_Combate_Move_2:
emote_exclamation_mark
step_end

CasaTrxatu_Combate_Move_3:
face_up
step_end

CasaTrxatu_Combate_Move_4:
walk_in_place_down
step_end

CasaTrxatu_Combate_Texto_1:
.string "{PAUSE 10}…{PAUSE 10}…{PAUSE 10}$"

CasaTrxatu_Combate_Texto_2:
.string "Vaya, parece que, por muy oculto\n"
	.string "que esté un lugar, siempre habrá\l"
	.string "algún explorador fuera de las\l"
	.string "leyes impuestas que acabará por\l"
	.string "descubrirlo.$"

CasaTrxatu_Combate_Texto_3:
.string "Espero que lo que tengas que decir\n"
	.string "sea más importante que el hecho de\l"
	.string "haber interrumpido mi silencio.$"

CasaTrxatu_Combate_Texto_4:
.string "¿Estuviste en el culto al\n"
	.string "POKÉMON ESENCIA?\p"
	.string "¿Fuiste tú quién acabó con la\n"
	.string "tiranía de LANCE?$"

CasaTrxatu_Combate_Texto_5:
.string "Yo fui parte de ese culto, sin\n"
	.string "embargo, tuve ciertas\l"
	.string "discrepancias con su LÍDER{PAUSE 10}…{PAUSE 10}$"

CasaTrxatu_Combate_Texto_6:
.string "Digamos que logré huir, antes de\n"
	.string "que usara como excusa el\l"
	.string "-sacrificio voluntario-,\l"
	.string "para librarse de mí.$"

CasaTrxatu_Combate_Texto_6.1:
	.string "Podría considerarme un superviviente,\n"
	.string "que vive exiliado tanto por voluntad\l"
	.string "propia como por obligación.$"

CasaTrxatu_Combate_Texto_6.2:
	.string "Nadie puede saber dónde me escondo,\n"
	.string "de lo contrario, él me encontraría.$"

CasaTrxatu_Combate_Texto_6.3:
	.string "Tú debes ser la segunda persona que\n"
	.string "logra entrar y salir de ese lugar.$"

CasaTrxatu_Combate_Texto_7:
.string "Sin embargo, no me siento desdichado,\n"
	.string "¡ni mucho menos!$"

CasaTrxatu_Combate_Texto_7.1:
	.string "Libertad es lo que buscaba cuando\n"
	.string "entré en el culto, y no la encontré.\l"
	.string "Aquí, soy totalmente libre para hacer\l"
	.string "lo que me plazca, solo compito contra\l"
	.string "mí mismo; para bien o para mal, yo soy\l"
	.string "el último responsable de mis actos.$"

CasaTrxatu_Combate_Texto_7.2:
	.string "Todo cuanto quiero está ya aquí.\n"
	.string "Un espléndido paisaje de fondo,\l"
	.string "ruinas milenarias, las cuales\l"
	.string "muchos exploradores pasarán\l"
	.string "toda una vida sin hallar{PAUSE 15}…{PAUSE 15}\l"
	.string "¿Qué más puedo pedir?$"

CasaTrxatu_Combate_Texto_8:
.string "Debes de ser alguien digno de\n"
	.string "conocer, derrotaste a LANCE,\l"
	.string "descubriste el culto más sagrado\l"
	.string "de KANTO y lograste salir airoso{PAUSE 5}…{PAUSE 5}$"

CasaTrxatu_Combate_Texto_9:
.string "Siempre digo que las comparaciones son\n"
	.string "odiosas, y que solo deberíamos competir\l"
	.string "contra nosotros mismos, puesto que el\l"
	.string "único ser con exactamente las mismas\l"
	.string "condiciones que tú, eres tú mismo.$"

CasaTrxatu_Combate_Texto_9.1:
	.string "Una victoria sobre ti es una victoria\n"
	.string "de tu voluntad, ya que el resto de\l"
	.string "factores están en igualdad de\l"
	.string "condiciones.$"

CasaTrxatu_Combate_Texto_10:
.string "Sin embargo, llevo mucho tiempo\n"
	.string "entrenando en solitario.\p"
	.string "He alcanzado un nivel que jamás pensé\n"
	.string "que podría alcanzar, y aún siento esas\l"
	.string "ganas, esa incertidumbre de combatir\l"
	.string "contra otra persona de tú a tú.$"

CasaTrxatu_Combate_Texto_11:
.string "¡Muéstrame de todo lo\n"
	.string "que eres capaz!$"

CasaTrxatu_Combate_Texto_12:
.string "Rozas la excelencia, espléndido.$"

CasaTrxatu_Combate_Texto_13:
.string "Vaya…\n"
	.string "Creí que con el singular POKÉMON\l"
	.string "que capturé en las ruinas de al\l"
	.string "lado, tendría oportunidad ante un\l"
	.string "CAMPEÓN como tú. Parece que hace\l"
	.string "falta algo más que eso para\l"
	.string "doblegar a esos POKÉMON que tan\l"
	.string "duramente has entrenado.$"

CasaTrxatu_Combate_Texto_14:
.string "¿Sabes qué?\n"
	.string "Encontre dos ejemplares de TRXATU\l"
	.string "en esas ruinas, el segundo lo\l"
	.string "tienes justo detrás tuya,\l"
	.string "descansando en la POKÉ BALL.$"

CasaTrxatu_Combate_Texto_15:
.string "Me he informado sobre la línea\n"
	.string "evolutiva de XATU, y su papel en\l"
	.string "antiguas tribus tanto de este\l"
	.string "lugar como de las RUINAS ALFA en\l"
	.string "JOHTO, al parecer adoraban a una\l"
	.string "especie de dios, que no era otro\l"
	.string "que la forma última de XATU.$"

CasaTrxatu_Combate_Texto_16:
.string "Desconozco el proceso que hay que\n"
	.string "seguir para que un XATU normal y\l"
	.string "corriente acabe evolucionando en\l"
	.string "TRXATU, ya que por nivel es\l"
	.string "imposible.\p"
	.string "El interior de esas ruinas seguro\n"
	.string "que algo ha tenido que ver.$"

CasaTrxatu_Combate_Texto_17:
.string "Con todo esto quiero decirte que\n"
	.string "eres libre de llevarte el segundo\l"
	.string "ejemplar que tienes detrás tuya.\l"
	.string "No sé si alguna vez volveré a la\l"
	.string "civilización, ni siquiera si\l"
	.string "volveré, y justo aparece alguien\l"
	.string "como tú en este lugar tan remoto.$"

CasaTrxatu_Combate_Texto_17.1:
	.string "Tal vez sea el destino. Sea como sea,\n"
	.string "eres el ENTRENADOR indicado para que un\l"
	.string "POKÉMON de ese nivel viva grandes\l"
	.string "aventuras y explore sus límites.$"

CasaTrxatu_Combate_Texto_18:
.string "Investigué a fondo las\n"
	.string "características de TRXATU, si\l"
	.string "sientes curiosidad, puedes echarle\l"
	.string "un vistazo a sus datos en mi PC.$"


CasaTrxatu_Ball_Trxatu::
compare VAR_LILYCOVE_CITY_STATE, 1
goto_if_gt CasaTrxatu_Ball_Trxatu_2
msgbox CasaTrxatu_Ball_Trxatu_Texto_1 MSGBOX_AUTOCLOSE
release
end

CasaTrxatu_Ball_Trxatu_2::
playfanfare MUS_OBTAIN_TMHM
msgbox CasaTrxatu_Ball_Trxatu_Texto_2 MSGBOX_DEFAULT
givemon SPECIES_TRXATU, 50, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
removeobject 2
release
end

CasaTrxatu_Ball_Trxatu_Texto_1:
.string "-No debería robar un POKÉMON ajeno,\n"
	.string "los ROCKET tenemos principios.-$"

CasaTrxatu_Ball_Trxatu_Texto_2:
.string "¡¡OBTUVISTE UN TRXATU!!$"

