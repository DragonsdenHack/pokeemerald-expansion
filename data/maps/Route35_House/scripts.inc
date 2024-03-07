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
	.string "The SPECIAL DEF. always have been the\n"
	.string "achilles heel of the ROCK TYPE POKÉMON,\l"
	.string "but I know one with a notable special\l"
	.string "defense.$"



Route35House_Text_TakeNosepass2:
	.string "Look!$"



Route35House_Text_MensajeNosepass:
.string "YOU OBTAINED A LV.25 NOSEPASS!$"


Route35House_Text_1:
	.string "Although its attacking prowess is\n"
	.string "abysmal, NOSEPASS serves as a decent\l"
	.string "wall, which can evolve into a OKÉMON\l"
	.string "worth considering.$"
