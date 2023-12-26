Pass_Route38_MapScripts::
	.byte 0

PassRoute38_1::
lock     
faceplayer     
msgbox Pass_Route38_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route38_Text_1:
.string "Más al oeste podrás encontrar la\n"
.string "GRANJA MU-MU.\l"
.string "¡Su leche es la mejor bebida en\l"
.string "relación calidad-precio que\l"
.string "existe!$"



PassRoute38_2::
end



PassRoute38_3::
lock     
faceplayer     
msgbox Pass_Route38_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route38_Text_3:
.string "Ten cuidado en la siguiente ruta,\n"
.string "los TAUROS campan a sus anchas, ¡y\l"
.string "embisten a todo el que consideren\l"
.string "una amenaza!$"

Ecruteak_EventScript_ReceiveAbsol::
    lock
    faceplayer
	checkmoncatch SPECIES_ABSOL
	goto_if_eq VAR_RESULT, FALSE, Pass_Route38_EventScript_TakeNosepass 
	msgbox Pass_Route_38_Text_1, MSGBOX_DEFAULT
	release
	end



Pass_Route38_EventScript_TakeNosepass::
    msgbox Pass_Route38_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox Pass_Route38_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox Pass_Route38_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_ABSOL, 25, ITEM_NONE
	waitfanfare  
	release
	end 



Pass_Route38_Text_TakeNosepass:
	.string "Esta ciudad ha visto muchas\n"
	.string "calamidades, por ello conviene estar\l"
	.string "preparado para todo lo que pueda venir.$"



Pass_Route38_Text_TakeNosepass2:
	.string "Hablando de calamidades, un POKÉMON\n"
	.string "como este no te vendría mal.$"



Pass_Route38_Text_MensajeNosepass:
.string "¡OBTUVISTE UN ABSOL AL NV.25!$"


Pass_Route_38_Text_1:
	.string "La ahora antigua LÍDER de CIUDAD\n"
	.string "TRIGAL tenía un ABSOL, era magnífico,\l"
	.string "tanto que parecía la evolución de un\l"
	.string "ABSOL corriente.$"
