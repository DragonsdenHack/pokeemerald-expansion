Ecruteak_TinTowerP6_MapScripts::
	.byte 0

TinTowerP6_1::
end



TinTowerP6_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_2:
.string "Saber cosas que otros no saben es\n"
.string "más eficaz cuando los demás no\l"
.string "saben que sabes cosas que no\l"
.string "saben.$"



TinTowerP6_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_3:
.string "Algo han visto los 2 GRANDES\n"
.string "MAESTROS de JOHTO en ti. De lo\l"
.string "contrario, tu presencia aquí no\l"
.string "sería posible.$"



TinTowerP6_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_4:
.string "Del EEVEE de nuestro GRAN MAESTRO,\n"
.string "descienden todos los EEVEES\l"
.string "restantes. Ese EEVEE domina todos\l"
.string "los tipos, y es tan antiguo como\l"
.string "la misma CIUDAD IRIS.$"



TinTowerP6_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_5:
.string "La mayor rémora de la vida es la\n"
.string "espera del mañana y la pérdida del\l"
.string "día de hoy.$"



TinTowerP6_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp6_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp6_Text_6:
.string "Entonces…\n"
.string "GASTLY, HAUNTER y GENGAR no son\l"
.string "los únicos FANTASMA reflejados por\l"
.string "el más allá…\l"
.string "Son solo la parte superficial,\l"
.string "pero tampoco conviene enseñar el\l"
.string "fondo a aquellos no preparados\l"
.string "para asumirlo…$"



TinTowerP6_EventScript_Monje::
	trainerbattle_single TRAINER_AISHA, TinTowerP6_Text_MonjeIntro, TinTowerP6_Text_MonjeDefeated
	msgbox TinTowerP6_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
