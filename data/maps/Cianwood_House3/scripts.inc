Cianwood_House3_MapScripts::
	.byte 0

CianwoodHouse3_1::
lock     
faceplayer     
msgbox CianwoodCity_House3_Text_1, MSGBOX_DEFAULT
release     
end

CianwoodCity_House3_Text_1:
.string "He oído que planean hacer otra\n"
.string "ZONA SAFARI por aquí cerca,\l"
.string "¿afectará eso a nuestra ciudad?$"



CianwoodHouse3_2::
lock     
faceplayer     
msgbox CianwoodCity_House3_Text_2, MSGBOX_DEFAULT
release     
end

CianwoodCity_House3_Text_2:
.string "No hay nada como ORQUÍDEA,\n"
.string "¡créeme!\l"
.string "¡Esta ciudad está bendecida con\l"
.string "los frutos del mar!$"



CianwoodHouse3_3::
end

CianwoodCity_EventScript_ReceiveAron::
    lock
    faceplayer
	checkmoncatch SPECIES_ARON
	goto_if_eq VAR_RESULT, FALSE, CianwoodCity_Aron_EventScript_TakeNosepass 
	msgbox CianwoodCity_Aron_Text_1, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Aron_EventScript_TakeNosepass::
lock
faceplayer
    msgbox CianwoodCity_Aron_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox CianwoodCity_Aron_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox CianwoodCity_Aron_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_ARON, 25, ITEM_NONE
	waitfanfare  
	release
	end 



CianwoodCity_Aron_Text_TakeNosepass:
	.string "Esos montañeros de por aquí solo\n"
	.string "hablan de GEODUDE, ONYX o DONPHAN. Lo\l"
	.string "que no saben es que hay POKÉMON TIPO\l"
	.string "ROCA también increíbles en otras\l"
	.string "regiones.$"



CianwoodCity_Aron_Text_TakeNosepass2:
	.string "Mira, aquí tienes un ejemplo.$"



CianwoodCity_Aron_Text_MensajeNosepass:
.string "¡OBTUVISTE UN ARON AL NV.25!$"


CianwoodCity_Aron_Text_1:
	.string "ARON puede evolucionar a un POKÉMON\n"
	.string "cuya defensa física rivaliza con la de\l"
	.string "STEELIX. Gracias a CROM pude conocerlo.$"
