RocketHideout_3F_MapScripts::
	.byte 0

RocketHideout3F_1::
lock     
faceplayer     
msgbox RocketHideout3F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_1:
.string "En AZULONA se nos acusa de\n"
.string "contaminar la ciudad, ¡no les\l"
.string "falta razón con la que tenemos\l"
.string "montada aquí dentro!\l"
.string "¡Si supieran lo que tienen bajo el\l"
.string "suelo que pisan!$"



RocketHideout3F_2::
lock     
faceplayer     
msgbox RocketHideout3F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_2:
.string "Nuestro trabajo aquí es muy\n"
.string "simple: crear mayor capacidad de\l"
.string "producción, optimizar y\l"
.string "automatizar lo máximo posible\l"
.string "todos los procesos, lo que tú\l"
.string "hiciste en casa de BILL ha ayudado\l"
.string "mucho a ese propósito, desde\l"
.string "luego.$"



RocketHideout3F_3::
lock     
faceplayer     
msgbox RocketHideout3F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_3:
.string "-Nunca serás un ROCKET de verdad\n"
.string "hasta que hagas a un lado tus\l"
.string "sentimientos y te conviertas en\l"
.string "una fría y sanguinaria máquina de\l"
.string "robar y arruinar entrenadores-.\l"
.string "Esa era la visión antigua que se\l"
.string "tenía del ROCKET promedio, nada\l"
.string "más lejos de la realidad, y simple\l"
.string "propaganda promovida por el actual\l"
.string "gobierno, con todo robo que\l"
.string "llevamos acabo solo estamos\l"
.string "recuperando lo que ya se nos\l"
.string "arrebató antes.$"



RocketHideout3F_4::
end



RocketHideout3F_5::
end

RocketHideout_3F_Maquina_Teletransporte_2::
msgbox RocketHideout_3F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_6F, 10, 16
release
end

RocketHideout_3F_Maquina_Teletransporte_YesNo:
.string "La máquina está lista para ser\n"
	.string "usada, ¿quieres teletransportarte\l"
	.string "a la BASE de RUTA 5?$"

RocketHideout_3F_Maquina_Teletransporte_No::
release
end
