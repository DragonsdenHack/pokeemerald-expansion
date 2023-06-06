Ecruteak_TinTowerP5_MapScripts::
	.byte 0

TinTowerP5_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_1:
.string "El vínculo con tus POKÉMON es la\n"
.string "única realidad de este mundo.$"



TinTowerP5_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_2:
.string "Engarza en oro las alas del pájaro\n"
.string "y nunca más volará al cielo.$"



TinTowerP5_3::
end



TinTowerP5_4::
end



TinTowerP5_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_5:
.string "Aceptamos la realidad del mundo\n"
.string "que se nos presenta.$"



TinTowerP5_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp5_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp5_Text_6:
.string "Casi nunca se cumple el guión que\n"
.string "nos hemos marcado para un combate,\l"
.string "siempre surgen imprevistos, y ahí\l"
.string "reside la genialidad del combate\l"
.string "POKÉMON, lo que lo convierte en\l"
.string "mágico, en arte.$"



TinTowerP5_EventScript_Monje::
	trainerbattle_single TRAINER_BRANDI, TinTowerP5_Text_MonjeIntro, TinTowerP5_Text_MonjeDefeated
	msgbox TinTowerP5_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end

TinTowerP5_Foco::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_816, TinTowerP5_Foco_Despues
msgbox TinTowerP5_Foco_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM93
msgbox TinTowerP5_Foco_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_816
release     
end

TinTowerP5_Foco_Despues::
msgbox TinTowerP5_Foco_Texto_2, MSGBOX_NPC
release
end

TinTowerP5_Foco_Texto_1:
.string "El cuerpo y la mente van de la\n"
	.string "mano. Mientras ambas estén en\l"
	.string "equilibrio, todo fluirá.$"

TinTowerP5_Foco_Texto_1.1:
.string "¡¡{PLAYER} obtuvo la MT93 FOCO\n"
	.string "RESPLANDOR de manos de pensador!!$"

TinTowerP5_Foco_Texto_2:
.string "FOCO RESPLANDOR saca el lado especial\n"
	.string "que incluso los TIPO ACERO tienen.$"



