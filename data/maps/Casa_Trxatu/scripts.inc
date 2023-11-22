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
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_7 MSGBOX_AUTOCLOSE
msgbox CasaTrxatu_Combate_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_3
waitmovement 0x0
msgbox CasaTrxatu_Combate_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, CasaTrxatu_Combate_Move_1
waitmovement 0x0
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
.string "... ...$"

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
.string "¿Estuviste en el culto al POKÉMON\n"
	.string "ESENCIA?\l"
	.string "¿Fuiste tú quién acabó con la\l"
	.string "tiranía de LANCE?$"

CasaTrxatu_Combate_Texto_5:
.string "Yo fui parte de ese culto, sin\n"
	.string "embargo, tuve ciertas\l"
	.string "discrepancias con su LÍDER...$"

CasaTrxatu_Combate_Texto_6:
.string "Digamos que logré huir antes de\n"
	.string "que usara como excusa el\l"
	.string "-sacrificio voluntario-, para\l"
	.string "librarse de mi, podría\l"
	.string "considerarme un superviviente, que\l"
	.string "vive exiliado tanto por voluntad\l"
	.string "propia como por obligación, pues\l"
	.string "nadie puede saber donde me\l"
	.string "escondo, de lo contrario él me\l"
	.string "encontraría, tú debes de ser la\l"
	.string "segunda persona que logra entrar y\l"
	.string "salir de ese lugar.$"

CasaTrxatu_Combate_Texto_7:
.string "Sin embargo, no me siento\n"
	.string "desdichado ni mucho menos,\l"
	.string "libertad es lo que buscaba cuando\l"
	.string "entré en el culto, y no la\l"
	.string "encontré, aquí soy totalmente\l"
	.string "libre para hacer lo que me plazca,\l"
	.string "solo compito contra mí mismo, para\l"
	.string "bien o para mal yo soy el último\l"
	.string "responsable de lo que me suceda en\l"
	.string "este lugar, tengo todo cuanto\l"
	.string "quiero aquí para desarrollarme por\l"
	.string "completo, un espléndido paisaje de\l"
	.string "fondo, ruinas milenarias a las que\l"
	.string "muchos exploradores pasarán toda\l"
	.string "una vida sin hallar, ¿qué más\l"
	.string "puedo pedir?$"

CasaTrxatu_Combate_Texto_8:
.string "Debes de ser alguien digno de\n"
	.string "conocer, derrotaste a LANCE,\l"
	.string "descubriste el culto más sagrado\l"
	.string "de KANTO y lograste salir airoso...$"

CasaTrxatu_Combate_Texto_9:
.string "Siempre digo que las comparaciones\n"
	.string "son odiosas, y que solo deberíamos\l"
	.string "competir contra nosotros mismos,\l"
	.string "puesto que el único ser con\l"
	.string "exactamente las mismas condiciones\l"
	.string "que tú, eres tú mismo, una\l"
	.string "victoria sobre ti es una victoria\l"
	.string "de tu voluntad, ya que el resto de\l"
	.string "factores están en igualdad de\l"
	.string "condiciones.$"

CasaTrxatu_Combate_Texto_10:
.string "Sin embargo, llevo mucho tiempo\n"
	.string "entrenando en solitario, he\l"
	.string "alcanzado un nivel que jamás pensé\l"
	.string "que podría alcanzar, aún sigo\l"
	.string "sintiendo esas ganas que produce\l"
	.string "la incertidumbre de combatir\l"
	.string "contra otra persona de tú a tú.$"

CasaTrxatu_Combate_Texto_11:
.string "¡Muéstrame de todo lo que eres\n"
	.string "capaz!$"

CasaTrxatu_Combate_Texto_12:
.string "Rozas la excelencia, espléndido.$"

CasaTrxatu_Combate_Texto_13:
.string "Vaya...\n"
	.string "Creí que con el singular POKÉMON\l"
	.string "que capturé en las ruinas de al\l"
	.string "lado tendría oportunidad ante un\l"
	.string "CAMPEÓN como tú, parece que hace\l"
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
	.string "imposible, seguramente el interior\l"
	.string "de esas ruinas ha tenido algo que\l"
	.string "ver en la existencia de estos\l"
	.string "POKÉMON.$"

CasaTrxatu_Combate_Texto_17:
.string "Con todo esto quiero decirte que\n"
	.string "eres libre de llevarte el segundo\l"
	.string "ejemplar que tienes detrás tuya,\l"
	.string "no sé si alguna vez volveré a la\l"
	.string "civilización, o siquiera si\l"
	.string "volveré, y justo ha aparecido\l"
	.string "alguien como tú en este lugar tan\l"
	.string "remoto, no veo mejor ENTRENADOR\l"
	.string "para que un POKÉMON de ese nivel\l"
	.string "viva grandes aventuras y explote\l"
	.string "todo su potencial.$"

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
.string "(No debería robar un POKÉMON\n"
	.string "ajeno, los ROCKET tenemos\l"
	.string "principios)$"

CasaTrxatu_Ball_Trxatu_Texto_2:
.string "¡¡OBTUVISTE UN TRXATU!!$"

