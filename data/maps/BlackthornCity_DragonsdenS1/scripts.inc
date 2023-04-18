BlackthornCity_DragonsdenS1_MapScripts::
	.byte 0

DragonsdenS1_1::
lock     
faceplayer     
msgbox DragonsdenS1_Text_1, MSGBOX_DEFAULT
release     
end

DragonsdenS1_Text_1:
.string "Todo el que ansía un poder mayor\n"
.string "del que puede comprender acaba\l"
.string "siendo devorado por él, y ese ZEUS\l"
.string "no tiene idea de la magnitud del\l"
.string "poder que quiere despertar.$"



DragonsdenS1_2::
lock
msgbox DragonsdenS1_2_Text_2, MSGBOX_SIGN
release
end

DragonsdenS1_2_Text_2:
.string "GUARIDA DRAGÓN$"



DragonsdenS1_3::
end



DragonsdenS1_4::
lock     
faceplayer     
msgbox DragonsdenS1_Text_4, MSGBOX_DEFAULT
release     
end

DragonsdenS1_Text_4:
.string "¿Quién eres tú?\n"
.string "Si no eres especialista en el TIPO\l"
.string "DRAGÓN no deberías estar aquí.\l"
.string "¡Jah, apuesto a que ninguno de tus\l"
.string "POKÉMON supera siquiera la\l"
.string "jerarquía de un KINGDRA, ni\l"
.string "hablemos de un PSEUDOLEGENDARIO\l"
.string "como DRAGONITE!\l"
.string "¡El mundo POKÉMON fuera del TIPO\l"
.string "DRAGÓN es tan mediocre!$"



DragonsdenS1_EventScript_ReceiveDrampa::
    lock
    faceplayer
	checkmoncatch SPECIES_DRAMPA
	goto_if_eq VAR_RESULT, FALSE, DragonsdenS1_EventScript_TakeDrampa 
	msgbox DragonsdenS1_Text_2, MSGBOX_DEFAULT
	release
	end



DragonsdenS1_EventScript_TakeDrampa::
    msgbox DragonsdenS1_Text_TakeDrampa MSGBOX_DEFAULT
	msgbox DragonsdenS1_Text_TakeDrampa2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox DragonsdenS1_Text_MensajeDrampa, MSGBOX_DEFAULT
	givemon SPECIES_DRAMPA, 50, ITEM_DRAGON_GEM
	waitfanfare  
	release
	end 



DragonsdenS1_Text_TakeDrampa:
   .string "Muy pocos son los elegidos a los\n"
	.string "que se les permite la entrada a\l"
	.string "este lugar sagrado, debes de ser\l"
	.string "{PLAYER}.$"



DragonsdenS1_Text_TakeDrampa2:
	.string "Que este POKÉMON te llene de\n"
	.string "sabiduría y compañia en tus\l"
	.string "viajes.$"



DragonsdenS1_Text_MensajeDrampa:
.string "¡OBTUVISTE UN DRAMPA AL NV.50!$"


DragonsdenS1_Text_2:
    .string "DRAMPA es un dragón muy singular.\n"
	.string "Se centra en el ATAQUE ESPECIAL,\l"
	.string "símbolo de su gran sabíduría. Es\l"
	.string "muy lento, pero también de buenas\l"
	.string "defensas. La GUARIDA DRAGÓN\l"
	.string "siempre contó con algunos\l"
	.string "ejemplares en lo más profundo de\l"
	.string "sus cavernas, espero que sepas\l"
	.string "guardar el secreto.$"
