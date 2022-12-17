Ecruteak_TinTowerP2_MapScripts::
	.byte 0

TinTowerP2_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_1:
.string "El verdadero ENTRENADOR no es\n"
.string "inmune al miedo.\l"
.string "Lucha a pesar de él.$"



TinTowerP2_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_2:
.string "Cuantos más datos tengamos, más\n"
.string "posibilidades tenemos de ahogarnos\l"
.string "en ellos.$"



TinTowerP2_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_3:
.string "Cada combate es un espacio\n"
.string "cerrado, una burbuja.\l"
.string "Y en esa burbuja solo existen\l"
.string "ambos ENTRENADORES y sus POKÉMON.\l"
.string "Hay que dejar fuera todo lo otro,\l"
.string "las excusas, la falta de\l"
.string "entrenamiento, todos los\l"
.string "problemas…\l"
.string "Un combate es toda una vida.$"



TinTowerP2_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_4:
.string "La presión es un arma de doble\n"
.string "filo, te mantiene alerta, con\l"
.string "todos tus sentidos despiertos,\l"
.string "pero también puede bloquearte y\l"
.string "derivar en ansiedad.\l"
.string "No obstante, no deja de ser un\l"
.string "privilegio, una señal más de que\l"
.string "estamos vivos, y de estar peleando\l"
.string "por aquellas cosas que nos\l"
.string "importan.$"



TinTowerP2_5::
end



TinTowerP2_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_6:
.string "No tienes nada que demostrar,\n"
.string "salvo a ti mismo.\l"
.string "Mientras tengas un poco de aire,\l"
.string "tienes una oportunidad.$"



TinTowerP2_EventScript_Monje::
	trainerbattle_single TRAINER_DEVAN, TinTowerP2_Text_MonjeIntro, TinTowerP2_Text_MonjeDefeated
	msgbox TinTowerP2_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
