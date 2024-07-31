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
	.string "The Achilles' heel of ROCK POKÉMON has\n"
	.string "always been SPECIAL DEFENSE, but I\l"
	.string "know one that's notable for it.$"



Route35House_Text_TakeNosepass2:
	.string "Look!$"



Route35House_Text_MensajeNosepass:
.string "YOU OBTAINED A LV.25 NOSEPASS!$"


Route35House_Text_1:
	.string "Although its attacking prowess is\n"
	.string "awful, NOSEPASS is a decent wall, that\l"
	.string "can evolve into a POKÉMON worth\l"
	.string "considering.$"
