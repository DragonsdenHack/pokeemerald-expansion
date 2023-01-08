Route35_House_MapScripts::
	.byte 0

Route35House1::
end



Route35House_EventScript_ReceiveNosepass::
    lock
    faceplayer
	checkmoncatch SPECIES_NOSEPASS
	goto_if_eq VAR_RESULT, FALSE, Route35House_EventScript_TakeNosepass 
	msgbox Route35House_Text_1, MSGBOX_DEFAULT
	release
	end



Route35House_EventScript_TakeNosepass::
    msgbox Route35House_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox Route35House_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox Route35House_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_NOSEPASS, 25, ITEM_ROCK_GEM
	waitfanfare  
	release
	end 



Route35House_Text_TakeNosepass:
    .string "La DEF.ESPECIAL siempre ha sido el\n"
	.string "talón de aquiles de los TIPO ROCA,\l"
	.string "pero conozco a uno con\l"
	.string "una bastante notable.$"



Route35House_Text_TakeNosepass2:
	.string "¡Mira!$"



Route35House_Text_MensajeNosepass:
.string "¡OBTUVISTE UN NOSEPASS AL NV.25!$"


Route35House_Text_1:
    .string "Aunque su capacidad de atacar sea\n"
	.string "nefasta, NOSEPASS es un muro\l"
	.string "decente, que podrá evolucionar a\l"
	.string "un POKÉMON ya a tener en cuenta.$"
